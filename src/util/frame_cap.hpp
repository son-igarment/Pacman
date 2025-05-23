﻿//
//  frame_cap.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef UTIL_FRAME_CAP_HPP
#define UTIL_FRAME_CAP_HPP

#include <chrono>
#include <thread>

class FrameCap {
public:
  using Clock = std::chrono::steady_clock;

  explicit FrameCap(const int fps)
    : interval{Clock::duration{Clock::duration::period::den / fps}},
      start{Clock::now()} {}

  ~FrameCap() {
    std::this_thread::sleep_until(start + interval);
  }

private:
  const Clock::duration interval;
  const Clock::time_point start;
};


#endif
