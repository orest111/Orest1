//error
#include<iostream>
using namespace std;
bool perevir(int *mas,int n)
{
int i,j,temp,p=0;
for(i=0;i<n;i++)
for(j=0;j<n-1-i;j++)if(mas[j]>mas[j+1]){temp=mas[i+1];mas[i+1]=mas[i];mas[i]=temp;}
for(i=0;i<n;i++){if(mas[i]==i+1)p=p+1;}
for(i=0;i<n;i++)cout<<mas[i];
cout<<endl;
if(p==n)return(true); else{return(false);}
}
int* utv(int **arr, int n,int j)
{
int i;
int *mas=new int [n];
for(i=0;i<n; i++)mas[i]=arr[i][j];
return(mas);
}
void main()
{
int n,i,j,k=0;
cout<<"n=";
cin>>n;n=n*n;
int *A=new int [n];
int **mas=new int *[n];
for(i=0;i<n;i++)mas[i]=new int [n];
cout<<"vvedit elementu"<<endl;
for(i=0;i<n;i++)
for(j=0;j<n;j++)cin>>mas[i][j];
for(j=0;j<n;j++){A=utv(mas,n,j); if(perevir(A,n)==false)k++;}
if(k>=1)cout<<"NO";else cout<<"YES";
cout<<k<<endl;
}
