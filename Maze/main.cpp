#include <iostream>
#include <fstream>

using namespace std;
 ifstream Maze("Maze.in");
 ofstream Rezul("Maze.out");
int n ,m;
int Lab[100][100];

void citire()
{
 for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)Maze>>Lab[i][j];
}

void afis()
{
 for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)if(Lab[i][j]==1)Rezul<<'H'<<' ';
        else Rezul<<Lab[i][j]<<' ';
    Rezul<<endl;
 }

}
int start()
{
    for(int i=1;i<=n;i++)if(Lab[1][i]==0)return i;
}




int main()
{

    Maze>>n>>m;
    citire();
    afis();
    int inceput=start();
    cout<<inceput;

    return 0;
}
