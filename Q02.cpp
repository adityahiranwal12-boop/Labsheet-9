// Module 2: Login System (uses accounts created by Q01)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string user,pass,u,p;cout<<"Username: ";cin>>user;cout<<"Password: ";cin>>pass;ifstream in("users.txt");while(getline(in,u,'|')&&getline(in,p))if(u==user&&p==pass){cout<<"Login successful. Welcome, "<<user<<"!\n";return 0;}cout<<"Invalid username or password.\n";}
