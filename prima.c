#include <stdio.h>
int main ()
{
	int a=2,b,c,d=0,e=1,counter=0;
	printf("Masukkan angka : ");
	scanf("%d",&b);
	for(a;e<=b;a++)
	 {
		c=1;d=0;
		for(c=1;c<=a;c++)
		{
			if(a%c==0){
				d++;	
			}
		}
		if(d==2)
		{
			counter++;
			if(counter == b){
				printf("%d ",a);	
			}
			e++;
		}
		
	}
}
