//
//  dir.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef COMP_DIR_HPP
#define COMP_DIR_HPP

#include "util/dir.hpp"

// The direction that the entity wants to go
struct DesiredDir {
  Dir d = Dir::none;
};

// The direction that the entity is actually going in
struct ActualDir {
  Dir d = Dir::none;
};

#endif
