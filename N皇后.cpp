#include <iostream>
#include <algorithm>
using namespace std;
void NQueen(int k);
int N;
int time;
int queenPos[100];
int main()	{
	cin >> N;
	NQueen(0);
	cout<<"一共有"<< time <<"种放置"<<endl;
	return 0;
}
void NQueen(int k)	{
	int i;
	if (k==N)	{
		for (i=0;i<N;i++)
			cout << queenPos[i]+1 << " ";
		cout << endl;
		time++;
		return;
	}
	for (i=0;i<N;i++)	{//i为逐个尝试的第K个皇后的位置 
		int j;
		for (j=0;j<k;j++)	//j代表K前面的第j个皇后 
			//queenPos[j]表示第j个皇后的位置，前一个条件表示行数重合，后一个条件表示对角线重合，都要跳出 
			if (queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
				break;
		if (j==k)	{
			queenPos[k]=i;
			NQueen(k+1);
		}
	}
}
