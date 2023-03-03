#include <stdio.h>

int main(){
	int n,x=0,y=0,z=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		x+=a;
		y+=b;
		z+=c;
		printf("%d\n%d\n%d\n",x,y,z);
	}
	if (x==0 && y==0 && z==0)
		printf("YES");
	else
		printf("NO");

	return 0;

}




