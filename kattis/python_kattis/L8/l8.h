//Bishal Khadka
//04/26/2018
//Lab 8

#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// Definition of the BinaryTree Node
template <class elemType>
struct nodeType
{
    elemType info;
    nodeType<elemType> *lLink;
    nodeType<elemType> *rLink;
};

// Definition of the BinarySearchTree class
template <class elemType>
class BinarySearchTree
{
private:
    nodeType<elemType> *root;
    void copyTree(nodeType<elemType>* &copiedTreeRoot, nodeType<elemType>* otherTreeRoot);
    //Makes a copy of the binary tree to which
    //otherTreeRoot points.
    //Postcondition: The pointer copiedTreeRoot points to
    //               the root of the copied binary tree.
    
    void destroy(nodeType<elemType>* &p);
    //Function to destroy the binary tree to which p points.
    //Postcondition: Memory space occupied by each node, in
    //               the binary tree to which p points, is
    //               deallocated.
    //               p = nullptr;
    
    void inorder(nodeType<elemType> *p) const;
    //Function to do an inorder traversal of the binary
    //tree to which p points.
    //Postcondition: Nodes of the binary tree, to which p
    //               points, are printed in inorder sequence.
    
    void preorder(nodeType<elemType> *p) const;
    //Function to do a preorder traversal of the binary
    //tree to which p points.
    //Postcondition: Nodes of the binary tree, to which p
    //               points, are printed in preorder
    //               sequence.
    
    void postorder(nodeType<elemType> *p) const;
    //Function to do a postorder traversal of the binary
    //tree to which p points.
    //Postcondition: Nodes of the binary tree, to which p
    //               points, are printed in postorder
    //               sequence.
    
    int height(nodeType<elemType> *p) const;
    //Function to determine the height of the binary tree
    //to which p points.
    //Postcondition: Height of the binary tree to which
    //               p points is returned.
    
    int max(elemType x, elemType y) const;
    //Function to determine the larger of x and y.
    //Postcondition: Returns the larger of x and y.
    
    int nodeCount(nodeType<elemType> *p) const;
    //Function to determine the number of nodes in
    //the binary tree to which p points.
    //Postcondition: The number of nodes in the binary
    //               tree to which p points is returned.
    
    int leavesCount(nodeType<elemType> *p) const;
    //Function to determine the number of leaves in
    //the binary tree to which p points
    //Postcondition: The number of leaves in the binary
    //               tree to which p points is returned.
    
    bool lookup(nodeType<elemType> *p, const elemType& searchItem) const;
    //Function to determine if searchItem is in the binary
    //tree.
    //Postcondition: Returns true if searchItem is found in
    //               the binary tree; otherwise, returns
    //               false.
    
    void insert(nodeType<elemType>* &p, nodeType<elemType> *newNode);
    //Function to insert insertItem in the binary tree.
    //Postcondition: If there is no node in the binary tree
    //               that has the same info as insertItem, a
    //               node with the info insertItem is created
    //               and inserted in the binary search tree.
    
    void deleteTreeNode(nodeType<elemType>* &p, const elemType &item);
    //Function to delete given item from the tree if found
    
    nodeType<elemType>* findMin(nodeType<elemType> *current);
    // Function to find the node with the minimum value
    
    
public:
    BinarySearchTree();
    //Default constructor
    
    BinarySearchTree(const BinarySearchTree<elemType>& otherTree);
    //Copy constructor
    
    const BinarySearchTree<elemType>& operator=(const BinarySearchTree<elemType>&);
    //Overload the assignment operator.
    
    bool isEmpty() const;
    //Function to determine whether the binary tree is empty.
    //Postcondition: Returns true if the binary tree is empty;
    //               otherwise, returns false.
    
    void inorderTraversal() const;
    //Function to do an inorder traversal of the binary tree.
    //Postcondition: Nodes are printed in inorder sequence.
    
    void preorderTraversal() const;
    //Function to do a preorder traversal of the binary tree.
    //Postcondition: Nodes are printed in preorder sequence.
    
    void postorderTraversal() const;
    //Function to do a postorder traversal of the binary tree.
    //Postcondition: Nodes are printed in postorder sequence.
    
    int treeHeight() const;
    //Function to determine the height of a binary tree.
    //Postcondition: Returns the height of the binary tree.
    
    int treeNodeCount() const;
    //Function to determine the number of nodes in a
    //binary tree.
    //Postcondition: Returns the number of nodes in the
    //               binary tree.
    
    int treeLeavesCount() const;
    //Function to determine the number of leaves in a
    //binary tree.
    //Postcondition: Returns the number of leaves in the
    //               binary tree.
    
    void destroyTree();
    //Function to destroy the binary tree.
    //Postcondition: Memory space occupied by each node
    //               is deallocated.
    //               root = nullptr;
    
    bool lookupTree(const elemType &searchItem) const;
    //Function to determine if searchItem is in the binary
    //tree.
    //Postcondition: Returns true if searchItem is found in
    //               the binary tree; otherwise, returns
    //               false.
    
