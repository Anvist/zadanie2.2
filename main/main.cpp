#include <iostream>
#include "header.h"
using namespace std;
int main()
{ double a;
double b;
char op;
cout << "Enter two operands: ";
cin >> a >> b;
cout << "Enter operator: +, -, *, /: ";
cin >> op;
switch(op) {

case '+':
cout << MySum(a, b) << endl;
break;

case '-':
cout << MySub(a, b) << endl;
break;

case '*':
cout << MyMul(a, b) << endl;
break;

case '/':
cout << MyDiv(a, b) << endl;
break;

default:
cout << "oshibka"<< endl;
break;
}




system("pause");
return 0;
}


