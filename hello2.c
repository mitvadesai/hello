#include<stdio.h>
main()
{
	char a[]={'H','E','L','L','O','W','O','R','L','D'};
	int i;
	
	for(i=0;i<=9;i++){
		a[i]=a[i]+32;
		printf("%c",a[i]);
	}	
}