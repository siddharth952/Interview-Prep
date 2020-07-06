#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10],int soln[][10],int i,int j, int m,int n){
    if(i==m && j==n){ //last cell
     soln[m][n] = 1; // at mn set 1
     // Print the path
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++)
                cout<<soln[i][j]<< " ";
        cout << endl;
        }
        cout<<endl;
     return true;
    }

    //Recursive Cond
     //Rat inside grid
     if(i>m || j>n)
        return false;
     if(maze[i][j] == 'X')
        return false;
    // Assume soln exists via current cell
    soln[i][j] = 1;

    // Go right/left

    bool rightSuccess = ratInMaze(maze,soln,i,j+1,m,n); //right
    bool leftSuccess = ratInMaze(maze,soln,i+1,j,m,n);

    // After func call so these are back steps
    // set visited to 0 (Backtrack)
    soln[i][j] = 0;

    if(rightSuccess || leftSuccess) { // Any is true
        return true;
    }
    return false;

}

int main() {
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int soln[10][10] = {0};

        int m = 4,n=4;
        bool ans = ratInMaze(maze,soln,0,0,m-1,n-1);
        if(ans = false)
        cout<<"Path not Found!";
    return 0;
}
