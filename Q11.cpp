// Module 11: Delete Expense by its displayed 1-based row number
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct Expense{string date,category,amount,description;};
int main(){ifstream in("expenses.txt");vector<Expense> rows;Expense e;while(getline(in,e.date,'|')&&getline(in,e.category,'|')&&getline(in,e.amount,'|')&&getline(in,e.description))rows.push_back(e);if(rows.empty()){cout<<"No expenses to delete.\n";return 0;}for(size_t i=0;i<rows.size();++i)cout<<i+1<<") "<<rows[i].date<<" | "<<rows[i].category<<" | "<<rows[i].amount<<" | "<<rows[i].description<<'\n';size_t n;cout<<"Row number to delete (0 cancels): ";cin>>n;if(n==0)return 0;if(n>rows.size()){cout<<"Invalid row number.\n";return 1;}rows.erase(rows.begin()+n-1);ofstream out("expenses.txt");for(const auto& x:rows)out<<x.date<<'|'<<x.category<<'|'<<x.amount<<'|'<<x.description<<'\n';cout<<"Expense deleted.\n";}
