#include <iostream>
#include <iomanip>
#include <string>
#include "NodeClass.h"

using namespace std;
void BinaryTree::insert(ElementType data, TreeNode *&tree)
{
	if (data < tree->data)
	{
		if (tree->left != NULL)
		{
			insert(data, tree->left);
		}
		else
		{
			tree->left = new TreeNode(data);
			tree->left->count++;
		}
	}
	else if (data > tree->data)
	{
		if (tree->right != NULL)
		{
			insert(data, tree->right);
		}
		else
		{
			tree->right = new TreeNode(data);
			tree->right->count++;
		}		
	}
	else if (data == tree->data)
	{
		tree->count++;
	}
}
void BinaryTree::print(TreeNode *tree)
{ 
	if (tree != NULL)
	{
		print(tree->left);
		cout << tree->data << " " << tree->count << "  " << endl;
		print(tree->right);
	}
}
