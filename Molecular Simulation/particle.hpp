//
//  particle.hpp
//  Molecular Simulation
//
//  Created by Dağhan Erdönmez on 29.01.2025.
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include "Config/config.h"
#include "Boundaries/Box.hpp"
#include "Boundaries/Cylinder.hpp"

class Particle
{
private:
    glm::dvec3 position;
public:
    Particle(double x, double y, double z);
    void move(double dx, double dy, double dz);
    glm::dvec3 getPosition();
};

#endif /* particle_hpp */
