# Pacman - Phạm Lê Ngọc Sơn

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](./LICENSE)

An example of how to use the ECS part of the [EnTT Framework](https://github.com/skypjack/entt)

![Screenshot](https://i.imgur.com/J5RDcIz.png)

## Giới thiệu

Đây là dự án Pacman được phát triển bởi **Phạm Lê Ngọc Sơn**. Dự án sử dụng mô hình ECS (Entity Component System) với thư viện [EnTT](https://github.com/skypjack/entt) và SDL2 để xây dựng một trò chơi Pacman đơn giản, dễ mở rộng, phù hợp cho việc học tập và nghiên cứu về lập trình game hiện đại.

## Cấu trúc dự án

- `src/`         : Mã nguồn chính của game, chia thành các thư mục con:
  - `comp/`      : Các thành phần (component) của ECS như vị trí, hướng, trạng thái ma, v.v.
  - `core/`      : Logic cốt lõi của game (khởi tạo, vòng lặp game, quản lý màn chơi, ...).
  - `sys/`       : Các hệ thống (system) xử lý logic như di chuyển, va chạm, render, ...
  - `util/`      : Tiện ích hỗ trợ (hàm xử lý sprite, kiểm tra SDL, ...).
  - `main.cpp`   : Điểm khởi đầu chương trình.
- `animations/`  : Các file hoạt ảnh cho Pacman, ma, điểm, mê cung.
- `third_party/`: Thư viện bên ngoài (EnTT, ...).
- `sprites.json`: Cấu hình sprite và hoạt ảnh.
- `CMakeLists.txt`: File cấu hình build với CMake.
- `LICENSE`     : Giấy phép sử dụng mã nguồn mở MIT.
- `.gitignore`, `.travis.yml`, `appveyor.yml`: File cấu hình cho git và CI/CD.

## Yêu cầu hệ thống

- C++17 trở lên
- [SDL2](https://www.libsdl.org/) (cài đặt theo hướng dẫn bên dưới)
- CMake >= 3.8

## Hướng dẫn cài đặt SDL2

- **Windows**: `vcpkg install sdl2`
- **MacOS**: `brew install sdl2`
- **Ubuntu/Debian**: `sudo apt-get install libsdl2-dev`

## Hướng dẫn build và chạy game

```sh
# Clone dự án
https://github.com/your-username/pacman-son.git
cd pacman-son

# Tạo thư mục build và build
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .

# Chạy game
./pacman
```

## Đóng góp & Giấy phép

Dự án phát triển mở, chào đón mọi đóng góp. Vui lòng tạo pull request hoặc issue nếu bạn muốn đóng góp hoặc báo lỗi.

Phát hành theo giấy phép MIT. Bản quyền © 2024 Phạm Lê Ngọc Sơn.

## It's not exactly the same as the real thing

I read [The Pacman Dossier](http://tralvex.com/download/forum/The%20Pac-Man%20Dossier.pdf)
many times during development. If you notice a difference between this game and
the real thing, that wasn't an oversight. Perfectly recreating the real thing
would have made this project quite a bit more complicated. I think it's
complicated enough as it is!
