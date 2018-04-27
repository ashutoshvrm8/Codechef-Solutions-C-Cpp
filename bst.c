#include<stdio.h>
#include<malloc.h>

typedef struct bst
{
    int data;
    struct bst *l;
    struct bst *r;
}node;

void insert(node *, node *);
void in(node *);
void pre(node *);
void post(node *);

int main()
{
    char choice[4];

    node *new_node,*root,*tmp,*parent;
    node *get_node();
    root=NULL;

    while(1)
    {
        printf("Enter the element to be inserted in the tree\n");

        new_node = get_node();
        scanf("%d",&new_node->data);

        if(root==NULL)
            root=new_node;
        else
            insert(root,new_node);

        printf("Do you want to insert another element?\n");
        scanf("%s",choice);

        if(choice[0]=='n'  && choice[1]=='o')
            break;
    }

    printf("Inorder Traversal : The elements in the tree are ");
    in(root);
    printf("\nPreorder Traversal : The elements in the tree are ");
    pre(root);
    printf("\nPostorder Traversal : The elements in the tree are ");
    post(root);

    return 0;
}

node *get_node()
{
   node *temp;
   temp=(node*)malloc(sizeof(node));
   temp->l=NULL;
   temp->r=NULL;
   return temp;
}

void insert(node *root,node *new_node)
{
    if(new_node->data < root->data)
    {
        if(root->l == NULL)
            root->l = new_node;
        else
            insert(root->l, new_node);
    }

    if(new_node->data>root->data)
    {
        if(root->r==NULL)
            root->r=new_node;
        else
            insert(root->r,new_node);
   }
}

void in(node *temp)
{
    if(temp!=NULL)
    {
        in(temp->l);
        printf("%d ", temp->data);
        in(temp->r);
    }
}

void pre(node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        pre(temp->l);
        pre(temp->r);
    }
}

void post(node *temp)
{
    if(temp != NULL)
    {
        post(temp->l);
        post(temp->r);
        printf("%d ", temp->data);
    }
}
