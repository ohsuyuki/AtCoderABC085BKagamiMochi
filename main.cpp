//
//  main.cpp
//  AtCoderABC085BKagamiMochi
//
//  Created by osu on 2019/01/03.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    int N(0);
    std::cin >> N;

    int d[N];
    for(int i=0; i<N; i++) {
        std::cin >> d[i];
    }

    std::sort(d, d+N, std::greater<int>());

    int count = 0;
    int last = 101;
    for(int i=0; i<N; i++) {
        if(last > d[i]) {
            count++;
            last = d[i];
        }
    }

    std::cout << count;

    return 0;
}
