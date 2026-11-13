// Module 6: Monthly Expense Report (date format YYYY-MM-DD)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string month,date,category,amount,description;cout<<"Month (YYYY-MM): ";cin>>month;ifstream in("expenses.txt");double total=0;while(getline(in,date,'|')&&getline(in,category,'|')&&getline(in,amount,'|')&&getline(in,description))if(date.size()>=7&&date.substr(0,7)==month)total+=stod(amount);cout<<"Total for "<<month<<": "<<total<<'\n';}
