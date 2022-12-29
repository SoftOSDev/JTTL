#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int head,foot;
int tmp;
int chicken=0,rabbit=0;
int in;
void taxin(){
    tmp=foot-(2*head);
    rabbit=tmp/2;
    chicken=head-rabbit;
}
void qiongju(){
    srand(time(0));
    if(head==foot/2){
        chicken=head; 
        rabbit=0;
    }
    else if(head==foot/4){
        chicken=0;
        rabbit=head;
    }
    else{
        while(true){
            chicken=rand() % 1000;
            rabbit=rand() % 1000;
            if((chicken*2+rabbit*4==foot)&&(chicken+rabbit==head)){
                break;
            }
        }
    }
}
int main(){
    cout<<"Head's number + space + Foot's number:";
    cin>>head>>foot;
    cout<<"1.Greedy Algorithm 2.Exhaustive Algorithm:";
    cin>>in;
    if(in==1){
        taxin();
    }
    if(in==2){
        qiongju();
    }
    cout<<"\nChicken:"<<chicken<<"\n";
    cout<<"Rabbit:"<<rabbit<<'\n';
    system("pause");
}