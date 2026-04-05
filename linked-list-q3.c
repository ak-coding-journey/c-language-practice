#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};

int main()
{
    struct node n1,n2,n3;

    struct node * p=&n2;
    struct node * q=&n3;

    n1.data=10;
    (*p).data=20;
    q->data=30;

    (*(&n1)).next=&n2;
    n2.next=&n3;
    (*q).next=NULL;


    printf("%d\n",(*(&n1)).data);
    printf("%d\n",(*(*(&n2)).next).data);
    printf("%d\n",(n2.next)->data);

    return 0;
}
