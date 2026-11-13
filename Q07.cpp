// Module 7: Set Monthly Budget
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string month;double budget;cout<<"Month (YYYY-MM): ";cin>>month;cout<<"Budget amount: ";cin>>budget;if(!cin||budget<0){cout<<"Enter a non-negative budget.\n";return 1;}ofstream out("budgets.txt",ios::app);if(!out){cout<<"Could not save budget.\n";return 1;}out<<month<<'|'<<budget<<'\n';cout<<"Budget saved.\n";}
