
#include "db_helper.h"

    /**
     * axis2_skel_IIp2Location.c
     *
     * This file was auto-generated from WSDL for "IIp2Location|http://ws.apache.org/axis2" service
     * by the Apache Axis2/C version: 1.6.3  Built on : Jun 27, 2015 (11:17:49 BST)
     * axis2_skel_IIp2Location Axis2/C skeleton for the axisService
     */

     #include "axis2_skel_IIp2Location.h"

     

		 
        /**
         * auto generated function definition signature
         * for "get|http://ws.apache.org/axis2" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _get of the adb_get_t*
         *
         * @return adb_getResponse_t*
         */
        adb_getResponse_t* axis2_skel_IIp2Location_get(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                                              adb_get_t* _get )
        {
          /* TODO fill this with the necessary business logic */
			adb_getResponse_t* response = adb_getResponse_create(env);
			if (response != NULL){
				axis2_char_t* ip = adb_get_get_args0(_get,env);
				if (ip != NULL){
					const axis2_char_t*  arg_return = "US,Alabama,Paris";//sql_db_get_location(ip);
					axis2_status_t status = adb_getResponse_set_return(response, env, arg_return);
				}				
			}
			return response;
        }
     

		 
        /**
         * auto generated function definition signature
         * for "add|http://ws.apache.org/axis2" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _add of the adb_add_t*
         *
         * @return 
         */
		axis2_status_t  axis2_skel_IIp2Location_add(const axutil_env_t *env, axis2_msg_ctx_t *msg_ctx,
			adb_add_t* _add)
		{

			if (_add != NULL){
				axis2_char_t* ip =adb_add_get_args0(_add,env);
				axis2_char_t* location = adb_add_get_args1(_add, env);
			//	sql_db_add_location(ip,location);
				return AXIS2_SUCCESS;
		}
          /* TODO fill this with the necessary business logic */
			return AXIS2_FAILURE;
        }
     

