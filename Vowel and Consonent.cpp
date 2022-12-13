#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any Letter: ";
    cin>>ch;
    if (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z') //here the main if-else statement.
    {

    if (ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='E'||ch=='U')
      /*This is called nested if-else statement.
     If in one statement we reuse the statement that is called nested */
        cout<<"The Letter is Vowel";
    else
        cout<<"The Letter is consonent";
    }
    else
        cout<<"Not Applicable";
    return 0;

}
