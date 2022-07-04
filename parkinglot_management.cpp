#include<iostream>
using namespace std;
int twowheeler[100],car[100],rickshaw[100],topt=0,topc=0,topr=0,sum_2wheel=0,sum_car=0,sum_rickshaw=0;
void push_2wheel(){
if(topt==99)
    cout<<"Entry cannot be taken"<<endl;
else{
    topt++;
    sum_2wheel+=50;
}
}
void push_car(){
if(topc==99)
    cout<<"Entry cannot be taken"<<endl;
else{
    topc++;
    sum_car+=100;
}
}
void push_rickshaw(){
if(topr==99)
    cout<<"Entry cannot be taken"<<endl;
else{
    topr++;
    sum_rickshaw+=70;
}
}
void pop_2wheel(){
if(topt==0)
    cout<<"\nThere are no 2-wheelers yet"<<endl;
else{
    topt--;
    sum_2wheel-=50;
    cout<<"\nExit updated"<<endl;
}
}
void pop_car(){
if(topc==0)
    cout<<"\nThere are no cars yet"<<endl;
else{
    topc--;
    sum_car-=100;
    cout<<"\nExit updated"<<endl;
}
}
void pop_rickshaw(){
if(topr==0)
    cout<<"\nThere are no rickshaws yet"<<endl;
else{
    topr--;
    sum_rickshaw-=70;
    cout<<"\nExit updated"<<endl;
}
}
void display(){
cout<<"No of 2 wheelers: "<<topt<<endl;
cout<<"No of 2 cars: "<<topc<<endl;
cout<<"No of 2 rickshaws: "<<topr<<endl;
cout<<"Total no of vehicles: "<<topt+topc+topr<<endl;
cout<<"Total collection: "<<sum_2wheel+sum_car+sum_rickshaw<<endl;
}

int main(){
while(1){
    int n,i;
    cout<<"Press 1 for 2-wheeler entry"<<endl;
    cout<<"Press 2 for car entry"<<endl;
    cout<<"Press 3 for rickhsaw entry"<<endl;
    cout<<"Press 4 for 2-wheeler exit"<<endl;
    cout<<"Press 5 for car exit"<<endl;
    cout<<"Press 6 for rickshaw exit"<<endl;
    cout<<"Press 7 to see the current status"<<endl;
    cout<<"Press 8 to exit"<<endl;
    cout<<"************************************************"<<endl;
    cin>>n;
    switch(n){
        case 1: push_2wheel();
                cout<<"\nEntry updated"<<endl;
                cout<<"************************************************"<<endl;
                 break;
        case 2: push_car();
                cout<<"\nEntry updated"<<endl;
                cout<<"************************************************"<<endl;
                break;
        case 3: push_rickshaw();
                cout<<"\nEntry updated"<<endl;
                cout<<"************************************************"<<endl;
                break;
        case 4: pop_2wheel();
        cout<<"************************************************"<<endl;
         break;
        case 5: pop_car();
        cout<<"************************************************"<<endl;
         break;
        case 6: pop_rickshaw();
        cout<<"************************************************"<<endl;
        break;
        case 7: display();
        cout<<"************************************************"<<endl;
        break;
        case 8: exit(1);
        default: cout<<"INVALID INPUT"<<endl;
        cout<<"************************************************"<<endl;
        cout<<"************************************************"<<endl;

    }
}
return 0;
}
