#include <stdio.h>
#include <stdlib.h>

typedef void (*func)(int);

#define LEFT 0
#define RIGHT 1

struct tree
{
	int val = 0;

	tree* left = NULL;
	tree* right = NULL;
};

void push(tree* root, tree* child, short pos)
{
	switch (pos)
	{
	case 0:
		root->left = child;
		break;
	case 1:
		root->right = child;
		break;
	default:
		break;
	}
}

void dfs(tree* root, func function)
{
	if (root != NULL)
	{
		function(root->val);

		dfs(root->left, function);
		dfs(root->right, function);
	}
}

void print(int val)
{
	printf("%d; ", val);
}

int main()
{
	/**
	*             t1
	*            /  \
	*           t2  t3
	*              /  \
	*             t4  t5
	*/
	
	tree* t1 = (tree*)malloc(sizeof(tree));
	tree* t2 = (tree*)malloc(sizeof(tree));
	tree* t3 = (tree*)malloc(sizeof(tree));
	tree* t4 = (tree*)malloc(sizeof(tree));
	tree* t5 = (tree*)malloc(sizeof(tree));

	t1->val = 5;
	t2->val = 10;
	t3->val = 15;
	t4->val = 20;
	t5->val = 25;

	push(t1, t2, LEFT);
	push(t1, t3, RIGHT);
	push(t3, t4, LEFT);
	push(t3, t5, RIGHT);

	dfs(t1, print);

	free(t1);
	free(t2);
	free(t3);
	free(t4);
	free(t5);
}
