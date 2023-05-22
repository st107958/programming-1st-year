#include<iostream>
#include<ostream>

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int data, Node* left = nullptr, Node* right = nullptr) :
		data(data), left(left), right(right) {}

	~Node() {}
};

class BTree
{
private:
	Node* root;

	void Insert(Node*& root, Node* node)
	{
		if (root == nullptr)
		{
			root = node;
			return;
		}

		if (root->data > node->data)
		{
			return Insert(root->left, node);
		}

		if (root->data < node->data)
		{
			return Insert(root->right, node);
		}

		if (root->data == node->data)
		{
			return;
		}
	}

	void Print(std::ostream& stream, Node*& root, int depth = 0)
	{
		if (root == nullptr)
		{
			return;
		}

		Print(stream, root->left, depth + 1);

		for (int i = 0; i < depth; ++i)
		{
			std::cout << "\t";
		}

		stream << root->data << std::endl;

		Print(stream, root->right, depth + 1);
	}

	Node*& GetNode(Node*& node, int element)
	{
		if (node == nullptr || node->data == element)
		{
			return node;
		}

		if (node->data > element)
		{
			return GetNode(node->left, element);
		}

		if (node->data < element)
		{
			return GetNode(node->right, element);
		}
	}

	Node* Extract(Node*& node)
	{
		Node* tnode = node;

		if (node->left == nullptr && node->left == nullptr)
		{
			node == nullptr;
		}

		else if (node->right == nullptr)
		{
			node = node->left;
		}

		else if (node->left == nullptr)
		{
			node = node->right;
		}

		else if (node->left->right == nullptr)
		{
			node->left->right = node->right;
			node = node->left;
		}

		else
		{
			Node* t = node->right;

			while (t->left->left != nullptr)
			{
				t = t->left;
			}

			Node* nnode = Extract(t->left);

			nnode->left = node->left;
			nnode->right = node->right;

			node = nnode;
		}

		tnode->right = nullptr;
		tnode->left = nullptr;

		return tnode;
	}

public:
	BTree(Node* root = nullptr) : root(root) {}

	~BTree() {}

	void Add(int data)
	{
		return Insert(root, new Node(data));
	}

	void Remove(int data)
	{
		Node*& node = GetNode(root, data);

		if (node != nullptr)
		{
			Node* extracted = Extract(node);

			delete extracted;
		}
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		stream << "__________________" << std::endl;

		if (tree.root == nullptr)
		{
			stream << "EMPTY" << std::endl;
		}

		else
		{
			tree.Print(stream, tree.root);
		}
		stream << "__________________" << std::endl;

		return stream;
	}
};
int main(int argc, char* argv[])
{
	BTree tree;

	tree.Add(23);
	tree.Add(27);
	tree.Add(26);
	tree.Add(28);
	tree.Add(6);
	tree.Add(29);
	tree.Add(25);
	tree.Add(14);
	tree.Add(3);
	tree.Add(7);
	tree.Add(17);

	std::cout << tree << std::endl;

	tree.Remove(27);

	std::cout << tree << std::endl;

	return EXIT_SUCCESS;
}