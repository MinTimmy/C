#include <iostream>


#include "LinkedStack.h"
#define SIZE 7

int map[SIZE][SIZE] = { 2,2,2,2,2,2,2,
                        2,0,0,0,0,0,2,
                        2,0,2,0,2,0,2,
                        2,0,0,2,0,2,2,
                        2,2,0,2,0,2,2,
                        2,2,0,0,0,0,2,
                        2,2,2,2,2,2,2};
bool visit[SIZE][SIZE];

int view(int map[][SIZE] , int& startX , int& startY){
    if( !visit[startX][startY+1] && !map[startX][startY+1] ){
        startY+=1;//turn right
        return 1;
    }

    else if( !visit[startX][startY-1] && !map[startX][startY-1] ){
        startY-=1;//turn left
        return 1;
    }

    else if( !visit[startX+1][startY] && !map[startX+1][startY] ){
        startX+=1;//turn up
        return 1;
    }

    else if( !visit[startX-1][startY] && !map[startX-1][startY] ){
        startX-=1;//turn down
        return 1;
    }

    else{//no way can go
        return 0;
    }
}

void printAnswer()
{
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(visit[i][j] == false && map[i][j] == 2){
                std::cout<<"█";
            }
            else if(visit[i][j] == true && map[i][j] == 0){
                std::cout<<"•";
            }
            else
            std::cout<<" ";
        }

        std::cout<<'\n';
    }

}
int main()
{
    for(int i=0;i<SIZE;i++)
      for(int j=0;j<SIZE;j++){
        visit[i][j] = false;
      }

    LinkedStack ls;

    ls.push(1,1); //start site
    visit[1][1] = true;
    int x=1,y=1;//current site
   // Node* current;

    while(!ls.isEmpty()){
        int next_step = view(map , x , y);

        if(next_step){
            visit[x][y] = true;
            ls.push(x,y);
        }

        else{
            visit[x][y] = false;
            map[x][y] = 1;
            ls.pop();

            x = ls.getTopX();
            y = ls.getTopY();
        }

        if( x == 5 && y == 5 ) break; // finish site

    }

    printAnswer();
    //ls.printStack();


    return 0;
}
