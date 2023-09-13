#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> vec){
    int total = 0;
    for(int i =0; i <vec.size();++i){
        total+= vec[i];
    }
    return total;
}


int product(vector<int> vec){
    int total =1;
    for(int i =0; i <vec.size();++i){
        total = vec[i] * total;
    }
    return total;
}
