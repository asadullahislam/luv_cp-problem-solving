#include <iostream>

using namespace std;

int main()
{
    int num, reversed = 0;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Print the reversed number
    cout << "The reversed number is: " << reversed << endl;

    return 0;
}
