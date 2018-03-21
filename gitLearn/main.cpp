//
//  main.cpp
//  gitLearn
//
//  Created by fang on 2017/8/25.
//  Copyright © 2017年 fang. All rights reserved.
//

#include <iostream>
#include "test.hpp"

class CGitLearn
{
public:
    void DisPlay()
    {
        std::cout << "git Learn!\n"<< iCount++ <<"issue1 changed";
    }
    
private:
    static int iCount;
    int iNew;
};

int CGitLearn::iCount = 0;

int main(int argc, const char * argv[])
{
    int a = 0, b=1;
    TestMax(a, b);
    CGitLearn gitLearn;
    gitLearn.DisPlay();
    
    std::cout << "Hello, World!\n";
    return 0;
}
