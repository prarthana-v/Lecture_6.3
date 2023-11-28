#include<stdio.h>
#include<conio.h>
main(){
	long int  factorial=1;
	int n,i;

	clrscr():

	printf("Enter the value of n:");
	scanf("%d",&n);

	for(i=n;i>=1;i--){

	   factorial=factorial*i;

	}

	printf("factorial of %d = %d",n,fatorial);

	getch();
}