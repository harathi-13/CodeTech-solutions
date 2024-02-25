#include <bits/stdc++.h>
#include <vector>
#include <array>

using namespace std;
std::array<std::array<char, 3>, 3> boardarray {{{'_','_','_'},{'_','_','_'},{'_','_','_'}}};
char p1s='X';
char p2s='O';

bool check_rows(char player){
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(boardarray[i][j]==player){
                count++;
            }
            if(count==3){
                cout<<"Symbol won is "<<player<<endl;
                return true;
            }
        }
    }
    return false;
}

bool check_columns(char player){
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(boardarray[j][i]==player){
                count++;
            }
            if(count==3){
                cout<<"Symbol won is "<<player;
                return true;
            }
        }
    }
    return false;
}

bool check_diag(char player){
    if(boardarray[0][2]==boardarray[1][1] && boardarray[1][1]==boardarray[2][0] && boardarray[1][1]==player){
        cout<<player<<"won"<<endl;
        return true;
    }
    if(boardarray[0][0]==boardarray[1][1] && boardarray[1][1]==boardarray[2][2] && boardarray[1][1]==player){
        cout<<player<<"won"<<endl;
        return true;
    }
    return false;    
}

bool won(char player){
    return check_rows(player) || check_columns(player) || check_diag(player);
}

void place(char player){
    for (const auto& row : boardarray) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
    int row;
    int column;
    while(true){
        cout<<"Enter row(1/2/3) ";
        cin>>row;
        cout<<"Enter column(1/2/3) ";
        cin>>column;
        if(row>0 && row<4 && column>0 && column<4 && boardarray[row-1][column-1]=='_'){
            break;
        }else{
            cout<<"Invalid input";
        }
    }
    boardarray[row-1][column-1]=player;
}


void play(){
    for(int i=0;i<9;i++){
        if(i%2==0){
            cout<<"X turn"<<endl;
            place(p1s);
            if(won(p1s)){
                break;
            }
            else{
            cout<<"O turn"<<endl;
            place(p2s);
            if(won(p2s)){
                break;
            }
            }
        }
        if(!won(p1s) && !won(p2s)){
            cout<<"draw"<<endl;
        }
    }
}

int main(){
    play();
    return 0;
}