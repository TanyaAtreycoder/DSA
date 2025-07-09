

// Give an integer x, return "true" if "x" is palindrome and false otherwise.
#include <iostream>
using namespace std;
int main()
{
    int num , original , reversed = 0, digit ;
    cout << "Enter the number:" ;
    cin >> num ;
original = num ;
while (num != 0)
{
    digit = num % 10 ;
    reversed = reversed*10 + digit;
    num = num/10;
}
if ( original == reversed)
{
    cout << "True" << endl;
}
else
{
    cout << "False" <<endl;
}
return 0;
}
