#include <memory>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
char oriLights[5];	//���ԭʼ����ĵƾ���ÿ���ַ���ʾһ��
char lights[5];		//�仯�еĵƵľ��� 
char result[5];		//���յĿ��ؽ��

int GetBit(char c,int i)	//����ĳһ�еĵ�i��Ԫ�أ���ʾ�ƵĿ������ 
{
	return (c >> i)&1;
} 
void SetBit(char &c,int i,int v)	//��ĳյ�ƵĿ�������ı�	
{
	if (v)
		c|=(1<<i);
	else
		c&=~(1<<i);
}
void FlipBit(char &c,int i)		//��ĳյ�Ƶ����������ת 
{
	c^=(1<<i);
}
void OutPutResult(int t,char result[])		//���������� 
{
	cout << "PUZZLE #" <<t << endl;
	for (int i=0;i<5;i++)	{
		for (int j=0;j<6;j++)	{
			cout << GetBit(result[i],j);
			if (j<5)	cout << " ";
		}
		cout << endl;
	}
}

int main()	{
	int T;
	cin >> T;
	for (int t=1;t<=T;t++)	{			//��ÿһ�β������� 
		for (int i=0;i<5;i++)	{		//��ÿ��������ÿһ�� 
			for (int j=0;j<6;j++)	{	//����ÿһ���ƵĿ������
				int s;
				cin >> s;
				SetBit(oriLights[i],j,s);	//������ĵƵ��������ԭʼ����ı���λ
			}
		}
		for (int n=0;n<64;++n)	{	//�����صķ�ʽ����Ϊһ��6������ÿյ����2��״̬����һ����64��״̬
			int switchs = n;
			memcpy(lights,oriLights,sizeof(oriLights));		//��ԭʼ�ƿ������鸴��һ�ݵ�lights�����������������Ĳ���
			for (int i=0;i<5;++i)	{		//��ÿһ�е�ִ�в��� 
				result[i]=switchs;			//�����ǵĿ��ط��������ַ��������У��Զ�������ʽ�洢���ȵ����������㣬��Ϊ������ 
				for (int j=0;j<6;j++)	{	//��ÿһ���ϵ�ÿһյ��
					if (GetBit(switchs,j))	{		//��ȡ��һ�ֲ���ʱ����jλ�ϵƵ�״������������ţ���ִ�������ģ�⣬���������� 
						if (j>0)					//j>0���ͽ�����ǰһλ��ת 
							FlipBit(lights[i],j-1);
						FlipBit(lights[i],j);		//һ����ִ�еĲ���������jλ��ת 
						if (j<5)
							FlipBit(lights[i],j+1);	//j<5���ͽ����ĺ�һλ��ת
					}
				}
				if (i<4)			//����δ����ʱ����i+1��������в�������ʾ���˵�i�еĵƺ��i+1�е�Ӱ�졣һ���������ˣ������档 
					lights[i+1]^=switchs;
				switchs = lights[i];		//��Ȼ��������ʼʱ�����ƺ��γɵ�i�е���������С���ʱ��i�в�������ɣ�����Ҫ��Ϩ���i��ʣ��ƣ��ͱ����ڵ�i+1�а�ͬ��λ�õĵơ� 
			}
			if (lights[4]==0)	{		//����������˴������һ�еĵƶ�Ϊ0��Ҳ����ȫ��ʱ�������result�� 
		 		OutPutResult(t,result);
				break;
			}
		}
	}
	return 0;
}
