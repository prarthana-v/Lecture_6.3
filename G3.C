#include<stdio.h>
#include<conio.h>
main(){
	int i,n;

  clrscr();

  printf("Enter the value of n:");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
     printf("%d*%d=%d\n",n,i,n*i);
  }

  getch();
}