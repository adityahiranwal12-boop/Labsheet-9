// Module 3: Add Daily Expense. Record format: date|category|amount|description
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string date,category,description;double amount;cout<<"Date (YYYY-MM-DD): ";cin>>date;cout<<"Category (one word): ";cin>>category;cout<<"Amount: ";cin>>amount;if(!cin||amount<=0){cout<<"Enter a positive amount.\n";return 1;}cout<<"Description (one word): ";cin>>description;ofstream out("expenses.txt",ios::app);if(!out){cout<<"Could not save file.\n";return 1;}out<<date<<'|'<<category<<'|'<<amount<<'|'<<description<<'\n';cout<<"Expense added.\n";}
