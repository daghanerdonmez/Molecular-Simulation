//
//  simulationNetwork.cpp
//  Molecular Simulation
//
//  Created by Dağhan Erdönmez on 3.02.2025.
//

#include "simulationNetwork.hpp"

SimulationNetwork::SimulationNetwork()
{
    simulations.emplace_back();
}

void SimulationNetwork::iterateNetwork(int iterationCount, int currentFrame)
{
    for (int i = 0; i < iterationCount; ++i) {
        for(int j = 0; j < simulations.size(); ++j) {
            if (DEBUG_CHECKPOINT_PRINTS) {
                printf("a\n");
            }
            simulations[j].iterateSimulation(1, currentFrame);
        }
    }
}

Simulation* SimulationNetwork::getFirstSimulation()
{
    return &simulations[0];
}



