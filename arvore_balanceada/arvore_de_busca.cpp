#include <iostream>
using namespace std;

// Defini��o da estrutura do n� da �rvore
struct Node
{
	int data;
	Node* left;
	Node* right;
};

// Fun��o para criar um novo n� da �rvore
Node* createNode(int value)
{
	Node* newNode = new Node();
	if (!newNode)
	{
		cout << "Erro na aloca��o de mem�ria!" << endl;
		return NULL;
	}
	newNode->data = value;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// Fun��o para calcular a altura de um n�
int getHeight(Node* root)
{
	if (root == NULL)
		return 0;
	return 1 + max(getHeight(root->left), getHeight(root->right));
}

// Fun��o para realizar a rota��o para a direita
Node* rightRotation(Node* root)
{
	Node* newRoot = root->left;
	root->left = newRoot->right;
	newRoot->right = root;
	return newRoot;
}

// Fun��o para realizar a rota��o para a esquerda
Node* leftRotation(Node* root)
{
	Node* newRoot = root->right;
	root->right = newRoot->left;
	newRoot->left = root;
	return newRoot;
}

// Fun��o para balancear a �rvore
Node* balanceTree(Node* root)
{
	int balanceFactor = 0;
	// Verifica o fator de balanceamento
	if (root->left)
		balanceFactor = getHeight(root->left);
	if (root->right)
		balanceFactor -= getHeight(root->right);

	// Realiza as rota��es necess�rias
	if (balanceFactor > 1)
	{
		if (getHeight(root->left->left) >= getHeight(root->left->right))
			root = rightRotation(root);
		else
		{
			root->left = leftRotation(root->left);
			root = rightRotation(root);
		}
	}
	else if (balanceFactor < -1)
	{
		if (getHeight(root->right->right) >= getHeight(root->right->left))
			root = leftRotation(root);
		else
		{
			root->right = rightRotation(root->right);
			root = leftRotation(root);
		}
	}
	return root;
}

// Fun��o para inserir um novo n� na �rvore
Node* insertNode(Node* root, int value)
{
	// Insere o n� como em uma �rvore de busca bin�ria comum
	if (root == NULL)
		return createNode(value);
	if (value < root->data)
		root->left = insertNode(root->left, value);
	else if (value > root->data)
		root->right = insertNode(root->right, value);
	else
		return root; // valor j� existente

	// Realiza o balanceamento ap�s a inser��o
	root = balanceTree(root);
	return root;
}

// Fun��o para percorrer a �rvore em ordem
void inorderTraversal(Node* root)
{
	if (root == NULL)
		return;
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);
}

// Fun��o principal
int main()
{
	setlocale(LC_ALL, "Portuguese");

	Node* root = NULL;
	int values[] = { 3, 2, 1, 4, 5, 9, 12, 22 };

	for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
	{
		cout << values[i] << " -> ";
	}
	cout << "\n";

	for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
	{
		root = insertNode(root, values[i]);
	}

	cout << "�rvore balanceada em ordem: ";
	inorderTraversal(root);
	cout << endl;

	return 0;
}
