//
//  can_move.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef SYS_CAN_MOVE_HPP
#define SYS_CAN_MOVE_HPP

#include "util/dir.hpp"
#include "core/maze.hpp"
#include <entt/entity/fwd.hpp>

// Checks whether an entity can move in some direction.
// Deals with ghosts entering and leaving the house

bool canMove(entt::registry &, const MazeState &, entt::entity, Pos, Dir);

#endif
