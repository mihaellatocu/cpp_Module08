#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <sstream>

class Span
{
private:
	std::vector<int> numbers;
	unsigned int maxSize;
public:
	Span(unsigned int N);
	~Span();

	Span(const Span& other);
	Span& operator=(const Span& other);

	void addNumber(int num);
	int shortestSpan() const;
	int longestSpan() const;

	void printList();
};
