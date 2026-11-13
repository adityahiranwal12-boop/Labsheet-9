// Module 10: Search Expense by date, category, or description
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string query,date,category,amount,description;bool found=false;cout<<"Search text: ";cin>>query;ifstream in("expenses.txt");while(getline(in,date,'|')&&getline(in,category,'|')&&getline(in,amount,'|')&&getline(in,description))if(date.find(query)!=string::npos||category.find(query)!=string::npos||description.find(query)!=string::npos){cout<<date<<" | "<<category<<" | "<<amount<<" | "<<description<<'\n';found=true;}if(!found)cout<<"No matching expense.\n";}
