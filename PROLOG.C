#include<stdio.h>
#include<conio.h>

void main(){

int a[10],n,key,i;
clrscr();
printf("enter n size:\n");
scanf("%d",&n);

printf("enter alll the elements\n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

printf("enter a key element\n");
scanf("%d",&key);

 for(i = 0; i < n; i++){
	if(a[i] == key){
	      printf("found");
	      break;
	}
	}
	if(i >= n){
	      printf("not found");
	}

getch();
}