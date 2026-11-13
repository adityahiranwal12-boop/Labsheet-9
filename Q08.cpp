// Module 8: Budget Warning (reads expenses.txt and budgets.txt)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string month,date,category,amount,description,savedMonth,savedBudget;cout<<"Month (YYYY-MM): ";cin>>month;double budget=-1;ifstream b("budgets.txt");while(getline(b,savedMonth,'|')&&getline(b,savedBudget))if(savedMonth==month)budget=stod(savedBudget);if(budget<0){cout<<"No budget set for this month.\n";return 0;}double total=0;ifstream e("expenses.txt");while(getline(e,date,'|')&&getline(e,category,'|')&&getline(e,amount,'|')&&getline(e,description))if(date.size()>=7&&date.substr(0,7)==month)total+=stod(amount);cout<<"Spent: "<<total<<" / "<<budget<<'\n';if(total>=budget)cout<<"Warning: budget reached or exceeded.\n";else if(total>=budget*.8)cout<<"Warning: 80% of the budget used.\n";else cout<<"You are within budget.\n";}
