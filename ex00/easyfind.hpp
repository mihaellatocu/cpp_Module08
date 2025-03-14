#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iomanip>
# include <vector>
# include <algorithm>


//template <typename T>
// int easyfind(T *arr, int size, int x)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == x)
//             return (i);
//     }
//     return (-1);
// }

template <typename T>
void easyfind(T &arr, int x)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), x);
    std::cout << *it;
    if (it == arr.end())
        std::cout << " I am at the end of array.\n";
    else
        std::cout << *it << std::endl;
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == x)
    //         return (i);
    // }
    // return (-1);
}

#endif