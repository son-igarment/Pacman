//
//  home_position.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef COMP_HOME_POSITION_HPP
#define COMP_HOME_POSITION_HPP

#include "util/pos.hpp"

struct HomePosition {
  Pos home;    // position in the ghost house
  Pos scatter; // unreachable point in a corner
};

#endif
