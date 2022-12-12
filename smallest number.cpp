#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter Three Numbers: ";
    cin>> a>> b>> c;
    if (a<b&&a<c)
    {
        cout<<"Smallest Numbers is: "<<a;
    }
    else if(b<a&&b<c)
    {
         cout<<"Smallest Numbers is: "<<b;
    }
    else
    {

         cout<<"Smallest Numbers is: "<<c;
    }
    return 0;
}
