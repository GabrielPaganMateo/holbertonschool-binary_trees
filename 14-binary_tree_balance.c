#include "binary_trees.h"
size_t findMax(size_t right, size_t left);
/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to node measured
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0, heightR = 0, balance = 0;

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (tree == NULL)
		return (0);

	if (tree->left)
	heightL += binary_tree_balance(tree->left) + 1;

	if (tree->right)
	heightR += binary_tree_balance(tree->right) + 1;

	printf("heightL:%i heightR:%i\n", heightL, heightR);

	balance = heightL - heightR;
	return (balance);

}
