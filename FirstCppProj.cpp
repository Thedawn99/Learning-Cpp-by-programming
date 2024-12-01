// FirstCppProj.cpp : 通过此文件初探cpp
// 核心知识点:了解cpp的程序的格式

//头文件引用 格式: #include<引用头文件类名> 作用: 调用引用类名里面的方法
//释义：引用了一个iostream类
#include <iostream> 

//调用命名空间 格式：using namespace 命名空间名称 作用：减少
using namespace std;

// 函数的主要格式 
/*
* 函数返回值 函数名 (参数列表)
* {
*   // 函数执行处
* }
*/


// 释义：函数名为main的函数 在函数执行处执行了输出hello world的代码
int main()
{
    // 如果不调用using namespace就得添加std才能输出
    std::cout << "Hello World!\n";
    // 调用using namespace就省略了std
    cout << "Hello World!\n";
}

