#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the Number: ";
    cin>>number;
   (number%2==0) ? cout<< number <<" is even ": cout<< number <<" is Odd "; // ? works as if and : works as else.
   return 0;
}
