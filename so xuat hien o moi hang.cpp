#include<stdio.h>
#include<math.h>
int count[1000]={0};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if(count[a[i][j]]==i-1){
			count[a[i][j]]=i;
		}
		}
	}
	int check=0;
	for(int i=0;i<=100;i++){
		if(count[i]==n){
			printf("%d ",i);
			check=1;
		}
	}
	if(check == 0){
		printf("NOT FOUND!");
	}
	
}
