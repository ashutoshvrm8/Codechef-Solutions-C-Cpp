    #include<stdio.h>

    void partition(int *,int,int);
    void merge(int *,int,int,int);
    long long int count=0;

    int main(){
    int *a,t,n,i;
    long long int min;
    char *b,c;
    scanf("%d",&t);
    scanf("%c",&c);
    c='0';
    while(t--){
    b=(char *)malloc(100000*sizeof(char));
    i=0;
    while(scanf("%c",&c)!=EOF && c!='\n'){
    *(b+(i++))=c;
    }
    c='0';
    *(b+i)='\0';
    a=(int *)malloc(i*sizeof(int));
    n=i;
    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=0;}
    else if(*(b+i)=='g'){*(a+i)=1;}
    else if(*(b+i)=='b'){*(a+i)=2;}
    }
    partition(a,0,n-1);
    min=count;
    count=0;

    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=0;}
    else if(*(b+i)=='g'){*(a+i)=2;}
    else if(*(b+i)=='b'){*(a+i)=1;}
    }
    partition(a,0,n-1);
    if(count<min){min=count;}
    count=0;

    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=1;}
    else if(*(b+i)=='g'){*(a+i)=0;}
    else if(*(b+i)=='b'){*(a+i)=2;}
    }
    partition(a,0,n-1);
    if(count<min){min=count;}
    count=0;

    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=1;}
    else if(*(b+i)=='g'){*(a+i)=2;}
    else if(*(b+i)=='b'){*(a+i)=0;}
    }
    partition(a,0,n-1);
    if(count<min){min=count;}
    count=0;

    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=2;}
    else if(*(b+i)=='g'){*(a+i)=0;}
    else if(*(b+i)=='b'){*(a+i)=1;}
    }
    partition(a,0,n-1);
    if(count<min){min=count;}
    count=0;

    for(i=0;i<n;i++){
    if(*(b+i)=='r'){*(a+i)=2;}
    else if(*(b+i)=='g'){*(a+i)=1;}
    else if(*(b+i)=='b'){*(a+i)=0;}
    }
    partition(a,0,n-1);
    if(count<min){min=count;}
    count=0;

    printf("%lld\n",min);
    }
    return 0;
    }



    void partition(int a[],int l,int h){
    if (l<h){
    int mid=(h+l)/2;
    partition(a,l,mid);
    partition(a,mid+1,h);
    merge(a,l,mid,h);
    }
    }

    void merge(int a[],int l,int mid,int h){
    int i=l,j=mid+1,k=0;
    int * temp;
    temp=(int *)malloc((h-l+1)*sizeof(int));
    while(i<=mid&&j<=h){
    if (a[i]<=a[j]){
    temp[k++]=a[i++];
    }else{
    temp[k++]=a[j++];
    count+=(mid-i+1);
    }
    }
    if(i>mid){
    while(j<=h){temp[k++]=a[j++];}
    }else{
    while(i<=mid){temp[k++]=a[i++];}
    }
    k=0;
    for(i=l;i<=h;i++){
    a[i]=temp[k++];
    }
    }
