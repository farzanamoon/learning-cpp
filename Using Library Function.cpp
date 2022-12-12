#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter any Letter: ";
    cin>> letter;
    letter= tolower(letter);// this will convert capital letter in small letter.
                           // If need to convert small letter to capital than have to use "toupper";

    if (letter=='a'||letter=='i'||letter=='e'||letter=='o'||letter=='u')
        cout<<"The Letter is Vowel";
    else
        cout<<"The Letter is consonent";
    return 0;

}
