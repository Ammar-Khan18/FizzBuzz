#include <iostream>

int FizzBuzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

int FizzBuzzIndividual(int n)
{

    if (n % 3 == 0 && n % 5 == 0)
    {
        std::cout << "FizzBuzz" << std::endl;
    }
    else if (n % 3 == 0)
    {
        std::cout << "Fizz" << std::endl;
    }
    else if (n % 5 == 0)
    {
        std::cout << "Buzz" << std::endl;
    }
    else
    {
        std::cout << n << std::endl;
    }
    return 0;
}

// Test Cases
int main()
{
    // Test Case 1: Numbers not divisible by 3 or 5
    std::cout << "Numbers not divisible by 3 or 5:" << std::endl;
    FizzBuzzIndividual(1);
    FizzBuzzIndividual(4);
    FizzBuzzIndividual(7);

    std::cout << "Numbers divisible by 3:" << std::endl;
    FizzBuzzIndividual(3);
    FizzBuzzIndividual(6);
    FizzBuzzIndividual(9);

    std::cout << "Numbers divisible by 5:" << std::endl;
    FizzBuzzIndividual(5);
    FizzBuzzIndividual(10);
    FizzBuzzIndividual(20);

    // Test Case 2: n = 15
    std::cout << "Number divisible by 3 and 5:" << std::endl;
    FizzBuzzIndividual(15);
    FizzBuzzIndividual(30);

    std::cout << "Checking if the function works for a range of numbers from 1 to 100:" << std::endl;
    FizzBuzz(100);

    return 0;
}