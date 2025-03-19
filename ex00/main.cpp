#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main() 
{
std::vector<int> array;
array.push_back(1); //[0]
array.push_back(5); //[1]
array.push_back(9); //[2]

std::list<int> array2;
array2.push_back(5); //[0]
array2.push_back(59); //[1]
array2.push_back(96); //[2]

std::deque<char> letters;
letters.push_back('a');
letters.push_back('b');
letters.push_back('d');

std::cout << "Testing vectors:\n";
std::cout << array2.front() << std::endl;
easyfind(array, 2);
easyfind(array, 5);

std::cout << "Testing lists:\n";
easyfind(array2, 99);
easyfind(array2, 96);

std::cout << "Testing chars:\n";
easyfind(letters, 'b');
easyfind(letters, 'f');

std::cout << letters.back();

return (0);
}