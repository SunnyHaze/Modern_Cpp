#include <iostream>
void Swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    std::cin >> x>>y;
    Swap(x,y);
    std::cout << "X:" << x << std::endl
            << "Y:" << y << std::endl;
    return 0;
}