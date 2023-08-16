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
        initial direction as N and coordinates as (0,0,0);
        if f or b command- then (0,1,0) or (0,-1,0) and the direction remains same 
        if l or r command - then the direction will change only 
        if u or d command - then the direction will change only
      }

    return 0;
}