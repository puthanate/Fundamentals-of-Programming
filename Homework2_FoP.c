#include<stdio.h>
#include<string.h>
#define chr_no 255
int main()
{
	char str[100];
	char intermediate[100];
	int  chr_fre[chr_no];
	int  i = 0, max; 
	int ascii; // character //
	printf("Enter any string: ");
	scanf("%s", &intermediate);
	strcpy(str,intermediate);
	
	for(i=0;i<chr_no;i++) // to set frequency to 0 //
	{
		chr_fre[i] = 0;
	}
	
	i = 0;
	while(str[i] != '\0')
	{
		ascii = (int)str[i]; //casting to int//
		chr_fre[ascii] += 1;
		i++;
	}
	
	max = 0;
	for(i=0;i<chr_no;i++) // set frequency //
	{
		if(i!=32)
		{
			if(chr_fre[i] > chr_fre[max])
			max = i;
		}
	}
    printf("Maximum occuring character is '%c' occured: %d times \n", max, chr_fre[max]);
return 0 ;
}