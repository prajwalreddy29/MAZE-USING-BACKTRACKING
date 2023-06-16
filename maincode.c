/*program to solve Ratina Maze problem using 

backtracking*/ 

#include<stdio.h> 

// Maze 

size#define

N4 

bool solve Maze Util(int maze[N][N], int x,int y,int sol[N][N]); 

/*A function to print solution matrix sol[N][N]*/ 

void print Solution(intsol[N][N]) 

{ 

for (inti=0;i<N;i++) 

{ 

for (intj=0;j<N;j++) 

{printf("%d",sol[i][j]); 

} 

printf("\n"); 

} 

} 

/*A function to check if x,y is valid index for N*Nmaze*/

bool is Safe(int maze[N][N],int x,int y) 

{ 

//if(x,y outside maze)return false 

if(x>= 0&&x< N&&y>= 0&&y<N&&maze[x][y] == 1)return true; 

return false; 

} 

Bool solve Maze(int maze[N][N]) 

{ 

/defining a null matrix 

int sol[N][N] ={ 

{0,0,0,0}, 
{0,0,0,0}, 

{0,0,0,0}, 

{0,0,0,0} 

}; 

if(solve Maze Util(maze,0,0,sol)==false) 

{ 

printf("Solution doesn'texist"); 

return false; 

} 

PrintSolution(sol); 

return true; 

} 

Bool solve Maze Util(int maze[N][N], int x,int y,int sol[N][N]) 

{ 

// if(x,y is goal) return true 

if(x==N-1&&y==N-1) 

{ 

sol[x][y]=1; 

return true; 

} 

//Check if maze[x][y] is valid 

if(is Safe(maze,x,y)==true) 

{ 

//mark x,y as part of solution 

pathsol[x][y] =1; 

/*Moveforward inxdirection */ 

if(solve Maze Util (maze,x+1,y,sol)==true) 

return true; 

/*If moving in x direction doesn't give solution then 

Move down in y direction*/ 

if(solve Maze Util(maze,x,y+1,sol)==true) 

return true; 
unmark x,y as part of solution path 

*/sol[x][y] =0; 

return false; 

} 

Return false; 

} 

//program to test above function 

int main() 

{ 

int maze[N][N]={ 

{1,0,0,0}, 

{1,1,0,1}, 

{0,1,0,0}, 

{1,1,1,1} 

}; 

SolveMaze(maze) 

return 0; 

}
