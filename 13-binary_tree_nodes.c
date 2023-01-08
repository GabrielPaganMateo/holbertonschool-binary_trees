#include "binary_trees.h"
/**
 * binary_tree_node - count the node with at least 1 child
 * @tree: pointer to the root node of a tree
 * Return: count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		count = binary_tree_nodes(tree->left) + 1;
		count = binary_tree_nodes(tree->right) + 1;
	}

	return (count);
}
