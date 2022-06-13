//
// Created by Lenovo on 2022/6/12.
//

#ifndef BPLUSTREE_NODE_H
#define BPLUSTREE_NODE_H


class Node {
private:
    int value[3];
    int v_num;
    Node* child[3];
    int ch_num;
    Node* father;
public:
    Node();

    void setNode(int v[],int vnum,Node* ch[],int chnum,Node* father);

    void setChild(int id, Node* ch);

    void setFather(Node* father);

    const int *getValue() const;

    Node *const *getChild() const;

    Node *getFather() const;

};


#endif //BPLUSTREE_NODE_H
