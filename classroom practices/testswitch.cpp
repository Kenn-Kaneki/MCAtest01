#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Vowel :";
    cin>>ch;
    switch (ch)
    {
    case 'a':
    case 'A' :
        cout<<"A for Apple"<<endl;
        break;
    case 'e':
    case 'E' :
        cout<<"E for Elephant"<<endl;
        break;
    case 'i':
    case 'I' :
        cout<<"I for Ice"<<endl;
        break;
    case 'o':
    case 'O' :
        cout<<"O for Owl"<<endl;
        break;
    case 'u':
    case 'U' :
        cout<<"U for Utensile"<<endl;
        break;
    
    default:
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}