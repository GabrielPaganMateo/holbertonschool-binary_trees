#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * @right: right subtree height
 * @left: left subtree height
 * Return: height amount
 */
size_t findMax(size_t right, size_t left);
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	height = findMax(right, left);

	return (height);
}
/**
 * findMax - find heighest hight to return
 * @tree: pointer to root node
 * @right: right subtree height
 * @left: left subtree height
 * Return: tallest height
 */
size_t findMax(size_t right, size_t left)
{
	if (right > left)
		return (right);
	else
		return (left);
}


