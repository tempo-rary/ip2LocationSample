#ifndef DB_HELPER_H
#define DB_HELPER_H

#ifdef __cplusplus
extern "C"
{
#endif

	void  sql_db_add_location(const char * id, const char *location);
	char* sql_db_get_location(const char * id);
#ifdef __cplusplus
}
#endif
#endif