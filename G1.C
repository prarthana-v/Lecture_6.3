#include<stdio.h>
#include<conio.h>
main(){
	int i,n;
	int sum=0;
	clrscr();

	printf("Enter the value of n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
	   printf("%d\n",i);
	   sum+=i;
	}

	printf("sum of 1 to %d number = %d",n,sum);
	getch();

}