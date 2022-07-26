﻿#include <iostream>
using namespace std;
class Base {
   public:
    virtual void test() { cout << "Base class..."; }
};

class Child : public Base {
   public:
    void test() final { cout << "Child class..."; }
};

class GrandChild : public Child {
   public:
    // 语法错误, 不允许重写
    // void test() { cout << "GrandChild class..."; }
};

class Baseclass {
   public:
    virtual void test() { cout << "Base class..."; }
};

class Childclass final : public Baseclass {
   public:
    void test() { cout << "Child class..."; }
};

// error, 语法错误
// class GrandChild : public Childclass {
//    public:
// };
int main() {}