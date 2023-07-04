// #include <iostream>
// using namespace std;

// template <typename T, typename T1>
// void findMinMax()
// {
//     if(T>T1){

//     std::cout << "Minimum value: " << minVal << std::endl;
//     }
//     std::cout << "Maximum value: " << maxVal << std::endl;
// }

// int main()
// {
//     findMinMax<int, 10, 5>();  // Example usage with integer arguments

//     return 0;
// }
#include <iostream>

template <typename T, T... Args>
void findMinMax()
{
    T minVal = (std::min({ Args... }));
    T maxVal = ((Args > ... > minVal) ? Args : minVal);

    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Maximum value: " << maxVal << std::endl;
}

int main()
{
    findMinMax<int, 10, 5, 20, 15>();  // Example usage with integer arguments

    return 0;
}
