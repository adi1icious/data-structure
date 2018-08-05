#include <stdio.h>

struct node
{   struct btnode* lp;
    int data;
    struct btnode* rp;
    };

int Numleaf(struct btnode *root)
{
    if(root==NULL) return (0);
    else {
        if (root->lp==NULL&&root->rp==NULL)
            return (1);
        else{
            int xl=Numleaf(root->lp);
            int xr=Numleaf(root->rp);
            return(xl+xr);
            }
}
