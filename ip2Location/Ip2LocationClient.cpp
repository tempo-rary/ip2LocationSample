#include "Ip2LocationClient.h"
#include "axis2_stub_IIp2Location.h"

std::string Ip2LocationClient::getLocation(const std::string& ip){
	
	std::string result;
	const axutil_env_t *env = axutil_env_create_all("Ip2LocationClient.log", AXIS2_LOG_LEVEL_TRACE);

	do{
		const axutil_env_t *env = axutil_env_create_all("Ip2LocationClient.log", AXIS2_LOG_LEVEL_TRACE);

		if (env == NULL)
			break;

		const axis2_char_t *endpoint_uri = "http://localhost:9090/axis2/services/IIp2Location";
		const axis2_char_t *client_home = AXIS2_GETENV("AXIS2C_HOME");

		axis2_stub_t* stub = axis2_stub_create_IIp2Location(env, client_home, endpoint_uri);
		if (stub == NULL)
			break;

		adb_get_t* _get = adb_get_create(env);
		if (_get != NULL){

			adb_get_set_args0(_get, env, ip.c_str());

			adb_getResponse_t* response = axis2_stub_op_IIp2Location_get(stub, env, _get);
			if (response != NULL){
				result = adb_getResponse_get_return(response, env);
			}
			adb_get_free(_get, env);
		}
    }while (FALSE);

	if (env)
	{
		axutil_env_free((axutil_env_t *)env);
		env = NULL;
	}
	return result;
}

void Ip2LocationClient::addLocation(const std::string& ip, const std::string& location){

	const axutil_env_t *env = axutil_env_create_all("Ip2LocationClient.log", AXIS2_LOG_LEVEL_TRACE);

	if (env != NULL){

		const axis2_char_t *endpoint_uri = "http://localhost:9090/axis2/services/IIp2Location";
		const axis2_char_t *client_home = AXIS2_GETENV("AXIS2C_HOME");
	
		axis2_stub_t* stub = axis2_stub_create_IIp2Location(env,client_home, endpoint_uri);

		if (stub){

			adb_add_t* _add = adb_add_create(env);

			if (_add){
				axis2_status_t status = adb_add_set_args0(_add, env, ip.c_str());
				if (status == AXIS2_SUCCESS){
					status = adb_add_set_args1(_add, env, location.c_str());
					if (status == AXIS2_SUCCESS){
						status = axis2_stub_op_IIp2Location_add(stub, env, _add);
					}
				}
				
				adb_add_free(_add, env);
			}
		}
		axutil_env_free((axutil_env_t *)env);
		env = NULL;
	}

}