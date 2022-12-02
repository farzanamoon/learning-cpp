// How to print on c++
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout << "Farzana Moon";
    getch ();
}

// how to assign value and print values
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2;
    num1=10;
    num2=20;
    cout<<"number1= "<<num1<<endl<<"number2= "<<num2;
    getch();
}

//How to take and show input in c++
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    cout<<"Enterd number is: "<<num;
    return 0;
}

// Summation with c++
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout<<"Enter Two Numbers:\n";
    cin>> num1 >> num2;
    sum= num1+num2;
    cout<< "The sum is: "<<sum;
    return 0;
}

// floating point with c++
#include<iostream>
#include<iomanip> //if we use setprecision we have use this header file.
using namespace std;

int main()
{
    float num1, num2;
    cout<< "Enter two Numbers: ";
    cin>> num1>> num2;
    cout<<showpoint;
    cout<<fixed;//Using this we can fix how many number we want to show after the point.
    cout<<setprecision (4);// Using this we can fix how many number we want to show before and after the point
    float sum = num1+ num2;
    cout<< setw(20)<<"sum is:" <<sum; // using this we can fix how many character or space we want to show
    cout<< endl;
    cout<< noshowpoint;
    float mul= num1*num2;
    cout<<"multiplication is = "<<mul;
    return 0;

}

