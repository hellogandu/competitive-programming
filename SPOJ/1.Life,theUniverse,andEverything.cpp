#include<iostream>
using namespace std;

int main(){
   
   while (true)
   {
     int input;
     scanf("%d",&input);
     if(input == 42) break;
     else printf("%d\n",input);
   }
  return 0;
}