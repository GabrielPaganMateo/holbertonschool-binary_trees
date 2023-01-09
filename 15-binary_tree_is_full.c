#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to node of tree
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int rightLeaf = 0, leftLeaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	leftLeaf = binary_tree_is_full(tree->left) + 1;
	rightLeaf = binary_tree_is_full(tree->right) + 1;

	if (leftLeaf == 1 && rightLeaf == 1)
		return (1);

	return (0);
}
