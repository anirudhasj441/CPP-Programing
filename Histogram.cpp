#include<iostream>
using namespace std;
class Histogram{
    public:
        int p,q,r;
        Histogram(int p,int q,int r){
            this->p = p;
            this->q = q;
            this->r = r;
        }

        void histogram(){
            for(int i=0;i<p;i++){
                cout<<"#";                
            }
            cout<<endl;
            for(int i=0;i<q;i++){
                cout<<"#";
            }
            cout<<endl;
            for(int i=0;i<r;i++){
                cout<<"#";
            }
            cout<<endl;
        }
};

int main(){
    int x,y,z;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<<"z = ";
    cin>>z;
    Histogram obj = Histogram(x,y,z);
    obj.histogram();
}