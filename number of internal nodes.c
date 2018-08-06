#include<stdio.h>

struct Btnode
{
	int data;
	struct Btnode* lp;
	struct Btnode* rp; };

int numinternalnode(struct Btnode* root)
{
    if(root==NULL) return (0);
    else{
        if(root->lp==NULL&&root->rp==NULL)
            return(0);
        else{
            int xl=numinternalnode(root->lp);
            int xr=numinternalnode(root->rp);
            return (1+xl+xr);
            }
        }
}
