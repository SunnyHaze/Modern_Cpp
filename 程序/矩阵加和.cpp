#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "请输入矩阵a" << endl;
    int a[n][n],b[n][n],c[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    cout << "请输入矩阵b" << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "得到的加和矩阵为: " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << c[i][j] << " ";
        }
        cout <<endl;
    }
}