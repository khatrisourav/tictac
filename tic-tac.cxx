#include <iostream>
using namespace std;


void drawboard (char space[3][3] ){
    cout<<"------------------------------\n";

for ( int i = 0;i<3;i++){
     
    for ( int j = 0;j<3;j++){
       
        
        cout<<"|"<<space[i][j]<<"       ";
    }
 cout<<"|";
    
 cout<<endl;
 
    cout<<"----------------------------\n";
   
   
  


}


   
  
}

bool win( char space[3][3] , char  p ) {
for ( int i = 0;i<3;i++){
    if(space[i][0]==p&&space[i][1]==p&&space[i][2]==p){
        return true;
        
    }
     if(space[0][i]==p&& space[1][i]==p&&space[2][i]==p){
        return true;

    }
   

}

  if ( space[0][0]==p&&space[1][1]==p&&space[2][2]==p){
        return true;
    }
     if( space [0][2]==p&&space[1][1]==p&&space[2][0]==p){
        return true;
    }

    return false;

}

int main() {
char player = 'x';
   


    char space[3][3] = {{ '1','1','1'}
                       ,{ '1','1','1'}
                       ,{ '1','1','1'} };

    int row, col; 
    int turn;

    cout << "Welcome to Tic-Tac-Toe!\n"; 



for (turn = 0;turn<9;turn++){

   system("cls");
   
    drawboard(space);

    while(true){
         cout<<"enter the location where you want to insert the element"<<endl;
    cout<<"the row range is 0-2 and column also 0-2";


        cin>>row>>col;
          if (space[row][col]!='1'||row>2||row<0||col>2||col<0){

        cout<<"Invalid move"<<endl;


        }
        else{

            break;
        }

    }


    space[row][col]= player;

 

     if( win ( space, player) ){
        drawboard(space);

        cout<<"player"<<player<<"wins"<<endl;

        break;
    }

       player = (player=='x') ? '0' : 'x';






  


}




  

}