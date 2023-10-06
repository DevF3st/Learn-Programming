#include<iostream>
#include<queue>
using namespace std;

class Node{

    public: 
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Node* insertIntoBST(Node* &root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        root -> right = insertIntoBST(root -> right, d);
    }
    else{
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
}

Node* minVal(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp  = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return root;
}

// this is the main code for the deletion
Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root -> data ==  val){
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root; 
            return NULL;
        }
        // 1 child
        // left child 
        if(root -> left != NULL && root -> right != NULL){
            Node* temp = root -> left;
            delete temp;
            return temp;
        }
        // right child 
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete temp;
            return temp;
        }
        // 2 child 
        if(root -> left != NULL && root -> right != NULL){
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
    else if(root -> data > val){
        // left part
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else{
        // right part 
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

void levelOrdertraversal(Node *root){

    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp == NULL){
            // previous level has been completed
            cout << endl;
            if(!q.empty()){
                // queue still has some child node
                q.push(NULL);
            }
        } 
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void takeinput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node* root = NULL;

    cout << "Enter data to create the binary sreach tree : " << endl;
    takeinput(root);

    cout << "Printing the BST : " << endl;
    levelOrdertraversal(root);

    /*
    cout << "Printing Inorder : " << endl;
    inorder(root);

    cout << "Printing Postorder : " << endl;
    postorder(root);

    cout << "Printing Preorder : " << endl;
    preorder(root);
    */

    // deletion in BST
    root = deleteFromBST(root, 50);
    return 0;
}
