//
//  sprite.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef COMP_SPRITE_HPP
#define COMP_SPRITE_HPP

#include "util/sprites.hpp"

// Sprite components just store a sprite ID.
// Rendering systems make assumptions about the animation and the
// layout of frames

struct PlayerSprite {
  animera::SpriteID id;
};

struct GhostSprite {
  animera::SpriteID id;
};

#endif
