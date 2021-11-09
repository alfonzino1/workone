

#include <iostream>

int main()
{
    std::cout <<"enter 3 numbers to get the resulting number in the range from 12 here is the formula by which the solution will be made -- (b ^ 2) - 4 * a /c good luck!!! \n";
    int a;
    std::cout << "enter one number: ";
    std::cin >> a;
    std::cout << "enter two number: ";
    int b;
    std::cin >> b;
    int c;
    std::cout << "enter frie number: ";
    std::cin >> c;

    int d = b*b-4*a/c;

    if ( 12 <= d >= 12)//проверка значений
    {
        std::cout << d;
    }
    else;
    std::cout << "error";


}
