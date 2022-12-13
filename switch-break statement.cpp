#include<iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"Enter a Digit: ";
    cin>>digit;
    switch (digit)
    {
        case 0:
         cout<<"This is Zero";
         break;
        case 1:
         cout<<"This is One";
         break;
        case 2:
         cout<< "This is Two";
         break;
        case 3:
        cout<<"This is three";
        break;
        case 4:
        cout<<"This is Four";
        break;
        case 5:
        cout<<"This is Five";
        break;
   /*If the break is not used then the statement never will end or
   it will print the value till the compiler found a break statement.*/
        default:
            cout<<"Not Applicable";
    }
}
