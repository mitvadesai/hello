#include<stdio.h>
main()
{
	char a[]={'h','e','l','l','o','w','o','r','l','d'};
	int i;
	
	for(i=0;i<=9;i++){
		a[i]=a[i]-32;
		printf("%c",a[i]);
	}	
}