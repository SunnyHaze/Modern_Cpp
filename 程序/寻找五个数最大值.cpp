#include <iostream>
using namespace std;
int main(){
    int a[5];
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i];
    }
    int max_location = 0;
    for(int i = 0 ; i < 5; i++){
        if(a[max_location] < a[i])
            max_location = i;
    }
    cout << "第" << (max_location+1) << "个数是最大数，它的值为" << a[max_location] << endl; 
}