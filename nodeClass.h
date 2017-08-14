#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
#ifndef TREENODE_H
#define TREENODE_H

typedef std::string ElementType;
class BinaryTree
{
public:
	class TreeNode
	{
	public:
		ElementType data;
		int count = 0;
		TreeNode *left;
		TreeNode *right;
		TreeNode(ElementType new_data)
		{
			data = new_data; left = NULL; right = NULL; count = 0;
		};
	};

	TreeNode *root;
	BinaryTree(ElementType root_data)
	{
		int count = 0;
		root = new TreeNode(root_data);
	};
	~BinaryTree() { delete root; };
	void insert(ElementType data, TreeNode *&tree);
	void print(TreeNode *tree);
};

#endif TREENODE_H