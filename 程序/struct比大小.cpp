#include <iostream>
#include <string>
struct node{
    std::string name;
    int age;
    bool operator> (const node obj){
        return age > obj.age;
    }
};



int main(){
    node p1,p2;
    std::cin >> p1.name >> p1.age;
    std::cin >> p2.name >> p2.age;
    std::cout << "年龄比较大的是：" << std::endl;
    if(p1 > p2){
        std::cout << p1.name;
    }
    else
    {
        std::cout << p2.name;
    }
    
}