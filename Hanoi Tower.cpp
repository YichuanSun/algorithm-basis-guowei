#include <iostream>
#include <algorithm>
using namespace std;
void Hanoi(int n,char a,char b,char c);
int main()	{
	int n;
	cin >> n;
	Hanoi(n,'A','B','C');
	return 0;
}
//��ȱ�㣬������΢��һ��ͱ�ջ�ˣ�����14�Ͳ����ˡ� 
void Hanoi(int n,char a,char b,char c)	{
	if (n==1)	{
		cout << "move " << "1 " << "from " << a << " to " << c <<endl;
		return;
	}
	Hanoi(n-1,a,c,b);
	cout << "move " << n << " from " << a << " to " << c <<endl;
	Hanoi(n-1,b,a,c);
	return;
}
