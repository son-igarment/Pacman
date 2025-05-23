//
//  maze.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef CORE_MAZE_HPP
#define CORE_MAZE_HPP

#include <cstdint>
#include "util/grid.hpp"

enum class Tile : std::uint8_t {
  empty,
  dot,
  energizer,
  wall,
  door
};

using MazeState = Grid<Tile>;

MazeState makeMazeState();

#endif
