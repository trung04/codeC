#include<stdio.h>
#include<math.h>
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int n,m;
int a[105][105];
void loang(int i,int j){
	a[i][j]=0;
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0&&i1<n&&j1>=0&&j<m&&a[i1][j1]){
			loang(i1,j1);
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int s,t,u,v;
	scanf("%d%d%d%d",&s,&t,&u,&v);
	--s;--t;--u;--v;	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	loang(s,t);
	if(a[u][v]==0){
		printf("YES\n");
	}
	else printf("NO");
	
}
