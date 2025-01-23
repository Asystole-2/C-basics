//
// Created by tsits on 20/01/2025.
/*1. Write a program that will read in a users’ first name and last name and output their
name in the format LastName, FirstName */
#include <iostream>
#include <string>
using namespace std;

int main() {

    string FirstName, LastName;
    cout<<"Enter your first and lastname"<<endl;
    cin>>FirstName;
    cin>>LastName;
    cout<<LastName<<", "<<FirstName;
    return 0;
}
