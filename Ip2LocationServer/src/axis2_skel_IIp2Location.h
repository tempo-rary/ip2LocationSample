

    /**
     * axis2_skel_IIp2Location.h
     *
     * This file was auto-generated from WSDL for "IIp2Location|http://ws.apache.org/axis2" service
     * by the Apache Axis2/C version: 1.6.3  Built on : Jun 27, 2015 (11:17:49 BST)
     * axis2_skel_IIp2Location Axis2/C skeleton for the axisService- Header file
     */

    #ifndef AXIS2_SKEL_IIP2LOCATION_H
    #define AXIS2_SKEL_IIP2LOCATION_H

	#include <axis2_svc_skeleton.h>
	#include <axutil_log_default.h>
	#include <axutil_error_default.h>
    #include <axutil_error.h>
	#include <axiom_text.h>
	#include <axiom_node.h>
	#include <axiom_element.h>
    #include <stdio.h>


   
     #include "adb_get.h"
    
     #include "adb_getResponse.h"
    
     #include "adb_add.h"
    

	#ifdef __cplusplus
	extern "C" {
	#endif

     

		 
        /**
         * auto generated function declaration
         * for "get|http://ws.apache.org/axis2" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _get of the adb_get_t*
         *
         * @return adb_getResponse_t*
         */
        adb_getResponse_t* axis2_skel_IIp2Location_get(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_get_t* _get);


     

		 
        /**
         * auto generated function declaration
         * for "add|http://ws.apache.org/axis2" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _add of the adb_add_t*
         *
         * @return 
         */
        axis2_status_t  axis2_skel_IIp2Location_add(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_add_t* _add);


     

    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_SKEL_IIP2LOCATION_ERROR_CODES_START (AXIS2_ERROR_LAST + 2500)

    typedef enum 
    {
        AXIS2_SKEL_IIP2LOCATION_ERROR_NONE = AXIS2_SKEL_IIP2LOCATION_ERROR_CODES_START,
        
        AXIS2_SKEL_IIP2LOCATION_ERROR_LAST
    } axis2_skel_IIp2Location_error_codes;

	#ifdef __cplusplus
	}
	#endif

    #endif
    

