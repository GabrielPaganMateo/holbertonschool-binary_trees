#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height amount
 */
size_t findMax(size_t right, size_t left);
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightTrue;
	if (tree == NULL)
		return (0);

	heightTrue = (findMax(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);

	return (heightTrue);
}
/**
 * findMax - find heighest hight to return
 * @right: right subtree height
 * @left: left subtree height
 * Return: tallest height
 */
size_t findMax(size_t right, size_t left)
{
	if (right >= left)
		return (right);
	else
		return (left);
}


