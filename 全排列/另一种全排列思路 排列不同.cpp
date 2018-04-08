#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char arr[25];
int len;
void swap(int x,int y)//用于交换数组的两个数
{
    char temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
void resove(int n)//递归函数
{
        if(n==len)//当尝试对不存在的数组元素进行递归时，标明所有数已经排列完成，输出。
        {
            for(int i=0;i<len;i++)
            cout<<arr[i]; 
            cout<<endl;
            return;
        }
        for(int i=n;i<len;i++)//循环实现交换和之后的全排列  
        {//i是从n开始 i=n;swap(n,i)相当于固定当前位置，在进行下一位的排列。
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
