#include<string>
#include <iostream>
#include"Algoritm.h"


int main()
{
	Concrete_builder_1 con_1;
	build(con_1);
	con_1.step_1();
	std::string str_1 = con_1.get_Result();
	std::cout << str_1 << std::endl;

	Concrete_builder_2 con_2;
	build(con_2);
	std::string str_2 = con_2.get_Result();
	std::cout << str_2 << std::endl;


	return 0;
}
