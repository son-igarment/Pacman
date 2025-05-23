﻿//
//  dir_to_pos.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef UTIL_DIR_TO_POS_HPP
#define UTIL_DIR_TO_POS_HPP

#include "dir.hpp"
#include "pos.hpp"

constexpr Pos toPos(const Dir dir, const int length = 1) {
  switch (dir) {
    case Dir::up:    return {0, -1 * length};
    case Dir::right: return {1 * length, 0};
    case Dir::down:  return {0, 1 * length};
    case Dir::left:  return {-1 * length, 0};
    default:         return {0, 0};
  }
}

#endif
