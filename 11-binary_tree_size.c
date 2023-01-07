#include "binary_trees.h"
/**
 * binary_tree_size - measures the size
 * @tree: pointer to root node
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	else
		size += 1;

	if (tree->left)
		binary_tree_size(tree->left);
	if (tree->right)
		binary_tree_size(tree->right);

	return (size);
}


