#include "binary_tree.h"
#include <stdlib.h>

BinaryTree * BinaryTree_make(int val, BinaryTree * l, BinaryTree * r)
{
	BinaryTree * tree = malloc(sizeof(BinaryTree));

	tree->value = val;
	tree->left = l;
	tree->right = r;

	return tree;
}

void BinaryTree_free(BinaryTree * root)
{
	if (root != NULL)
	{
		BinaryTree_free(root->left);
		BinaryTree_free(root->right);

		free(root);
	}
}

