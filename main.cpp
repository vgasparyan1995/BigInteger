#include <iostream>

#include "BigInteger.h"

int main()
{
    BigInteger a = 10;
    BigInteger b = 12;
    BigInteger c = a * b;
    std::cout << c.to_integral<long>() << std::endl;
    BigInteger d = c / 4;
    std::cout << d.to_integral<long>() << std::endl;
    BigInteger e = d - 13;
    std::cout << e.to_integral<long>() << std::endl;
}
