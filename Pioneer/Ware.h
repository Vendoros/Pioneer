#pragma once
#include <string>

class Ware 
{
public:
	std::string m_name;
	

	Ware();
	~Ware();

	
	
	std::string getName();


private:

	template <typename T>
	void setName(T _name);

	std::string toString();


};



