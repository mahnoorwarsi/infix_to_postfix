#include<iostream>
#include<conio.h>
#include<string>
#include"stack.h"
using namespace std;
int main()
{
string infix;
stack postfix;
stack operators;
int top=0;
cout<<"enter infix equation"<<endl;
getline(cin, infix);
postfix.getoutput(infix,postfix,operators);
postfix.display(top);



system("pause");
return 0;
}


 

   
  
