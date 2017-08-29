#include <iostream>

#include "BigInteger.h"

BigInteger factorial(const BigInteger& n)
{
    if (n == 0) {
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

int main()
{
    //const auto value = factorial(150);
    //std::cout << value.to_string() << std::endl;
    std::cout << (BigInteger(2) ^ BigInteger(2048)).to_string() << std::endl;
}
