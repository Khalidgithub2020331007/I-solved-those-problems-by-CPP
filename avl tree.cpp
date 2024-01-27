#include<iostream>
using namespace std;
struct node
{
    int data;
     node *left=NULL;
     node *right=NULL;

};
 node *root=NULL;
void insert(int value)
{
     node *newnode=new node;
    newnode->data=value;

    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
         node *temp= root;
        while(1)
        {
            if(newnode->data <temp->data)
            {
                //left
                if(temp->left==NULL)
                {
                     temp->left=newnode;

                     break;
                }
                else
                {
                    temp=temp->left;
                }
            }
            else
            {
                //right
                if(temp->right==NULL)
                {
                     temp->right=newnode;

                     break;
                }
                  else
                {
                    temp=temp->right;
                }
            }

        }
    }

}
void preorder( node *r)
{
    if(r==NULL)
    {
        return ;
    }

    preorder(r->left);



    preorder(r->right);
    cout<<r->data<< " ";
}
void postorder( node *r)
{
    if(r==NULL)
    {
        return ;
    }
    cout<<r->data<< " ";

    postorder(r->left);



    postorder(r->right);

}
void inorder(node *r)
{
    if(r==NULL)
    {
        return ;
    }

    inorder(r->left);

    cout<<r->data<< " ";

    inorder(r->right);

}
int main()
{
    int t,j,n,i,a;

    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        root=NULL;
        for(i=0;i<n;i++)
        {
            cin>>a;
            insert(a);
        }
        cout<<"Case "<<j+1<<" :\n";
        preorder(root);
        cout<<endl;
        inorder(root);
        cout<<endl;
        postorder(root);
        cout<<endl;
      free(root);

    }


    return 0;

}

