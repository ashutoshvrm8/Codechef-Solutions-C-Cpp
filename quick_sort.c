 #include<stdio.h>

void quicksort(int [10000],int,int);

int main()
{
 long long int size,i,t;
 int x[10000];

 scanf("%lld", &t);

 while(t--)
 {

  scanf("%lld",&size);

  for(i=0;i<size;i++)
    scanf("%lld",&x[i]);

  quicksort(x,0,size-1);

  for(i=0;i<size;i++)
    printf("%lld",x[i]);
 }

  return 0;
}

void quicksort(int x[10000],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
