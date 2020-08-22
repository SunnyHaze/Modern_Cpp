#include <iostream>
using namespace std;
int main()
{
    int start, end, difference;
    cout << "首项：";
    cin >> start;
    cout << "末项：";
    cin >> end;
    cout << "公差：";
    cin >> difference;
    //第一种解法
    int sum = 0;
    for (int i = start; i < end; i += difference)
    {
        sum += i;
    }
    cout << "等差数列求和为：" < < < sum << endl;
    return 0;
}