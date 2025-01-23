//
// Created by tsits on 20/01/2025.
/*1. Write a program that will read in a users’ first name and last name and output their
name in the format LastName, FirstName */
#include <float.h>
#include <iostream>
#include <string>
using namespace std;
void question2();
void question3();
void question4();
void question5();
void question6();
void square(); void rectangle(); void pyramid();
void question10();
    int main() {

        cout<<"hello world"<<endl;
        question10();
        return 0;
    }

    void question2()
    {
        int age;
        cout << "Enter your age" << endl;
        cin >> age;
        if (age>65) {
            cout<<"You are a Senior Citizen"<<endl;
        } else if (age>=18) {
            cout<<"You are an Adult"<<endl;
        } else {
            cout<<"You are a child";
        }
    }

    void question3() {
        string FirstName, LastName;
        int choice(-1);

        cout<<"Menu options:\n1.Question 1\n2.Question 2\n3.Quit""\n Enter Choice\n ";
        cin>>choice;

        do {
            switch(choice) {
                case 1:
                    cout<<"Enter your first and lastname"<<endl;
                cin>>FirstName;
                cin>>LastName;
                cout<<LastName<<", "<<FirstName;
                break;
                case 2:
                    int age;
                cout << "Enter your age" << endl;
                cin >> age;
                if (age>65) {
                    cout<<"You are a Senior Citizen"<<endl;
                } else if (age>=18) {
                    cout<<"You are an Adult"<<endl;
                } else {
                    cout<<"You are a child";
                }
                break;
            }
            cout<<"\nMenu options:\n1.Question 1\n2.Question 2\n3.Quit""\n Enter Choice\n ";
            cin>>choice;
        }
        while(choice != 3);

    }

    void question4() {
    //Write a program to calculate the product of all numbers from 1 to 10 (i.e. 1x1, 2x2 etc.)
        for(int i = 1; i<=10; i++)
        {
         cout<<i<<" * "<<i<<" = "<<i*i<<endl;
        }

    }

    void question5() {
        /*5. Write a program to draw a rectangle, square and pyramid. Place the shapes one on top
        of the other; leave a blank line between each shape. Assume each shape is 5 lines high
        and the rectangle is 10 columns wide. */

        int choice = 0;
        do {
            cout<< "1. square" <<endl;
            cout<<"2. rectangle"<<endl;
            cout<<"3. pyramid"<<endl;
            cout<<"4. exit"<<endl;
            cin>>choice;
            switch(choice) {
                case 1:
                    square();
                break;
                case 2:
                    rectangle();
                break;
                case 3:
                    pyramid();
                break;
                case 4:
                    cout<<"Goodbye"<<endl;
                break;
                default:
                    cout<<"Wrong choice"<<endl;
            }
        }
             while (choice !=4 );

        }

    void square() {
            cout<< "size" <<endl;
            int size;
            cin>> size;
            for (int i =0; i<size; i++) {
                for (int x=0; x<size; x++) {
                    cout << "*";
                }
                cout << endl;
            }

        }

    void rectangle() {

        int w , h;
        cout << "width" <<endl;
        cin >> w;
        cout << "height" <<endl;
        cin >> h;

        /*
        for (int i =0; i<h; i++) {
            for (int x=0; x<w; x++) {
                cout << "* ";
            }
            cout << endl;
        } */

        for (int i =0; i<h; i++) {
            cout << string(w,'*') << endl;
        }
    }

    void pyramid() {
            int size;
            cout << "size" <<endl;
            cin >> size;

            for (int i = 0; i<size; i++) {
                cout << string(size - (i+1),' ') << string ((2*i)+1,'*')<< endl;
            }
        }

    void question6() {
        char ch = CHAR_MAX;
        int i = INT_MAX;
        double d = DBL_MAX;

        cout << ch  << endl;
        cout << i << endl;
        cout << d << endl;

        // the last significant bite controls the sign (negative/positive)
        ch++; i++; d++;
        cout << ch  << endl;
        cout << i << endl;
        cout << d << endl;

        //shows size in bytes of variable
        cout <<"Size of double " << sizeof(double) << endl;
    }

    void question10() {
        //10. Implement a program to draw a border of stars around a sting of text.
    string text;
    cout << "Enter text " << endl;
    getline(cin, text);
    string::size_type len = text.length();
    string top(len+4, '*');
    cout << top << endl;
    cout << "* " << text << " *" << endl;
    cout << top << endl;

    }