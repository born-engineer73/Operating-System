// #include <stdio.h>
#include<iostream>
using namespace std;

class MyStruct {
    //void fun();
    char c;
    double i;
    char p;
    int k;
    int a;
    int g;
    
};
struct MyStruct1 {
    // short a;
    // char b;
    // int s;
    // double d;
    // int e;
    // float f;
    // int g;
    // float h;
    // int p;
    // char i;
    // int j;
    // int r;
    // short z;
};

int main() {
    // printf("Size of int: %zu bytes\n", sizeof(int));
    // printf("Size of char: %zu bytes\n", sizeof(char));
    // printf("Size of float: %zu bytes\n", sizeof(float));
    // printf("Size of double: %zu bytes\n", sizeof(double));
    // printf("Size of struct MyStruct: %zu bytes\n", sizeof(struct MyStruct));
    cout<<"Size of struct MyStruct:"<<sizeof(MyStruct)<<endl;
    cout<<"Size of struct MyStruct1:"<<sizeof(MyStruct1);

    return 0;
}
