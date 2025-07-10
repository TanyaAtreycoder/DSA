// Problem 1281: Subtract the Product and Sum of Digits of an Integer 
#include<iostream>
using namespace std;
int main()
{
    int n; 
    int sum=0;
    int product=1;
    while(n!=0)
    {
        int digit = n%10;
        product *= digit;
        sum +=  digit ;
        n = n/10;
    }
    int answer = product - sum;
    cout << "The answer is"<< " "<< answer << endl ;
}
