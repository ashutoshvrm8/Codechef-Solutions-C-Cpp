    #include <stdio.h>

    int main(){
    	int i,t,a, b;

    	scanf("%d", &t);

    	for(i=0;i<t;i++){

    		scanf("%d %d",&a,&b);

    		printf("%s\n",a%2==0 || b%2==0?"Tuzik":"Vanka");

    	}

    }
