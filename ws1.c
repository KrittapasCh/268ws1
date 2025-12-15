#include <stdio.h>

int main(){
	int n1,n2,n3,n4,t;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	(n1< n2)? (t=n1,n1=n2,n2=t,0):0;
	(n3< n4)? (t=n3,n3=n4,n4=t,0):0;
	
	(n1<n3)?(t=n1,n1=n3,n3=t,0):0;
	(n2<n4)?(t=n2,n2=n4,n4=t,0):0;
	
	(n2<n3)?(t=n2,n2=n3,n3=t,0):0;
	printf("%d",n2);
	
	
	
	return 0 ;
}