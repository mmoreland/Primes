#include <iostream>
#include <cmath>


using namespace std;

bool otherPrime(long int n){
    if (n <= 1)
          return false;
    
      // Check from 2 to n-1
    for (int i = 2; i < n; i++){
          if (n % i == 0)
              return false;
    }
      return true;
}

int main(){
    long int twos[60];
    
    for(int i = 0; i < 60; i++){
        twos[i] = pow(2, i) - 1;
        }

    for(int j = 0; j < 60; j++){
        bool check = otherPrime(twos[j]);
        if(check){
            cout << twos[j]  << " is PRIME "<< endl;
        }
    }
    
}
