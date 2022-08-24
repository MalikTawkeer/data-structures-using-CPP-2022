#include<iostream> 
using namespace std; 
int main() 
{ 
   int r1,c1,r2,c2,sw,i1,j1,i2,j2,k,p,q,r,i3,j3; 
   int a[200][200],b[200][200],pro[200][200]; 
   cout<<"enter sparse matrix 1 rows and columns :"; 
   cin>>r1>>c1; 
   cout<<"enter sparse matrix 2 rows and columns :"; 
   cin>>r2>>c2; 
   if(c1==r2) 
   { 
       sw=2; 
   } 
   else 
   { 
       sw=1; 
   } 
   switch(sw) 
   { 
   case 1: 
 
        cout<<"matrix multiplication not possible...!!"; 
        break; 
   case 2: 
       cout<<"enter sparse matrix 1 elements...."<<endl; 
    for(i1=0;i1<r1;i1++) 
    { 
        for(j1=0;j1<c1;j1++) 
        { 
            cin>>a[i1][j1]; 
        } 
    } 
    cout<<"enter sparse matrix 2 elements...."<<endl; 
    for(i2=0;i2<r2;i2++) 
    { 
        for(j2=0;j2<c2;j2++) 
        { 
            cin>>b[i2][j2]; 
        } 
    } 

    for(p=0;p<r1;p++) 
    { 
        for(q=0;q<c2;q++)   
        { 
            pro[p][q]=0; 
            for(r=0;r<c1;r++) 
            { 
                pro[p][q]=pro[p][q]+a[p][r]*b[r][q]; 
            } 
        } 
    } 
    cout<<"the product of the two sparse matrices is..."<<endl; 
    for(i3=0;i3<r1;i3++) 
    { 
        for(j3=0;j3<c2;j3++) 
        { 
            cout<<pro[i3][j3]<<" "; 
        } 
        cout<<endl; 
    } 
    break; 
   } 
   return 0; 
} 