#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iomanip>
# include <vector>
# include <algorithm>

template <typename T>
void easyfind(T &arr, int x)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), x);
    if (it != arr.end())
        std::cout << "The " << *it << " is at position " << std::distance(arr.begin(), arr.end()) << std::endl;
    else if (it == arr.end())
        std::cout << "I am at the end of array.\n";
    
   /* std::cout << "Array from function is:\n";
/sau std::vector<int>::iterator it = arr.begin() ....
    for (typename T::iterator it = arr.begin(); it!= arr.end(); it++)
        std::cout << *it << " ";*/
}


// template <typename T>
// typename T::iterator easyfind(T& container, int x)
// {
//     typename T::iterator it = std::find(container.begin(), container.end(), x);
//     if (it != container.end())
//         return it;
//     else
//         throw std::runtime_error ("The value is not in the array.\n");
// }


#endif