//
//  main.cpp
//  gitLearn
//
//  Created by fang on 2017/8/25.
//  Copyright © 2017年 fang. All rights reserved.
//

#include <iostream>

class CGitLearn
{
public:
    void DisPlay()
    {
        std::cout << "git Learn!\n";
    }
    
};

int main(int argc, const char * argv[])
{
    CGitLearn gitLearn;
    gitLearn.DisPlay();
    
    std::cout << "Hello, World!\n";
    return 0;
}
