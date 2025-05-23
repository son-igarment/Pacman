//
//  pursue_target.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef SYS_PURSUE_TARGET_HPP
#define SYS_PURSUE_TARGET_HPP

#include "core/maze.hpp"
#include <entt/entity/fwd.hpp>

// This system reads the target position from the Target component and pursues
// it by setting the DesiredDir component. Pacman doesn't use A*. Ghosts will
// turn in the direction that brings them closer to the player

void pursueTarget(entt::registry &, const MazeState &);

#endif
