#include "BinaryTree.hpp"

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

void BinaryTree::displayInOrder()
{
    BinaryTree->add(0);
    for(int i = 0; i < BinaryTree->size; ++i)
    {
        cout<< this->getPayload(i)<< "\n";
    }
}
        
void BinaryTree::displayPreOrder()
{
    for(int i = 0; i < BinaryTree->size; ++i)
    {
        cout<< this->getPayload(i)<< "\n";
    }
}

void BinaryTree::displayPostOrder()
{

}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to my left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to my right
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        } 
    } 
}

int num BinaryTree::getPayload(int i)
{
       return getPayload(i);
}
