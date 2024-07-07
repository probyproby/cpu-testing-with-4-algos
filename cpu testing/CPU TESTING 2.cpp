#include <stdio.h>

int main()
{
	
	int i;
	for(i = 0; i < 65; i++)
	{
		if(i == 70)
		break;
	}
	printf("%d", i);
	return 0;
}