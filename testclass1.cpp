#include<iostream>
using namespace std;
class book{
    private :
        string title;
        float price;
        int total_pages;
    public :
        void input();
        void output();
};
    void book ::input()
    {
        cout<<" Enter the Title of the Book :";
        cin>>title;
        cout<<" Enter the Price of the Book :";
        cin>>price;
        cout<<" Enter the total no. of pages of the Book :";
        cin>>total_pages;
    }
    void book ::output()
    {
        cout<<" The Title of the Book is :"<<title<<endl;
        cout<<" The Price of the Book is :"<<price<<endl;
        cout<<" The total no of pages of the Book are :"<<total_pages<<endl;
    }
    int main()
    {
        book b1,b2;
        cout<<"Details for Book1 :"<<endl;
        b1.input();
        b1.output();
        cout<<"Details for Book2 :"<<endl;
        b2.input();
        b2.output();
        return 0;
    }