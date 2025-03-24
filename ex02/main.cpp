#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	std::list<int> l;
	if (l.empty())
		std::cout << "The list is empty.\n";
	l.push_back(1);
	l.push_back(3);
	l.push_back(5);
	l.push_back(6);
	l.push_back(8);
	l.push_back(9);
	l.push_back(10);
	std::cout << "Front " << l.front() << std::endl;
	std::cout <<"Back " <<  l.back() << std::endl;
	std::cout <<"Begin " <<  *l.begin() << std::endl;
	std::cout <<"Size " << l.size() << std::endl;
	std::list<int>::iterator itList = l.begin();
	std::list<int>::iterator iteList = l.end();
	while (itList != iteList)
	{
		std::cout << *itList << " ";
		++itList;
	}
	std::cout << std::endl;
	return (0);
}