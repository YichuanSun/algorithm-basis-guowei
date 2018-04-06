#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string.h>
using namespace std;

char num[7];
bool visit[7];
char ans[7];
int len = 0;

void perm(int k){
	if(k == len)
		puts(ans);
	for(int i=0;i<len;i++){
		if(!visit[i]){
			visit[i] = true;
			ans[k] = num[i];
			perm(k+1);
			visit[i] = false;
		}
	}
}

int main(){
	while(cin>>num){
		len = strlen(num);
		memset(ans,0,sizeof(ans));
		memset(visit,0,sizeof(visit));
		perm(0);
		cout<<endl;	
	}
	return 0;
}
