#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string name;
    char input;
    int inputuser;
    int score=0;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<endl;
    srand(0);//number generator with fixed value of 0
    do{
        int variable=rand()%5+1;//range of number between 1 to 5
        do{
            cout<<"Enter the value of number b/w 1 to 5: ";
            cin>>inputuser;
            cout<<endl;
            if(inputuser<1 || inputuser>5){
                cout<<"invalid number taken";
            }
        }while(inputuser<1 || inputuser>5);
        if(inputuser==variable){
            cout<<"Congrats! you guessed right number"<<endl;
            score++;
        }else{
            cout<<"Sorry you guessed wrong number try again"<<endl;
        }cout<<"Would you like to try again (Y/N) :";
         cin>>input;
         cout<<endl;
    }while(input!='N' && input!='n');
    cout<<"Your score is "<<score<<endl;
    cout<<"Game end"<<endl;
    return 0;
}   