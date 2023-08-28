#include "binary_search_tree.h"

t_btree* bstree_create_node(int item) {
    t_btree* node = malloc(sizeof(t_btree));
    node->item = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int cmpf(int x1, int x2) {
    int max = x1;
    if (x2 > x1) {
        max = x2;
    }
    return max;
}

void bstree_insert(t_btree* root, int item, int (*cmpf)(int, int)) {
    t_btree* elem = root;
    t_btree* parent;
    t_btree* new_elem = bstree_create_node(item);
    while (elem != NULL) {
        parent = elem;
        if (cmpf(item, elem->item) == item) {
            elem = elem->right;
        } else {
            elem = elem->left;
        }
    }
    if (cmpf(parent->item, item) == item) {
        parent->right = new_elem;
    } else {
        parent->left = new_elem;
    }
}

void applyf(int item) { printf("%d ", item); }

void bstree_apply_infix(t_btree* root, void (*applyf)(int)) {
    if (root) {
        bstree_apply_infix(root->left, applyf);
        applyf(root->item);
        bstree_apply_infix(root->right, applyf);
    }
}

void bstree_apply_prefix(t_btree* root, void (*applyf)(int)) {
    if (root) {
        applyf(root->item);
        bstree_apply_prefix(root->left, applyf);
        bstree_apply_prefix(root->right, applyf);
    }
}

void bstree_apply_postfix(t_btree* root, void (*applyf)(int)) {
    if (root) {
        bstree_apply_postfix(root->left, applyf);
        bstree_apply_postfix(root->right, applyf);
        applyf(root->item);
    }
}