#include <iostream>
using namespace std;

// Definição da estrutura do nó da árvore
struct Node
{
	int data;
	Node* left;
	Node* right;
};

// Função para criar um novo nó da árvore
Node* createNode(int value)
{
	Node* newNode = new Node();
	if (!newNode)
	{
		cout << "Erro na alocação de memória!" << endl;
		return NULL;
	}
	newNode->data = value;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// Função para calcular a altura de um nó
int getHeight(Node* root)
{
	if (root == NULL)
		return 0;
	return 1 + max(getHeight(root->left), getHeight(root->right));
}

// Função para realizar a rotação para a direita
Node* rightRotation(Node* root)
{
	Node* newRoot = root->left;
	root->left = newRoot->right;
	newRoot->right = root;
	return newRoot;
}

// Função para realizar a rotação para a esquerda
Node* leftRotation(Node* root)
{
	Node* newRoot = root->right;
	root->right = newRoot->left;
	newRoot->left = root;
	return newRoot;
}

// Função para balancear a árvore
Node* balanceTree(Node* root)
{
	int balanceFactor = 0;
	// Verifica o fator de balanceamento
	if (root->left)
		balanceFactor = getHeight(root->left);
	if (root->right)
		balanceFactor -= getHeight(root->right);

	// Realiza as rotações necessárias
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

// Função para inserir um novo nó na árvore
Node* insertNode(Node* root, int value)
{
	// Insere o nó como em uma árvore de busca binária comum
	if (root == NULL)
		return createNode(value);
	if (value < root->data)
		root->left = insertNode(root->left, value);
	else if (value > root->data)
		root->right = insertNode(root->right, value);
	else
		return root; // valor já existente

	// Realiza o balanceamento após a inserção
	root = balanceTree(root);
	return root;
}

// Função para percorrer a árvore em ordem
void inorderTraversal(Node* root)
{
	if (root == NULL)
		return;
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);
}

// Função principal
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

	cout << "Árvore balanceada em ordem: ";
	inorderTraversal(root);
	cout << endl;

	return 0;
}
