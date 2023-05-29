/*
struct node{
    struct node *left;
    struct node *right;
    char label;
};

void preorder(struct node *p) 行きかけ順
{   
    if(p==NULL)
        return;
    printf("%c",p->label);
    preorder(p->left);
    preorder(p->right); 
}

void inorder(struct node *p) 通りかけ順
{
    if(p==NULL)
        return;
    inorder(p->left);
    printf("%s",p->nobel);
    inorder(p->right);
}

void postorder(struct node *p) 帰りかけ順
{
    if(p==NULL)
        return;
    postorder(p->left);
    postorder(p->right);
    printf("%s",p->label);
}*/