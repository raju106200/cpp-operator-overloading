#include <iostream>
using namespace std;

class number
{
public:
    int value;

    number(int x)
    {
        value = x;
    }

    number operator+(number obj)
    {
        return number(value + obj.value);
    }

    number operator-(number obj)
    {
        return number(value - obj.value);
    }

    number operator*(number obj)
    {
        return number(value * obj.value);
    }

    number operator/(number obj)
    {
        return number(value / obj.value);
    }
};

int main()
{
    number n1(10);
    number n2(20);

    number addition = n1 + n2;
    cout << "Addition = " << addition.value << endl;

    number subtraction = n1 - n2;
    cout << "Subtraction = " << subtraction.value << endl;

    number multiplication = n1 * n2;
    cout << "Multiplication = " << multiplication.value << endl;

    number division = n2 / n1;
    cout << "Division = " << division.value << endl;

    return 0;
}


