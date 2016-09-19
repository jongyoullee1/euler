#include <stdio.h>

int main() {
	 int i,j,pal=0,prod,x,a,b,c,d,e,f;
	 for (i=100;i<1000;i++) {
	 	for (j=i;j<1000;j++) {
	 		prod=i*j;
	 		x=prod;
	 		f=x%10;
	 		x=x/10;
	 		e=x%10;
	 		x=x/10;
	 	    d=x%10;
	 		x=x/10;
	 		c=x%10;
	 		x=x/10;
			b=x%10;
	 		x=x/10;
	 		a=x%10;
	 		if (a==0) {
	 			if (b!=f) continue;
	 			if (c!=e) continue;
	 			if (prod>pal) pal=prod;}
	 		else {
				 if (a!=f) continue;
				 if (b!=e) continue;
				 if (c!=d) continue;
				 if (prod>pal) pal=prod;
	 		}
	 	}
	 }
	 printf("%d\n",pal);
	 return 0;
}

