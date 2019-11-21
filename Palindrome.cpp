#include<iostream>
using namespace std;
class Palindrome{
    public:
    bool isPalindrome(int num){
        int n = num;
        int rev = 0;
        while(n!=0){
            int a = n%10;
            rev = rev*10+a;
            n = (int)n/10;
        }
        if(rev==num){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Palindrome obj = Palindrome();
    int n;
    cin>>n;
    if(obj.isPalindrome(n)){
        cout<<n<<" is palindrome";
    }
    else{
        cout<<n<<" is not palindrome";
    }
    return 0;
}