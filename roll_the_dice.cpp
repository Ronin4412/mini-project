#include<iostream>
#include<time.h>
using namespace std;

void toss1(){
    int head;
    int tail;
    srand(time(0));
rand();
if(rand() % 2 == 0){
    cout<<"head .."<<endl;
    return;
}
else{

cout<<"tail"<<endl;
}
}

int game1(int x , int y){
    int name1 = 0;
    int name2 = 1;
    int sum1 = 0;
    int sum2 = 0;
    int lower = 8;
    int upper = 19;
     srand(time(0));
     cout<<"ok you wont the toss your game name is 0 ....><"<<endl;
     cout<<"ok please press enter ''' 0 ''' to begin"<<endl;
     cin>>x;
  x = (rand() % ((upper - lower + 1)) + lower);
  cout<<"your no is "<<x<<endl;
  sum1 = sum1 + x;
  cout<<"next player your game name is 1"<<endl;
  cout<<"ok next player please enter '''1''' to begin "<<endl;
  cin>>y;
  sum2 = sum2 + x;
   y = (rand() % ((upper - lower + 1)) + lower);
   cout<<"your no is "<<y;

   while(sum1 < 50 && sum2 < 50){
    cout<<"ok player "<<name1<<" your sum till now is "<<sum1<<endl;
    cout<<"please enter zero to continue"<<endl;
    cin>>x;
     x = (rand() % ((upper - lower + 1)) + lower);
  cout<<"Player 0 your no is "<<x<<endl;
  sum1 = sum1 + x;
  cout<<"ok "<<name2<<" your sum till now is "<<sum2<<endl;
  cout<<"please enter one to continue "<<endl;
  cin>>y;
   y = (rand() % ((upper - lower + 1)) + lower);
   cout<<"player 1 your no is "<<y<<endl;
    sum2 = sum2 + y;
   
   }
   if(sum1 > 50){
    cout<<"congrats "<<name1<<" for winning ....><><><><"<<endl;
    return 0;
    
   }
   if(sum2 > 50){
    cout<<"congrats "<<name2<<" for winning ....><><><><"<<endl;
   }
    return 0;
}


int main(){
    string name1 ;
    string name2 ;
    string x;
    char y;
    string toss;
    int no1 , no2;



    cout<<"enter player one name"<<endl;
    cin>>name1;
    cout<<"enter player two name "<<endl;
    cin>>name2;

    cout<<"get ready for toss !"<<endl;
    cout<<"enter the name of who will call for toss >>>--"<<endl;
    cin>>x;
    if(x == name1){
        cout<<"ok "<<name1<<" press y for confirmation"<<endl;
        cin>>y;
        if(y = 'y'){
            cout<<"thank you ! for confirmation"<<endl;
            cout<<"what do you want ---- "<<endl;
            cout<<"head or tail ? ..."<<endl;
            cin>>toss;
            cout<<"your toss result is :...''>>> "<<endl;
            toss1();
            cout<<"if you win press y ...\n";
            cout<<"press n if you lose"<<endl;
            cin>>y;
            if(y == 'y'){
                cout<<"ok "<<name1<<" get ready and all the best....."<<endl;
                game1(no1,no2);
            }
            else{
                cout<<"koi baat nahi toss hare ho match nahi...>>"<<endl;
                cout<<"ok " <<name2<<" get ready and all the best"<<endl;
                game1(no1 , no2);
            }
            
        }
        else{
            cout<<"jab nahi karna to naam kyon likha bsdk"<<endl;
        }

    }

    else if(x == name2){
        cout<<"ok "<<name2<<" press y for confirmation"<<endl;
        cin>>y;
        if(y = 'y'){
            cout<<"thank you ! for confirmation"<<endl;
        }

    }
    else{
        cout<<"please enter a valid name";
    }


    return 0;
}