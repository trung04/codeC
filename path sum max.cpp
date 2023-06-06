#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	ll res[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			res[i][j]=a[i][j];
			if(i==0 && j==0){
				res[i][j]=res[i][j];
			}
			else if(i==0){
				res[i][j]+=res[i][j-1];
			}
			else if(j==0){
				res[i][j]+=res[i-1][j];
			}
			else{
				res[i][j]+=(ll)fmax(res[i][j-1],res[i-1][j]);			}
		}
	}				
	printf("%lld",res[n-1][m-1]);
}
