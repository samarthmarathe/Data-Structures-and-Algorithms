#include<stdio.h>////////////////////////////////////////////////////

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        first = first -> next;              
    }

    return iCount;
};

int main()
{
    PNODE head = NULL;
    PNODE temp = NULL;
    NODE obj1, obj2, obj3;
    int iRet = 0;

    head = &obj1; // Base  Addess of the first 
    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;                            //100

    Display(head);

    printf("Number of Nodes are %d\n",iRet);

    return 0;
}