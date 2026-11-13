// Module 12: Save and load expense records with file handling
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string date,category,description;double amount;cout<<"Date (YYYY-MM-DD): ";cin>>date;cout<<"Category: ";cin>>category;cout<<"Amount: ";cin>>amount;cout<<"Description (one word): ";cin>>description;{ofstream out("expenses.txt",ios::app);if(!out){cout<<"Could not open expenses.txt\n";return 1;}out<<date<<'|'<<category<<'|'<<amount<<'|'<<description<<'\n';}cout<<"Record saved. File contents:\n";ifstream in("expenses.txt");string line;while(getline(in,line))cout<<line<<'\n';}
