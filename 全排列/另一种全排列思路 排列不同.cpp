#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char arr[25];
int len;
void swap(int x,int y)//���ڽ��������������
{
    char temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
void resove(int n)//�ݹ麯��
{
        if(n==len)//�����ԶԲ����ڵ�����Ԫ�ؽ��еݹ�ʱ�������������Ѿ�������ɣ������
        {
            for(int i=0;i<len;i++)
            cout<<arr[i]; 
            cout<<endl;
            return;
        }
        for(int i=n;i<len;i++)//ѭ��ʵ�ֽ�����֮���ȫ����  
        {//i�Ǵ�n��ʼ i=n;swap(n,i)�൱�ڹ̶���ǰλ�ã��ڽ�����һλ�����С�
            swap(n,i);
            resove(n+1);
            swap(n,i); 
        }
}
int main()
{
	scanf("%s",arr);
	len=strlen(arr);
    resove(0);
    return 0;
}
