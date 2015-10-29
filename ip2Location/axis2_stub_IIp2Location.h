

        /**
        * axis2_stub_IIp2Location.h
        *
        * This file was auto-generated from WSDL for "IIp2Location|http://ws.apache.org/axis2" service
        * by the Apache Axis2/Java version: 1.6.3  Built on : Jun 27, 2015 (11:17:49 BST)
        */

        #ifndef AXIS2_STUB_IIP2LOCATION_H
        #define AXIS2_STUB_IIP2LOCATION_H

        #include <stdio.h>
        #include <axiom.h>
        #include <axutil_utils.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>
        #include <axis2_stub.h>

       
         #include "adb_get.h"
        
         #include "adb_getResponse.h"
        
         #include "adb_add.h"
        

	#ifdef __cplusplus
	extern "C" {
	#endif

        /***************** function prototypes - for header file *************/
        /**
         * axis2_stub_create_IIp2Location
         * Create and return the stub with services populated
         * @param env Environment ( mandatory)
         * @param client_home Axis2/C home ( mandatory )
         * @param endpoint_uri Service endpoint uri( optional ) - if NULL default picked from WSDL used
         * @return Newly created stub object
         */
        axis2_stub_t* AXIS2_CALL
        axis2_stub_create_IIp2Location(const axutil_env_t *env,
                                        const axis2_char_t *client_home,
                                        const axis2_char_t *endpoint_uri);
        /**
         * axis2_stub_populate_services_for_IIp2Location
         * populate the svc in stub with the service and operations
         * @param stub The stub
         * @param env environment ( mandatory)
         */
        void AXIS2_CALL 
        axis2_stub_populate_services_for_IIp2Location( axis2_stub_t *stub, const axutil_env_t *env);
        /**
         * axis2_stub_get_endpoint_uri_of_IIp2Location
         * Return the endpoint URI picked from WSDL
         * @param env environment ( mandatory)
         * @return The endpoint picked from WSDL
         */
        axis2_char_t* AXIS2_CALL
        axis2_stub_get_endpoint_uri_of_IIp2Location(const axutil_env_t *env);


        
            /**
             * Auto generated function declaration
             * for "get|http://ws.apache.org/axis2" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _get of the adb_get_t*
             *
             * @return adb_getResponse_t*
             */

            adb_getResponse_t* AXIS2_CALL 
            axis2_stub_op_IIp2Location_get( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_get_t* _get);
          
            /**
             * Auto generated function declaration
             * for "add|http://ws.apache.org/axis2" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _add of the adb_add_t*
             *
             * @return 
             */

            axis2_status_t AXIS2_CALL 
            axis2_stub_op_IIp2Location_add( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_add_t* _add);
          

        /**
         * Auto generated function for asynchronous invocations
         * for "get|http://ws.apache.org/axis2" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _get of the adb_get_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_IIp2Location_get( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_get_t* _get,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_getResponse_t* _getResponse, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        


    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_STUB_IIP2LOCATION_ERROR_CODES_START (AXIS2_ERROR_LAST + 2000)

    typedef enum 
    {
        AXIS2_STUB_IIP2LOCATION_ERROR_NONE = AXIS2_STUB_IIP2LOCATION_ERROR_CODES_START,
        
        AXIS2_STUB_IIP2LOCATION_ERROR_LAST
    } axis2_stub_IIp2Location_error_codes;

	#ifdef __cplusplus
	}
	#endif

    #endif
   

