//
//  main.cpp
//  Molecular Simulation
//
//  Created by Dağhan Erdönmez on 29.01.2025.
//

#define GL_SILENCE_DEPRECATION

#include <iostream>
#include "singleExecution.hpp"
#include "networkExecution.hpp"
#include <vector>
#include "Config/config.h"
#include "Config/oldconfig.h"
#include <time.h>

int main() {
    if (MODE == 0) { // single simulation
        clock_t tStart = clock();
        if (GRAPHICS_ON) {
            singleRunWithGraphics();
        } else {
            singleRunWithoutGraphics();
        }
        printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
        return 0;
    }
    if (MODE == 1) { // simulation network
        clock_t tStart = clock();
        if (GRAPHICS_ON) {
            networkRunWithGraphics();
        } else {
            networkRunWithoutGraphics();
        }
        printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
        return 0;
    }
}




