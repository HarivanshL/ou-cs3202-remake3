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

int main(int argc, char *argv[])
{
    vector<int> vec;
    int num =0;
    cout<< "Enter numbers to be inserted into the array. -10000 will end inputs"<<endl;
    while(cin>>num){
        if(num != -10000){
            vec.push_back(num);
        }
        else{
            break;
        }
    }

    int sumval = sum(vec);
    int productval = product(vec);
    cout<< "Sum: " << sumval <<endl;
    cout<< "Product: " << productval <<endl;

}