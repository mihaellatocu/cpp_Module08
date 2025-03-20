#include <iostream>
#include <list>
#include <vector>
#include "Span.hpp"

int main()
{
	try
	{
		Span sp(5);
		sp.addNumber(3);
		sp.addNumber(-4);
		sp.addNumber(34);
		sp.addNumber(33);
		sp.addNumber(39);
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		try {
			sp.addNumber(89);
		} catch(std::exception& e) {
			std::cerr << e.what() << "\n";
		}

		// Test with many numbers
        Span bigSpan(10000);
        std::vector<int> values;
        for (int i = 0; i < 10000; i++) {
            values.push_back(i * 2);
			bigSpan.addNumber(values[i]);
        }
		bigSpan.addNumber(939383);
        bigSpan.printList();

        std::cout << "Shortest Span (Big Span): " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span (Big Span): " << bigSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}