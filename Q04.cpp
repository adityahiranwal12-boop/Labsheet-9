// Module 4: View Expense History
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){ifstream in("expenses.txt");string date,category,amount,description;if(!in){cout<<"No expenses found.\n";return 0;}cout<<"Date         Category      Amount      Description\n";while(getline(in,date,'|')&&getline(in,category,'|')&&getline(in,amount,'|')&&getline(in,description))cout<<date<<"   "<<category<<"   "<<amount<<"   "<<description<<'\n';}
