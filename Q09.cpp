// Module 9: Estimate Monthly Expense from month-to-date average
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string month,date,category,amount,description;int day;cout<<"Month (YYYY-MM): ";cin>>month;if(month.size()!=7||month[4]!='-'){cout<<"Use YYYY-MM format.\n";return 1;}try{day=stoi(month.substr(5,2));}catch(...){cout<<"Invalid month.\n";return 1;}if(day<1||day>31){cout<<"Invalid month.\n";return 1;}double total=0;ifstream in("expenses.txt");while(getline(in,date,'|')&&getline(in,category,'|')&&getline(in,amount,'|')&&getline(in,description))if(date.size()>=7&&date.substr(0,7)==month)total+=stod(amount);cout<<"Estimated 30-day spending: "<<total/day*30<<'\n';}