    void insertNode(const elemType& insertItem);
    //Function to insert insertItem in the binary tree.
    //Postcondition: If there is no node in the binary tree
    //               that has the same info as insertItem, a
    //               node with the info insertItem is created
    //               and inserted in the binary search tree.
    
    void deleteNode(const elemType& deleteItem);
    //Function to delete deleteItem from the binary tree
    //Postcondition: If a node with the same info as
    //               deleteItem is found, it is deleted from
    //               the binary tree.
    //               If the binary tree is empty or
    //               deleteItem is not in the binary tree,
    //               an appropriate message is printed.
    
    ~BinarySearchTree();
    //Destructor
};

//Definition of member functions
// default constructor
template <class elemType>
BinarySearchTree<elemType>::BinarySearchTree()
{
    root = nullptr;
}

//copy constructor public method
template <class elemType>
BinarySearchTree<elemType>::BinarySearchTree(const BinarySearchTree<elemType>& otherTree)
{
    if (otherTree.root == nullptr) //otherTree is empty
        root = nullptr;
    else
        copyTree(root, otherTree.root);
}

//Overload the assignment operator - public method
template <class elemType>
const BinarySearchTree<elemType>& BinarySearchTree<elemType>::operator=(const BinarySearchTree<elemType>& otherTree)
{
    if (this != &otherTree) //avoid self-copy
    {
        if (root != nullptr)   //if the binary tree is not empty,
            //destroy the binary tree
            destroy(root);
        
        if (otherTree.root == nullptr) //otherTree is empty
            root = nullptr;
        else
            copyTree(root, otherTree.root);
    }//end else
    
    return *this;
}

// isEmpty public method
template <class elemType>
bool BinarySearchTree<elemType>::isEmpty() const
{
    return (root == nullptr);
}

// inorderTraversal public method
template <class elemType>
void BinarySearchTree<elemType>::inorderTraversal() const
{
    inorder(root);
}

// preorderTraversal public method
template <class elemType>
void BinarySearchTree<elemType>::preorderTraversal() const
{
    preorder(root);
}

// postorderTraversal public method
template <class elemType>
void BinarySearchTree<elemType>::postorderTraversal() const
{
    postorder(root);
}

// treeHeight public method
template <class elemType>
int BinarySearchTree<elemType>::treeHeight() const
{
    return height(root);
}

// treeNodeCount public method
template <class elemType>
int BinarySearchTree<elemType>::treeNodeCount() const
{
    return nodeCount(root);
}

// treeLeavesCount public method
template <class elemType>
int BinarySearchTree<elemType>::treeLeavesCount() const
{
    return leavesCount(root);
}

// destroyTree public method
template <class elemType>
void  BinarySearchTree<elemType>::destroyTree()
{
    destroy(root);
}


// lookupTree public method
template <class elemType>
bool BinarySearchTree<elemType>::lookupTree(const elemType &searchItem) const
{
    return lookup(root, searchItem);
}

// insertNode public method
template <class elemType>
void BinarySearchTree<elemType>::insertNode(const elemType& insertItem)
{
    // FIXED
    // 1. Create a newNode
    // 2. copy insertItem into info of newNode
    // 3. initialize left and right links to nullptr;
    // 4. call private insert method passing proper arguments
    nodeType<elemType> *newNode = new nodeType<elemType>;
    newNode->info = insertItem;
    newNode->lLink = nullptr;
    newNode->rLink = nullptr;
    insert(root, newNode);
}

//Destructor public method
template <class elemType>
BinarySearchTree<elemType>::~BinarySearchTree()
{
    destroy(root);
}


// copyTree private method
template <class elemType>
void  BinarySearchTree<elemType>::copyTree(nodeType<elemType>* &copiedTreeRoot, nodeType<elemType>* otherTreeRoot)
{
    if (otherTreeRoot == nullptr)
        copiedTreeRoot = nullptr;
    else
    {
        copiedTreeRoot = new nodeType<elemType>;
        copiedTreeRoot->info = otherTreeRoot->info;
        copyTree(copiedTreeRoot->lLink, otherTreeRoot->lLink);
        copyTree(copiedTreeRoot->rLink, otherTreeRoot->rLink);
    }
} //end copyTree

// inorder private method
template <class elemType>
void BinarySearchTree<elemType>::inorder(nodeType<elemType> *p) const
{
    if (p != nullptr) // General case
    {
        // 1. Recursively call inorder on p's left subtree; traverse left tree
        // 2. Print the info of root/current node; visit node
        // 3. Recursively call inorder on p's right subtree; traverse right tree
        inorder(p->lLink);
        cout << p->info << " ";
        inorder(p->rLink);
    }
    // base case, do nothing
}

// preorder private method
template <class elemType>
void BinarySearchTree<elemType>::preorder(nodeType<elemType> *p) const
{
    if(p!=NULL)
    {
        p->info;
        preorder(p->lLink);
        preorder(p->rLink);
    }
    //FIXED
    // Base case: if p equals nullptr, do nothing
    // General case: otherwise do the following:
    //      1. Visit node
    //      2. traverse left tree
    //      3. traverse right tree
    
}

