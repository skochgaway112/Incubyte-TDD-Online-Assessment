#include<bits/stdc++.h>
using namespace std;

void no_change_in_direction(int x_direction, int y_direction, int z_direction,char command,char intial_direction){
  if(command=='f'){
    y_direction++;
  }else if(command=='b'){
    y_direction--;
  }
}


void change_in_direction_only(char initial_direction,char command){
  //here the direction will change with no increment or decrement
  if(command=='r'){
    if the initial direction is north , it will rotate 90 degrees to the right , else if south then again 90 degrees to the right to West
    and if it is in west then it will move to north and if in east then it will move towards south
  }
} 

void directions(vector<char>&commands,int x_direction, int y_direction , int z_direction, char initial_direction){
    for(int i=0;i<commands.size();i++){
         if(commands[i]=='f' || commands[i]=='b'){
            no_change_in_direction(x_direction,y_direction,z_direction,commands[i], initial_direction);
         }else{
            change_in_direction_only(inital_direction,command[i]);
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