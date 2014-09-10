#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t me32_t;

	me32_t = 12345678;
	
	printf("first , assume int32_t is int : ");
	printf("me32_t = %d\n",me32_t);
	printf("next, let's not make any assumeptions.\n");
	printf("instead, use a \"macro\" from inttypes.h");
	printf("me32 = %" PRId32 "\n", me32_t);	
	return 0;	
} 
