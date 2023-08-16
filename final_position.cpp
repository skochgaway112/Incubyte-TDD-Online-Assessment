#include<bits/stdc++.h>
using namespace std;
     

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
      
  Given{
    initial position and direction is (0,0,0) and N
    if(command is f or b)- The spacecraft would move one step forward and backward depending on the current direction 
    if(command is l or r)- the spacecraft will turn 90 degrees to left or right, changing the direction
    if(command is u or d)- the spacecraft will again turn the direction rotating upwards or downwards 
  }

    return 0;
}