//
//  house.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef SYS_HOUSE_HPP
#define SYS_HOUSE_HPP

#include <entt/entity/fwd.hpp>

// These systems deal with ghosts entering and leaving the house

void enterHouse(entt::registry &);
void leaveHouse(entt::registry &);

#endif
