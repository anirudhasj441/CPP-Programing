#include<iostream>
#include<string>
using namespace std;
class Pattern2{
    public:
    void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
};

int main(){
    int n;
    Pattern2 obj = Pattern2();
    printf("enter no of rows:");
    scanf("%d",&n);
    obj.pattern(n);
    return 0;
}