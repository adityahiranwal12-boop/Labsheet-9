// Module 5: Category-wise Expense Report
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(){ifstream in("expenses.txt");vector<string> names;vector<double> totals;string date,category,amount,description;while(getline(in,date,'|')&&getline(in,category,'|')&&getline(in,amount,'|')&&getline(in,description)){double value=stod(amount);size_t i=0;while(i<names.size()&&names[i]!=category)++i;if(i==names.size()){names.push_back(category);totals.push_back(0);}totals[i]+=value;}if(names.empty()){cout<<"No expenses found.\n";return 0;}for(size_t i=0;i<names.size();++i)cout<<names[i]<<": "<<totals[i]<<'\n';}
