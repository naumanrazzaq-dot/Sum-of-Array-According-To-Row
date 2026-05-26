#include <iostream>
using namespace std;
int main()
{
   int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int row=3;
int col=3;

for(int i=0;i<3;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum=sum+matrix[i][j];

    }
    cout<<sum;
    cout<<endl;
}
    return 0;
}
