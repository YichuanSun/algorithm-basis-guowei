//逻辑没有问题，if的条件也没问题，问题出在if语句那一串的格式上。气死了，调了一个小时的bug都没调出来 
#include <iostream>
#include <cstdio>
using namespace std;
int ori[9],target[9];
int main()	{
	int move[9]={0},dd=100,sum=0;
	for (int i=0;i<9;i++)	scanf("%d",&ori[i]);
	for (move[0]=0;move[0]<4;move[0]++)
	for (move[1]=0;move[1]<4;move[1]++)
	for (move[2]=0;move[2]<4;move[2]++)
	for (move[3]=0;move[3]<4;move[3]++)
	for (move[4]=0;move[4]<4;move[4]++)
	for (move[5]=0;move[5]<4;move[5]++)
	for (move[6]=0;move[6]<4;move[6]++)
	for (move[7]=0;move[7]<4;move[7]++)
	for (move[8]=0;move[8]<4;move[8]++)	{
		if (
			((0==move[0]+move[1]+move[3]+ori[0])%4)&&
			((0==move[0]+move[1]+move[2]+move[4]+ori[1])%4)&&
			((0==move[1]+move[2]+move[5]+ori[2])%4==0)&&
			((0==move[0]+move[3]+move[4]+move[6]+ori[3])%4)&&
			((0==move[0]+move[2]+move[4]+move[6]+move[8]+ori[4])%4)&&
			((0==move[2]+move[4]+move[5]+move[8]+ori[5])%4)&&
			((0==move[3]+move[6]+move[7]+ori[6])%4)&&
			((0==move[4]+move[6]+move[7]+move[8]+ori[7])%4)&&
			((0==move[5]+move[7]+move[8]+ori[8])%4)
			)	{
				for (int k=0;k<9;k++)
				sum+=move[k];
				//printf("%d\n",sum);
				if (sum<dd)	{
					dd=sum;
					for (int j=0;j<9;j++)
						target[j]=move[j];
				}
			}
	}
	for (int i=0;i<9;i++)
		while (target[i]--)
			cout << i+1 <<" ";
	cout << endl;
	return 0;
}
