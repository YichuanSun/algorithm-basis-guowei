#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int factor_value();
int term_value();
int expression_value();
int calculous(int result,char op);

int main()	{
	cout << expression_value() << endl;
	return 0;
}

int expression_value()	{
	int result=term_value();
	char op=cin.peek();
	result=calculous(result,op);
	return result;
}

int term_value()	{
	int result=factor_value();
	calculous(result,expression_value());
	return result;
}

int factor_value()	{
	
}

int calculous(int result,char op)	{
	switch(op)	{
		case '+':	{
			result+=term_value();
			break;
		}
		case '-':	{
			result-=term_value();
			break;
		}
		case '*':	{
			result*=term_value();
			break;
		}
		case '/':	{
			result/=term_value();
			break;
		}
	}
	return result;	
}







