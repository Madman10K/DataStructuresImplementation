#include <stdio.h>
#include <stdlib.h>

typedef void (*func)(int);

struct Node
{
    int val = 5;
    Node* next = NULL;
};

struct List
{
public:

private:

};

void push_back(Node* begin, Node* node)
{
    begin->next = node;
}

void iterate(Node* root, func function)
{
    while (root != NULL)
    {
        function(root->val);

        root = root->next;
    }
}

void print(int val)
{
    printf("%d \n", val);
}

int main()
{
    Node* l1 = (Node*)malloc(sizeof(Node));
    Node* l2 = (Node*)malloc(sizeof(Node));
    Node* l3 = (Node*)malloc(sizeof(Node));

    l1->val = 5;
    l2->val = 10;
    l3->val = 15;

    push_back(l1, l2);
    push_back(l2, l3);
    push_back(l3, NULL);

    iterate(l1, print);

    free(l1);
    free(l2);
    free(l3);
}