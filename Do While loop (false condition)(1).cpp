#include <stdio.h>
int main()
{
	int a;
	a=10;
	
	/* Ab ismy condition true nahi hia lakin pher bhi ek baar run karny per Hello Word print lazmi ho ga */
	do{
		printf("%d.Hello Word\n",a);
		a++;
	}
		while(a<=2);
	
}