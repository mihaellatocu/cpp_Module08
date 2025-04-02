#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "List test\n";
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

	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(3);
	mstack.push(5);
	mstack.push(6);
	mstack.push(8);
	mstack.push(9);
	mstack.push(10);
	std::cout << "mstack top: " << mstack.top() << "\n";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
	std::cout << "MutantStack test\n";
	
	++it;
	--it;
	while ( it != end)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	mstack.pop();

	std::cout << "FUNCTIONALITY TESTS \n";
	std::stack<int> s(mstack);
	std::cout << "Stack size: " << s.size() << "\n";
	std::cout << "Stack top: " << s.top() << "\n";
	
	return (0);
}