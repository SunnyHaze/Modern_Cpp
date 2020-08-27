
## 对比数学函数
$y=f(x)$
这是数学上二元函数的一种形式
在C++ 编程里 函数的一般形式是

```cpp
Type FuncName(para...);
//FuncName 是函数名 对应 f 这个形式
//para... 是函数参数 对应 x 相当于多元函数 不过在变成里面 可以没有参数  
//Type 是函数（理解上的）运算结果的类型 相当于 y 的类型 当然 在编程里面 可以不返回任何东西 不过需要用 void 占位

//一个 求和函数 求两个 int 的和
//定义该函数
int add(int a,int b){return a+b;}//用 return 指明返回值
//使用
int c=add(3,4);
//同样的
//int a=3,b=4,d;
//int c=add(a,b);
//d=add(a,b);
```

## 基础概念

### 返回值类型

函数调用后返回值的类型

函数除了 返回值类型为 `void`  的外 都需要 使用 return 语句得到返回值

### 参数列表

#### 不定长参数

这里只讲同类型不定长参数 不同类型不定长参数会复杂一些 这里目前不讲

### 实参和形参

#### 形参

就是函数定义/声明时的参数名

#### 实参

调用函数时实际的参数

### 声明和定义

```cpp
int add(int,int);//declaration
//可多次声明 但只能定义一次
//声明和定义时形参不需要相同
int add(int,int){}//defination
//简单看就是声明就是 返回类型 函数名(参数); 的组合 表现函数能被识别的所有信息
//定义就是在声明的基础上 把 ; 号改为 {} 然后再在该作用域里面写上实现代码
```

### 传值

#### pass by value

将数据 copy 一份 传给形参

不会影响原来的数据

#### pass by reference

包括 引用和指针

使用时会直接改变原来的数据

## swap 函数

### 一般的正确思想 错误代码

```cpp
void swap(int lh,int rh){//传值 值的改变不影响原来数据
    int temp=lh;
    lh=rh;
    rh=temp;
}
```

### 使用引用的代码 推荐

```cpp
void swap(int& lh,int& rh){
    int temp=lh;
    lh=rh;
    rh=temp;
}
```

### 使用指针的代码

```cpp
void swap(int* lh,int* rh){
    int temp=*lh;
    *lh=*rh;
    *rh=temp;
}
```

## [详细](http://c.biancheng.net/view/1377.html)

## return

### 一般使用

```cpp
int Max2Int(int lh,int rh){
    return lh>rh?lh:rh;//返回 一个 int 类型的值
}
```

看起来复杂一点的

```cpp
int sum(int* arr,int size){
    if(size==0|arr==0)return 0;
    return arr[0]+sum(++arr,--size);
}
```

### [尾置返回](https://blog.csdn.net/qq_37653144/article/details/79165780)

基本形式

`auto __funcName(_para...)->RetType;`

```cpp
auto sum(int *arr,int size)-> int;
//一般用于返回值类型比较复杂的 或者 需要参数类型才知道的
//现在就了解有这个东西就行了 暂时用不太上
```

[C++函数指针和函数类型](https://www.jianshu.com/p/6ecfd541ec04)

```cpp
//比如这个函数
int(*func(int))();
auto func()->int(*)(int);

int Duo(int v){return v*2;}
int(*RetDuo())(int){
    return Duo;
}
//下面函数功能一样 只是使用后置返回类型
auto RD()->int(*)(int){
    return Duo;
}
int main(){
    int a=3;
    int v=RetDuo()(3);//v 为 6
}
```

函数指针类型的简单书写

```cpp
//利用上文的函数
decltype(Duo) Duo_ptr;
auto DuoPtr=Duo;
//使用跟函数没有什么区别
```

上面这俩的类型稍有不同，这里不细讲 

## 重载

## 函数匹配

直接看 [点我](https://blog.csdn.net/qq_46264758/article/details/107969287)

