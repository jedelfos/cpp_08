#include "easyfind.hpp"

int		main() {
	try
	{
		std::vector<int>	vect;

		vect.push_back(1);
		vect.push_back(20);
		vect.push_back(4);
		vect.push_back(6);

		easyfind(vect, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int>	vect;

		vect.push_back(11);
		vect.push_back(2);
		vect.push_back(400);
		vect.push_back(66);

		easyfind(vect, 75);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

