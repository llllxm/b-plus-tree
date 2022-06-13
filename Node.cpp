//
// Created by Lenovo on 2022/6/12.
//


/*
 *
 *int value[3];
    int v_num;
    Node* child[3];
    int ch_num;
    Node* father;*/
#include "Node.h"

Node::Node() {
    for(int i=0;i<3;i++)
    {
        this->value[i] = 0;
        this->child[i] = nullptr;
    }
    this->father = nullptr;
    this->v_num = 0;
    this->ch_num = 0;
}


void Node::setNode(int v[],int vnum,Node* ch[],int chnum,Node* father) {
    for(int i =0;i<vnum;i++)
        this->value[i] = v[i];
    for(int j =0;j<chnum;j++)
        this->child[j] = ch[j];
    this->father = father;
    this->v_num = vnum;
    this->ch_num = chnum;
}

void Node::setChild(int id, Node *ch) {

}

void Node::setFather(Node *father) {
    this->father = father;


}

const int *Node::getValue() const {
    return value;
}

Node *const *Node::getChild() const {
    return child;
}

Node *Node::getFather() const {
    return father;
}