// postorder private method
template <class elemType>
void BinarySearchTree<elemType>::postorder(nodeType<elemType> *p) const
{
    if(p!=NULL)
    {
        
        postorder(p->lLink);
        postorder(p->rLink);
        cout << p->info << endl;
    }
    // FIXED
    
}

// destory private method
template <class elemType>
void  BinarySearchTree<elemType>::destroy(nodeType<elemType>* &p)
{
    if (p != nullptr)
    {
        destroy(p->lLink);
        destroy(p->rLink);
        delete p;
        p = nullptr;
    }
}

// height private method
template<class elemType>
int BinarySearchTree<elemType>::height(nodeType<elemType> *p) const
{
    if (p == nullptr)
        return 0;
    else
        return 1 + max(height(p->lLink), height(p->rLink));
}

// max private method
template <class elemType>
int BinarySearchTree<elemType>::max(elemType x, elemType y) const
{
    if (x >= y)
        return x;
    else
        return y;
}

// nodeCount private method
template <class elemType>
int BinarySearchTree<elemType>::nodeCount(nodeType<elemType> *p) const
{
     if (p == nullptr)
        return 0;
    else
        return 1 + nodeCount(p->lLink)+ nodeCount(p->rLink);
    
    // FIXME
    cout << "Write the definition of the function nodeCount." << endl;
    // 1. Base case: If the tree is empty, return 0
    // 2. General case: return 1 (for root) plus recursive nodeCount of left subtree plus
    // recursive nodeCount of right subtree
    return 0;
}

// leavesCount private method
template <class elemType>
int BinarySearchTree<elemType>::leavesCount(nodeType<elemType> *p) const
{
    // FIXED
     if (p == NULL)
        return 0;
    else if(p->rLink==NULL && p->lLink==NULL)
        return 1;
    else
        return leavesCount(p->lLink)+leavesCount(p->rLink);
}

//deleteNode public method
template<class elemType>
void BinarySearchTree<elemType>::deleteNode(const elemType& deleteItem)
{
    deleteTreeNode(root, deleteItem);
}

// lookup private method
template <class elemType>
bool BinarySearchTree<elemType>::lookup(nodeType<elemType> *node, const elemType& searchItem) const
{
    
    if (node == nullptr)
        return false;
    else
    {
        if (node->info == searchItem)
            return true;
        else
        {
            if (searchItem < node->info)
                return lookup(node->lLink, searchItem);
            else
                return lookup(node->rLink, searchItem);
        }
    }
}

// insert private method
template <class elemType>
void BinarySearchTree<elemType>::insert(nodeType<elemType>* &current,
                                        nodeType<elemType> *newNode)
{
    if (current == nullptr)
        current = newNode;
    else
    {
        if (newNode->info == current->info)
            cout << "The item to be inserted is already in the tree. " <<
            " duplicates are not allowed!" << endl;
        // 2.b If the newNode's info is smaller than the current node's info,
        // recursively insert newNode into the left subtree
        else if (newNode->info < current->info)
            insert(current->lLink, newNode);
        // 2c. Otherwise, recursively insert newNode into the right subtree
        else
            insert(current->rLink, newNode);
        
    }
}

// findMin private method
// finds the left-most node aka the node with the smallest value
template<class elemType>
nodeType<elemType>* BinarySearchTree<elemType>::findMin(nodeType<elemType> *current) {
    while (current->lLink != nullptr) {
        current = current->lLink;
    }
    return current;
}

//deleteTreeNode private method
template<class elemType>
void BinarySearchTree<elemType>::deleteTreeNode(nodeType<elemType>* &current, const elemType &info) {
    if (current != nullptr) // general case
    {
        if (current->info == info) {//found node
            if (current->lLink == nullptr && current->rLink == nullptr){//case one: no children
                cout << "Deleting leaf node..." << endl;
                delete current;
                current = nullptr;
            }
            else if (current->lLink == nullptr){//case two: has no left subtree
                cout << "Deleting node with no left subtree..." << endl;
                nodeType<elemType>* temp = current;
                current = current->rLink;
                delete temp;
            }
            else if (current->rLink == nullptr){//case three: has no right subtree
                cout << "Deleting node with no right subtree..." << endl;
                nodeType<elemType>* temp = current;
                current = current->lLink;
                delete temp;
            }
            else{//case four: it has both left and right subtree
                cout << "Deleting node with non empty left and right subtrees..." << endl;
                nodeType<elemType>* temp = findMin(current->rLink);
                current->info = temp->info;
                deleteTreeNode(current->rLink, temp->info);
            }
        }
        else if (current->info > info){//search into left subtree
            //cout << "Searching in left subtree..." << endl;
            deleteTreeNode(current->lLink, info);
        }
        else {//search into right subtree
            //cout << "Searching in right subtree..." << endl;
            deleteTreeNode(current->rLink, info);
        }
    }
    
}