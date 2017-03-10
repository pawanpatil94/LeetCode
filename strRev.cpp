#include <iostream>
#include <stdlib.h>
using namespace std;

struct TreeNode
{
	int data;
	struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode (int data)
{
	struct TreeNode* temp = (struct TreeNode*) malloc(sizeof(TreeNode));
	temp->data = data;

	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

int main()
{
	TreeNode * root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);

	return 0;
}

