#include<iostream>
using namespace std;
int main()
{
    string book;
    char option;
    int choice;
    int days, fine;
    cout << "Library Managment System\n";
    cout << "1. Display Available Books\n";
    cout << "2. Issuing a Book\nNote:There will be $1 fine for each day for returning book after due date.\n";
    cout << "3. Return a Book\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> option;
    if (option == '1')
    {
        cout << "Available Boooks are \n1.Book1\n2.Book2\n3.Book3";
    }
    else if (option == '2')
    {
        cout << "Which Book you Want to issue Press 1,2 0r 3:";
        cin >> choice;
        cout << "For how many days you want Issue: ";
        cin >> days;
        if (days > 3)
        {
            fine = days - 3;
            cout << "Fine is " << fine << "$" << endl;
            cout << "You have to pay " << fine << "$ Fine:";
        }
        else if (days <= 3 || days > 0)
        {
            cout << "Your fine is $0 ";
        }
        else if(days<0)
        {
            cout << "Invalid Input";
        }
    }
    else if (option == '3')
    {
        cout << "Which want to return Book:";
        cin >> choice;
        cout << "Thank You For Returning Book";
    }
    else if (option == '4')
    {
        cout << "Thank You";
    }

    return 0;
}