#include <iostream>

const uint32_t MAX_FIBONACCI_LIMIT = 4000000;

uint32_t calculateEvenFibonacciSum()
{
    uint32_t sum = 0;
    uint32_t first = 1;
    uint32_t second = 1;
    uint32_t third = first + second;

    while (third <= MAX_FIBONACCI_LIMIT)
    {
        sum += third;
        first = second + third;
        second = first + third;
        third = first + second;
    }

    return sum;
}

int main()
{
    std::cout << "Sum of even-valued Fibonacci terms: " << calculateEvenFibonacciSum() << std::endl;
    return 0;
}
