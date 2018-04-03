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
	cout<<"һ����"<< time <<"�ַ���"<<endl;
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
	for (i=0;i<N;i++)	{//iΪ������Եĵ�K���ʺ��λ�� 
		int j;
		for (j=0;j<k;j++)	//j����Kǰ��ĵ�j���ʺ� 
			//queenPos[j]��ʾ��j���ʺ��λ�ã�ǰһ��������ʾ�����غϣ���һ��������ʾ�Խ����غϣ���Ҫ���� 
			if (queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
				break;
		if (j==k)	{
			queenPos[k]=i;
			NQueen(k+1);
		}
	}
}
