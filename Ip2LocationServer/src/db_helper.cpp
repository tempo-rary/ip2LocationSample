//#include "stdafx.h"

#include <windows.h>
#include <iostream>
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>

#include "db_helper.h"

using namespace std;

struct db
{
	SQLHANDLE sqlenvhandle;
	SQLHANDLE sqlconnectionhandle;

};

void show_error(unsigned int handletype, const SQLHANDLE& handle)
{
	SQLWCHAR sqlstate[1024];
	SQLWCHAR message[1024];
	if (SQL_SUCCESS == SQLGetDiagRec(handletype, handle, 1, sqlstate, NULL, message, 1024, NULL))
		cout << "Message: " << message << "\nSQLSTATE: " << sqlstate << endl;
}

db* connect_db(){

	SQLHANDLE sqlenvhandle;
	SQLHANDLE sqlconnectionhandle;

	db * database = NULL;
	SQLRETURN retcode;
	do
	{
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlenvhandle))
			break;

		if (SQL_SUCCESS != SQLSetEnvAttr(sqlenvhandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
			break;

		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlenvhandle, &sqlconnectionhandle))
			break;

		SQLWCHAR retconstring[1024];
		switch (SQLDriverConnect(sqlconnectionhandle, NULL,
			(SQLWCHAR*)"DRIVER={SQL Server};SERVER=localhost, 1433;DATABASE=MyDatabase;UID=sa;PWD=Admin-123;",
			SQL_NTS, retconstring, 1024, NULL, SQL_DRIVER_NOPROMPT))
		{
		case SQL_SUCCESS_WITH_INFO:
			show_error(SQL_HANDLE_DBC, sqlconnectionhandle);
			break;
		case SQL_INVALID_HANDLE:
		case SQL_ERROR:
			show_error(SQL_HANDLE_DBC, sqlconnectionhandle);
			retcode = -1;
			break;
		default:
			break;
		}

		if (retcode == -1)
			break;
		database = (db* )malloc(sizeof( db));
		database->sqlconnectionhandle = sqlconnectionhandle;
		database->sqlenvhandle = sqlconnectionhandle;

	} while (FALSE);

	return database;
}

void disconect(db* database){
	SQLDisconnect(database->sqlconnectionhandle);
	SQLFreeHandle(SQL_HANDLE_DBC, database->sqlconnectionhandle);
	SQLFreeHandle(SQL_HANDLE_ENV, database->sqlenvhandle);
	free(database);
}
void sql_db_add_location(const char * id, const char * location){
	SQLHANDLE sqlstatementhandle;
	SQLRETURN retcode;
	db * database = connect_db();//todo if null

	do{
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, database->sqlconnectionhandle, &sqlstatementhandle))
			break;

		if (SQL_SUCCESS != SQLExecDirect(sqlstatementhandle, (SQLWCHAR*)"select * from testtable", SQL_NTS))
		{
			show_error(SQL_HANDLE_STMT, sqlstatementhandle);
			break;
		}
		else
		{
			char location[64];
			int ip;
			while (SQLFetch(sqlstatementhandle) == SQL_SUCCESS)
			{
				SQLGetData(sqlstatementhandle, 1, SQL_C_ULONG, &ip, 0, NULL);
				SQLGetData(sqlstatementhandle, 2, SQL_C_CHAR, location, 64, NULL);
				cout << id << " " << location << endl;
			}
		}
	} while (FALSE);
	SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
	disconect(database);
}

char * sql_db_get_location(const char * id){
	SQLHANDLE sqlstatementhandle;
	SQLRETURN retcode;
	db * database = connect_db();//todo if null

	do{
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, database->sqlconnectionhandle, &sqlstatementhandle))
			break;

		if (SQL_SUCCESS != SQLExecDirect(sqlstatementhandle, (SQLWCHAR*)"select * from testtable", SQL_NTS))
		{
			show_error(SQL_HANDLE_STMT, sqlstatementhandle);
			break;
		}
		else
		{
			char location[64];
			int ip;
			while (SQLFetch(sqlstatementhandle) == SQL_SUCCESS)
			{
				SQLGetData(sqlstatementhandle, 1, SQL_C_ULONG, &ip, 0, NULL);
				SQLGetData(sqlstatementhandle, 2, SQL_C_CHAR, location, 64, NULL);
				cout << id << " " << location << endl;
			}
		}
	} while (FALSE);
	SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
	disconect(database);

	return "";
}



