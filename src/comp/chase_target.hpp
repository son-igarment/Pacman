﻿//
//  chase_target.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright © 2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef COMP_CHASE_TARGET_HPP
#define COMP_CHASE_TARGET_HPP

#include <entt/entity/fwd.hpp>

// These components define the chase targeting behavior for each ghost

// This is where the beauty of ECS comes in
// Blinky doesn't have to chase the player!
// The BlinkyChaseTarget component stores the ID of an entity that
// has a Position component. That's it! Blinky can chase anything
// that has a Position. We could quite easily make blinky chase inky

struct BlinkyChaseTarget {
  entt::entity player;
};

struct PinkyChaseTarget {
  entt::entity player;
};

struct InkyChaseTarget {
  entt::entity player;
  entt::entity blinky;
};

struct ClydeChaseTarget {
  entt::entity player;
};

#endif
