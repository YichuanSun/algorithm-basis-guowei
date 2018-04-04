#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <stack>
#define N 10000
#define M 30
using namespace std;
int Scan();
char a[N][M];
void Operation(int i);
int JudgeOperator(int n);
stack<double> num;
int main()	{
	int i=0;
	i=Scan();
	Operation(i);
	double ans=num.top(); 
	printf("%.6f\n",ans);
	return 0;
}
int Scan()	{
	int i=0;
	while (1)	{
		scanf("%s",a[i]);
		if (getchar()=='\n')	break;
		i++;
	}
	return i;
}
void Operation(int n)	{
	if (!JudgeOperator(n))
	{
		double temp=atof(a[n]);
		num.push(temp);
	}
	if (!n)	return;
	Operation(--n);
}
int JudgeOperator(int n)	{
	switch(a[n][0])	{
		case '+':	{
			double a=num.top();
			num.pop();
			double b=num.top();
			num.pop();
			double temp=b+a;
			num.push(temp);
			return 1;
			break;
		}
		case '-':	{
			double a=num.top();
			num.pop();
			double b=num.top();
			num.pop();
			double temp=b-a;
			num.push(temp);
			return 1;
			break;
		}
		case '*':	{
			double a=num.top();
			num.pop();
			double b=num.top();
			num.pop();
			double temp=b*a;
			num.push(temp);
			return 1;
			break;
		}
		case '/':	{
			double a=num.top();
			num.pop();
			double b=num.top();
			num.pop();
			double temp=b/a;
			num.push(temp);
			return 1;
			break;
		}
		default:return 0;break;
	}
}

//递归通过函数调用栈来实现，本质上是栈，
//那么栈的操作也可以用递归来实现 
