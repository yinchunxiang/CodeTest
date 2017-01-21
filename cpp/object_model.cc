/****************************************************************************
 * 
 * Copyright (C) 2017 @com, Inc. All rights reserved.
 * 
 ****************************************************************************/



/** 
 * @file object_model.cc
 * @author yinchunxiang(@com)
 * @date 2017/01/21 16:24:42
 * @brief 
 * 
 **/ 

#include<iostream>
using namespace std;
class Base
{
    public:
        Base(int i): iBase(i) {
        }
        virtual ~Base(void) {
        }

        int getIBase() const {
            return iBase;
        }
        static int instanceCount() {
            return count;
        }
        virtual void print() const {
            cout << "iBase:" << iBase << " count:" << count << endl;
        }

    protected:

        int iBase;
        static int count;
};

int Base::count = 0;


int main(int argc, char *argv[])
{
    int a = 10;
    cout << "sizeof(int) => " << sizeof(a) << endl;

    int *p = nullptr;
    cout << "sizof(pointer) => " << sizeof(p) << endl;

    Base b(1000);
    cout << "sizeof(Base) => " << sizeof(b) << endl;
    return 0;
}






/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
