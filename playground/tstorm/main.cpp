#include "Headers.hpp"

//array + linked list passes on
//
//queues and stack

//stack of plate inmplementation, split when its at X

struct	Animal
{
	string	date;
	Animal(string d):date(d){};
};

struct Cat : public Animal
{
	string name;
	Cat(string n, string d):Animal(d),name(n){};

	void	print(){std::cout << "Cat: " << name << " : " << date << std::endl;};
};



//treee and graph

class myNode
{
	public:
		string 		name;
		myNode		*children;
};


class biNode
{
	public:
		string	name;
		biNode	*left;
		biNode	*right;
};

#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void printTree(TreeNode* node, int level) {
    if (node == nullptr) {
        return;
    }

    printTree(node->right, level + 1);

    for (int i = 0; i < level; i++) {
        std::cout << "-|-";
    }

	std::cout << "FINININ\n";

    std::cout << node->data << std::endl;

    printTree(node->left, level + 1);
}




int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    printTree(root, 0);

    // Clean up the memory
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}




int maink()
{

	Cat cat("bilson", "yesterday");

	cat.print();

	return 1;
};
