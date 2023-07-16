#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>


int main(int argc, char* argv[])
{
	FILE *fp1;
	uint32_t value1 = 0;
	char* p;
	p = (char*)&value1;

	if(fp1 = fopen(argv[1], "rb"))
	{
		for(int i=0; i< 4; i++)
		{
			*(p+i) = fgetc(fp1);

		}
		value1 = htonl(value1);
	}

	FILE *fp2;
	uint32_t value2 = 0;
	p = (char*)&value2;

	if(fp2 = fopen(argv[2], "rb"))
	{
		for(int i=0; i< 4; i++)
		{
			*(p+i) = fgetc(fp2);

		}
		value2 = htonl(value2);
	}
	

	printf("%u(0x%x) + %u(0x%x)  = %d(0x%x)", value1,value1,value2,value2,value1+value2,value1+value2);

	
}
