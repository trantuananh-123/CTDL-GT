#include<iostream>
#include<stack>

using namespace std;

struct node {
    int data;
    node *left;
    node *right;
    node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool nodeLa(node *t) {
    return (t->left == NULL && t->right == NULL);
}

void them(int u, int v, char x, node **root) {
    if((*root) != NULL && (*root)->data == u) {
        if(x == 'L') {
            (*root)->left = new node(v);
        } else {
            (*root)->right = new node(v);
        }
    } else {
        if((*root)->right != NULL) {
            them(u, v, x, &(*root)->right);
        }
        if((*root)->left != NULL) {
            them(u, v, x, &(*root)->left);
        }
    }
}

int tongNode(node *t, bool isLeft) {
    if(t == NULL) {
        return 0;
    }
    if(nodeLa(t) && isLeft) {
        return t->data;
    }
    return tongNode(t->left, true) + tongNode(t->right, false);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, u, v;
        char x;
        cin >> n >> u >> v >> x;
        node *root = new node(u);
        them(u, v, x, &root);
        for(int i = 1; i < n; i++) {
            cin >> u >> v >> x;
            them(u, v, x, &root);
        }
        cout << tongNode(root, false) << endl;
    }
    return 0;
}
