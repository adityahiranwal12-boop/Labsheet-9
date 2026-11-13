// Module 1: User Registration
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){string user,pass;cout<<"Create username: ";cin>>user;cout<<"Create password: ";cin>>pass;ifstream in("users.txt");string u,p;while(getline(in,u,'|')&&getline(in,p))if(u==user){cout<<"Username already exists.\n";return 0;}ofstream out("users.txt",ios::app);if(!out){cout<<"Could not open users.txt\n";return 1;}out<<user<<'|'<<pass<<'\n';cout<<"Registration successful.\n";}
