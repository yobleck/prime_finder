#include <iostream>
using namespace std;

int main()
{
    //initialization
    int input, check,base;
    input = 1234567;
    check = 0;
    base = 1;

    cout << "Input Number \n" ;
    cin >> input;

	if (input%2 == 0){cout << "even number";}
	else if (input%5 == 0){cout << "divisible by 5";}

    while (check == 0)
    {
        base+=2;
        if (input%base == 0 && base < input/2){cout << base; check = 1;}
    }
}
