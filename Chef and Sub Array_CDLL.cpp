#include<iostream>
#include<math.h>
#include<malloc.h>
#include<stdio.h>

using namespace std;

typedef struct bin
{
    struct bin *prev;
    int data;
    struct bin *next;
}bin;

void display(bin *head)
{
    bin *tail,*current;

    tail=current;
    current=head;
    int i=0;
    printf("List Contains(sequence head to tail):\n");
    do
    {
        printf("Node %d, Value: %d\n",i+1,current->data);
        i++;
        current=current->next;
    } while(current!=head);
}

int main()
{
    int n,k,p;
    int i,j,count_one,l,max_count,lm_f_bit,m;

    cin>>n>>k>>p;

    char req[p];

    bin *head,*temp,*current,*tail;
    head=NULL;
    tail=NULL;
    temp=NULL;
    current=NULL;

    for(i=0;i<n;i++)
    {
        temp=(bin*)malloc(sizeof(bin));

        if(temp!=NULL)
        {
            cin>>temp->data;

            if(head==NULL)
            {
                current=temp;
                head=temp;
                head->next=head;
                head->prev=head;
            }
            else
            {
                current->next=temp;
                temp->prev=current;
                temp->next=head;
                head->prev=temp;
                current=temp;
            }
        }
        else
            return -1;
    }

    cin>>req;

    for(i=0;i<p;i++)
    {
        if(req[i]=='?')
        {
            count_one=max_count=0;

            current=head;
            temp=head;

            for(l=0;l<k;l++)
            {
                if(current->data==1)
                    count_one++;
                current=current->next;
            }

            lm_f_bit=temp->data;
            temp=temp->next;

            max_count=count_one;

            while(current!=head)
            {
                if(current->data==1 && lm_f_bit==0)
                    count_one++;

                if(current->data==0 && lm_f_bit==1)
                    count_one--;

                current=current->next;

                lm_f_bit=temp->data;
                temp=temp->next;

                if(count_one>max_count)
                    max_count=count_one;

                if(max_count==k)
                    break;
            }

            cout<<max_count<<"\n";
        }
        else
        {
            temp=head->prev;
            head=temp;
        }
    }

    return 0;
}
