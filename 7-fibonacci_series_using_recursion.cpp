#include <iostream>
using namespace std;

long fibonacci(int n){
    if(n<=0){
        cout << "bitch pls!";
        return 0;
    }
    else if(n > 2){
        return fibonacci(n- 2) + fibonacci(n - 1);
    }
    else{
        return 1;
    }
}

int main(){
    for(int n=0; n<=6; n++){
        int i = fibonacci(n);
        cout << "the fibonacci term for the term " << n << " is "<<i<< endl;
    }
    
}