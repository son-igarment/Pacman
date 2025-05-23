//
//  house.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef COMP_HOUSE_HPP
#define COMP_HOUSE_HPP

// These tag components are sort of like tickets. Ghosts are only allowed
// to go through the door if they have the EnterHouse or LeaveHouse tags.
// There are dedicated systems that deal with entering and leaving the
// ghost house.

struct EnterHouse {};
struct LeaveHouse {};

#endif
