#include <stdio.h>
int main () {
	char i = 'ipsita';
	char *j=&i;
	
	printf ("the value at address of j is %s/n",*j);
	return 0;
}
