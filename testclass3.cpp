#include<iostream>
using namespace std;
class pen;
class book{
    private :
        string title;
        float price;
        int total_pages;
    public :
        void input();
        void output();
        friend void compare(book x, pen y);
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
    class pen{
        string type;
        float price;
        public :
        void input();
        void display();
        friend void compare(book x, pen y);
    };
    void pen ::input()
    {
        cout<<" Enter the Type of the Pen :";
        cin>>type;
        cout<<" Enter the Price of the Pen :";
        cin>>price;
    }
    void pen ::display()
    {
        cout<<" The Title of the Pen is :"<<type<<endl;
        cout<<" The Price of the Pen is :"<<price<<endl;
    }
    void compare(book x, pen y)
    {
        if(x.price>y.price)
        cout<<"\nBook is more costlier."<<endl;
        else if(y.price>x.price)
        cout<<"\nPen is more costlier."<<endl;
        else
        cout<<"\nBoth have equal prices.";
    }
    int main()
    {
        book b;
        pen p;
        cout<<"Details for Book1 :"<<endl;
        b.input();
        b.output();
        cout<<"Details for Pen :"<<endl;
        p.input();
        p.display();
        compare(b,p);
        return 0;
    }