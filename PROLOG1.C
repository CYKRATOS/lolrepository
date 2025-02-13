#include<stdio.h>
#include<conio.h>

void linear(int key);
void binary(int key);
//void display();
int a[10],n,i;

void main(){
	int op,key;
 clrscr();
 printf("Please enter the array list size:\n");
 scanf("%d",&n);
 printf("\n");
 printf("Please enter %d positive elements (Each seperated by space):\n", n);
 for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	if(a[i] < 0){
		printf("Please enter only positive numbers");
		getch();
		exit(0);
	}
 }

 do{
	printf("\n");
	printf("Search the element using: \n");
	printf("1.Linear Search\n");
	printf("2.Binary Search\n");
	printf("3.Exit the Search\n");
	printf("\n");
	printf("Please enter the search option: \n");
    scanf("%d",&op);

 switch(op){
		case 1:
			printf("Please enter the element to search using Linear Search mechanism\n");
			scanf("%d",&key);
			linear(key);
			break;

		case 2:
			printf("Please enter the element to search using Binary Search mechanism\n");
			scanf("%d",&key);
			binary(key);
			break;
	}
    }while(op != 3);
}

/*void display(){
		printf("Original Array:\n");
			for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
}*/

void linear(int key){

 for(i = 0; i < n; i++){
	if(a[i] == key){
	      clrscr();
	      printf("Hooray! The %d element is found in the %d index", key,i+1);
	      printf("\n");
	      break;
	}
	}
	if(i >= n){
	      clrscr();
	      printf("Oh No! The %d element is not available in the list",key);
	      printf("\n");
}
}
void binary(int key){

 int low =0,high= n - 1,mid;

 while(low <= high){
 mid = (low + high)/2;

 if(key == a[mid]){
	clrscr();
	printf("Hooray! The %d element is available at %d location\n", key,mid +1);
	break;
 }
 else if(key < a[mid]){
	high = mid -1;
 }
 else{
 low = mid + 1;
 }
 if(low > high)
 {
	clrscr();
	printf("Oh No! The %d element is not available in the list\n",key);
 }
 }
}