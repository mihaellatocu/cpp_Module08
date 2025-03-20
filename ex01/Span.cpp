#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N)
{
}

Span::~Span()
{}

Span::Span(const Span& other) 
{
	maxSize = other.maxSize;
	numbers = other.numbers;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		maxSize = other.maxSize;
		numbers = other.numbers;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if(numbers.size() >= maxSize)
	{
		std::ostringstream errorMsg;
		errorMsg << "The number " << num << " cannot de added into the vector list\n";
		throw std::overflow_error(errorMsg.str());
	
	}
		else
		numbers.push_back(num);
}

int Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("The list has less than 2 elem to check the shortest Span.\n");
	
	std::vector<int> sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 1; i < sortedNumbers.size() - 1; i++)
	{
		int diff = sortedNumbers[i + 1] - sortedNumbers[i];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}
int Span::longestSpan() const 
{
	if (numbers.size() < 2)
		throw std::logic_error("The list has less than 2 elem to check the longest Span.\n");

	int minVal = *std::min_element(numbers.begin(), numbers.end());
	int maxVal = *std::max_element(numbers.begin(), numbers.end());

	return (maxVal - minVal);
}


void Span::printList()
{
	std::cout << "Elements: ";
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
}