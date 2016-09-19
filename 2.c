#include <stdio.h>

#define true 1

int main() {
	unsigned long ans=0;
	unsigned long a=1;
	unsigned long b=1;
	while (true) {
		if (a>4000000) break;
		if (a%2==0) ans=ans+a;
		unsigned long c=a;
		a=b;
		b=b+c;
	}
	printf("%lu\n",ans);
	return 0;
}

