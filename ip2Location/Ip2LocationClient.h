#ifndef IP_2_LOCATION_CLIENT_H
#define IP_2_LOCATION_CLIENT_H

#include <string>


class Ip2LocationClient{
public :
	static std::string getLocation(const std::string& ip);
	static void addLocation(const std::string& ip, const std::string& location);
};
#endif