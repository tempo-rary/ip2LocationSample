

      /**
       * axis2_stub_IIp2Location.c
       *
       * This file was auto-generated from WSDL for "IIp2Location|http://ws.apache.org/axis2" service
       * by the Apache Axis2/Java version: 1.6.3  Built on : Jun 27, 2015 (11:17:49 BST)
       */

      #include "axis2_stub_IIp2Location.h"
      #include <axis2_msg.h>
      #include <axis2_policy_include.h>
      #include <neethi_engine.h>


      /**
       * axis2_stub_IIp2Location C implementation
       */

      axis2_stub_t* AXIS2_CALL
      axis2_stub_create_IIp2Location(const axutil_env_t *env,
                                      const axis2_char_t *client_home,
                                      const axis2_char_t *endpoint_uri)
      {
         axis2_stub_t *stub = NULL;
         axis2_endpoint_ref_t *endpoint_ref = NULL;
         AXIS2_FUNC_PARAM_CHECK (client_home, env, NULL)

         if (NULL == endpoint_uri)
         {
            endpoint_uri = axis2_stub_get_endpoint_uri_of_IIp2Location(env);
         }

         endpoint_ref = axis2_endpoint_ref_create(env, endpoint_uri);

         stub = axis2_stub_create_with_endpoint_ref_and_client_home (env, endpoint_ref, client_home);

         if (NULL == stub)
         {
            if(NULL != endpoint_ref)
            {
                axis2_endpoint_ref_free(endpoint_ref, env);
            }
            return NULL;
         }


         axis2_stub_populate_services_for_IIp2Location(stub, env);
         return stub;
      }


      void AXIS2_CALL
      axis2_stub_populate_services_for_IIp2Location(axis2_stub_t *stub, const axutil_env_t *env)
      {
         axis2_svc_client_t *svc_client = NULL;
         axutil_qname_t *svc_qname =  NULL;
         axutil_qname_t *op_qname =  NULL;
         axis2_svc_t *svc = NULL;
         axis2_op_t *op = NULL;
         axis2_op_t *annon_op = NULL;
         axis2_msg_t *msg_out = NULL;
         axis2_msg_t *msg_in = NULL;
         axis2_msg_t *msg_out_fault = NULL;
         axis2_msg_t *msg_in_fault = NULL;
         axis2_policy_include_t *policy_include = NULL;

         axis2_desc_t *desc = NULL;
         axiom_node_t *policy_node = NULL;
         axiom_element_t *policy_root_ele = NULL;
         neethi_policy_t *neethi_policy = NULL;
         axis2_status_t status;

         /* Modifying the Service */
         svc_client = axis2_stub_get_svc_client (stub, env );
         svc = (axis2_svc_t*)axis2_svc_client_get_svc( svc_client, env );

         annon_op = axis2_svc_get_op_with_name(svc, env, AXIS2_ANON_OUT_IN_OP);
         msg_out = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT);
         msg_in = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN);
         msg_out_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT_FAULT);
         msg_in_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN_FAULT);

         svc_qname = axutil_qname_create(env,"IIp2Location" ,NULL, NULL);
         axis2_svc_set_qname (svc, env, svc_qname);
		 axutil_qname_free(svc_qname,env);

         /* creating the operations*/

         
           op_qname = axutil_qname_create(env,
                                         "get" ,
                                         "http://ws.apache.org/axis2",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "add" ,
                                         "http://ws.apache.org/axis2",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_ONLY);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
      }

      /**
       *return end point picked from wsdl
       */
      axis2_char_t* AXIS2_CALL
      axis2_stub_get_endpoint_uri_of_IIp2Location( const axutil_env_t *env )
      {
        axis2_char_t *endpoint_uri = NULL;
        /* set the address from here */
        
              endpoint_uri = "http://localhost:9090/axis2/services/IIp2Location";
            
        return endpoint_uri;
      }


  
         /**
          * auto generated method signature
          * for "get|http://ws.apache.org/axis2" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _get of the adb_get_t*
          *
          * @return adb_getResponse_t*
          */

         adb_getResponse_t* AXIS2_CALL 
         axis2_stub_op_IIp2Location_get( axis2_stub_t *stub, const axutil_env_t *env,
                                               adb_get_t* _get)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getResponse_t* ret_val;
            
                                payload = adb_get_serialize(_get, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_getResponse_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "urn:get";
              soap_act = axutil_string_create(env, "urn:get");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP12);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
                    if ( NULL == ret_node )
                    {
                        return (adb_getResponse_t*)NULL;
                    }
                    ret_val = adb_getResponse_create(env);

                    if(adb_getResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        return (adb_getResponse_t*)NULL;
                    }

                   
                            return ret_val;
                       
        }
        

        struct axis2_stub_IIp2Location_get_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_getResponse_t* _getResponse, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_IIp2Location_get(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_IIp2Location_get_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_IIp2Location_get_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_IIp2Location_get(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_getResponse_t* _getResponse, void *data);
            struct axis2_stub_IIp2Location_get_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            adb_getResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_IIp2Location_get_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                      if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getResponse_create(env);
     
                        if(adb_getResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         status = on_complete(env, ret_val, user_data);
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
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
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_getResponse_t* _getResponse, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_IIp2Location_get_callback_data *callback_data;

            callback_data = (struct axis2_stub_IIp2Location_get_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_IIp2Location_get_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                                payload = adb_get_serialize(_get, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "urn:get";
              soap_act = axutil_string_create(env, "urn:get");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP12);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_IIp2Location_get);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_IIp2Location_get);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         
         /**
          * auto generated method signature for in only mep invocations
          * for "add|http://ws.apache.org/axis2" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _add of the adb_add_t*
          *
          * @return 
          */
         axis2_status_t AXIS2_CALL
         axis2_stub_op_IIp2Location_add( axis2_stub_t *stub, const axutil_env_t *env,
                                              adb_add_t* _add)
         {
            axis2_status_t status;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;

            axutil_string_t *soap_act = NULL;
            
                                payload = adb_add_serialize(_add, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            


            options = axis2_stub_get_options( stub, env);
            if ( NULL == options )
            { 
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
              return AXIS2_FAILURE;
            }
            svc_client = axis2_stub_get_svc_client (stub, env );
            soap_act = axis2_options_get_soap_action ( options, env );
            if ( NULL == soap_act )
            {
              soap_action = "urn:add";
              soap_act = axutil_string_create(env, "urn:add");
              axis2_options_set_soap_action(options, env, soap_act);    
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP12 );
             
            op_qname = axutil_qname_create(env,
                                        "add" ,
                                        "http://ws.apache.org/axis2",
                                        NULL);
            status =  axis2_svc_client_send_robust_with_op_qname( svc_client, env, op_qname, payload);
            return status;

        }
       

