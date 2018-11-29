#ifndef __BINTREE_H__
#define __BINTREE_H__

#ifndef NULL
#define NULL 0x00
#endif

class BSTNode {
private:
    int value;
    char letter;
    BSTNode *left;
    BSTNode *right;

public:
    BSTNode(int val, char let) { value = val; letter = let; left = right = NULL; }
    ~BSTNode() {}

    friend class BSTree;
};

class BSTree {
private:
    BSTNode *root;

    /* Helper Methods */
    bool search(int val, BSTNode* node);
    void insert(int val, char let, BSTNode* node);
    void clear(BSTNode* node);

public:
    BSTree();
    ~BSTree();

    /* Public Methods */
    bool search(int val);
    void insert(int val, char let);
    void clear();

};

#endif