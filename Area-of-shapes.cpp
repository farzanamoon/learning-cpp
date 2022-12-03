#include<iostream>
using namespace std;
int main()
{
    float A,B;
    cin>> A>>B;
    float area= 3.14159*(A*A);

    cout<<"CIRCULO: " <<area; //printing the area of circle
    cout<<endl;

     float ractangle= A*B;
    cout<<"RETANGULO: " <<ractangle; //printing the area of rectangle
    cout<<endl;
    return 0;
}
