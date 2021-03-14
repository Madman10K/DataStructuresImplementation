#include <stdio.h>
#include <stdlib.h>

typedef void (*func)(int);

struct list
{
	int val = 5;
	list* next = NULL;
};


void push_back(list* begin, list* node)
{
	begin->next = node;
}

void iterate(list* root, func function)
{
	if (root != NULL)
	{
		function(root->val);

		iterate(root->next, function);
	}
}

void print(int val)
{
	printf("%d; ", val);
}

int main()
{
	list* l1 = (list*)malloc(sizeof(list));
	list* l2 = (list*)malloc(sizeof(list));
	list* l3 = (list*)malloc(sizeof(list));
	
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
