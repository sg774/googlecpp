#include<iostream>
using namespace std;
int main()
{
int r,c,m,i,j,k;

cout << "enter no. of rows:" << endl;
cin >> r;
cout << "enter no. of columns:" << endl;
cin >> c;
cout << "enter no. of matrices:" << endl;
cin >> m;
int x[r][c][m];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
for(k=0;k<m;k++)
{
x[i][j][k]= i+j+k;
}}}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
for(k=0;k<m;k++)
{
cout << x[i][j][k] << " ";
}
cout << endl;
}
cout << endl;
} 
return 0;
}
