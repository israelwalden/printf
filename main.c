#include "main.h"
int main()
{
   //int len;
	char m = 'm';
	// len = _printf("I am %c.", m);
	//printf("I am %c.", m);
	//printf("%d\n",len);
	write(1, &m,1);
    return 0;
}
