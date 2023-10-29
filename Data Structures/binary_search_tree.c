#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *left;
	struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
	node *tree=NULL;
	node*n = malloc(sizeof(node));
	if(n==NULL)
	{
		return 1;
	}
	n->number=2;
	n->left=NULL;
	n->right=NULL;
	tree=n;
	
	n=malloc(sizeof(node));
	if(n==NULL)
	{
		return 1;
	}
	n->number=1;
	n->left=NULL;
	n->right=NULL;
	tree->left=n;
	
	n=malloc(sizeof(node));
	if(n==NULL)
	{
		return 1;
	}
	n->number=3;
	n->left=NULL;
	n->right=NULL;
	tree->right=n;
	
	print_tree(tree);
	free_tree(tree);
}
void print_tree(node *root)
{
	if(n==NULL)
	{
		return;
	}
	printf(root->left);
	printf("%i ",root->number);
	printf(root->right);
	free_tree(tree);
}
void free_tree(node *tree)
{
	if(n==NULL)
	{
		return;
	}
	free(root->left);
	free(root->right);
	free(root);
}

