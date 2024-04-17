#include<iostream>
using namespace std;
 
void addMatrix(int mat1[][5],int mat2[][5],int result[][5],int rows, int cols)
{
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
{
    result= mat1[i][j]+mat2[i][j];
}

}
}
