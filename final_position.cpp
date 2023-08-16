#include<bits/stdc++.h>
using namespace std;

void no_change_in_direction(){

}


void change_in_direction_only(){

}

void directions(vector<char>&commands,int x_direction, int y_direction , int z_direction, char initial_direction){
    for(int i=0;i<commands.size();i++){
         if(commands[i]=='f' || commands[i]=='b'){
            no_change_in_direction();
         }else{
            change_in_direction_only();
         }
    }
}     

int main(){ 
  int x_direction;
   cin>>x_direction;

   int y_direction;
   cin>>y_direction;

   int z_direction;
   cin>>z_direction;

   char intial_direction ='N';
   
     vector<char>commands;
     commands={'f','r','u','b','l'};
      
      directions(commands,0,0,0,N);

      

    return 0;
}