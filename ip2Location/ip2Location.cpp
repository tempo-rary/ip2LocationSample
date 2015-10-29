// ip2Location.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Ip2LocationClient.h"
#include <iostream>

void usage(){
	std::cout << "Usage: ip2location  get <ip_address> | add <ip_address> <country> <state> <city>"<< std::endl;
}
int main(int argc, char* argv[])
{

	if (argc == 3 && strcmp(argv[1],"get") == 0){
		std::cout << "Location of ip: " << argv[2]<< " is " << Ip2LocationClient::getLocation(argv[2]) << std::endl;
	}
	else if (argc == 6 && strcmp(argv[1], "add")==0){
		std::string location(argv[3]);
		location += ",";
		location += argv[4];
		location += ",";
		location += argv[5];
		Ip2LocationClient::addLocation(argv[2], location);
	}
	else{
		usage();
	}

	return 0;
}

