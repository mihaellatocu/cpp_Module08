#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>


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

int size = array2.size();
std::cout << size << std::endl;
template <typename T>
for (typename T::iterator it = array.begin(); it != array2.end(); it++)
        std::cout << *it << " ";
std::cout <<std::endl;
// int found = easyfind(array, 2);
// if ( found >= 0)
//     std::cout << "Found at index: " << found << std::endl;
// else
//     std::cout << "The value is not in the vector"<< std::endl;
easyfind(array2, 96);
// found = easyfind(array2, 59);
// if ( found >= 0)
//     std::cout << "Found at index: " << found << std::endl;
// else
//     std::cout << "The value is not in the vector"<< std::endl;

return (0);
}