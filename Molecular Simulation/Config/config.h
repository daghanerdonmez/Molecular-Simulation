//
//  config.h
//  Molecular Simulation
//
//  Created by Dağhan Erdönmez on 30.01.2025.
//

#ifndef config_h
#define config_h

#define PARTICLE_COUNT 10000
#define BROWNIAN_STD_DEV 0.003

#define RECEIVER_COUNT 1 // I only handle the 1 case right now
#define RECEIVER_RADIUS 0.2f
#define RECEIVER_X 0.5
#define RECEIVER_Y 0
#define RECEIVER_Z 0

// 0 for no boundary
// 1 for box boundary
#define APPLIED_BOUNDARY 0

#define BOX_BOUNDARY_Z 0.5f
#define BOX_BOUNDARY_Y 0.5f
#define BOX_BOUNDARY_X 0.5f

#endif /* config_h */
