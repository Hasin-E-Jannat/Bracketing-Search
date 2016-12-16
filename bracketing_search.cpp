#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int number,guess,count=0,max=100,min=1;
char ch;
cout<<"Enter a number between 1-100:";
cin>>number;
guess = rand() % 100 + 1;
int prev_guess;
while(1){
//cin>>guess;
if(guess != number){
        prev_guess= guess;
     cout<<"Guessed number: "<<guess<<"\n"<< "which is: ";
    cin>>ch;

if(ch=='L')
{
  guess = rand() % ((max-prev_guess)+1)+ prev_guess;
 min = prev_guess;

}
else{
    guess = rand() % ((prev_guess-min)+1) + min;
    max = prev_guess;
}
count++;
}
else
    break;
}
cout<<"Congratulation!!!"<<endl;
cout<<"Takes "<<count+1<<" guesses"<<endl;
return 0;
}

