# Task4：CMake 基础学习

## 1. CMake 的作用

CMake 是一个跨平台的构建系统生成工具，本身并不是编译器。

在本任务的 Linux 环境中，基本构建流程为：

```text
CMakeLists.txt
      ↓
   cmake ..
      ↓
   Makefile
      ↓
     make
      ↓
     g++
      ↓
  可执行程序
```

CMake 根据 `CMakeLists.txt` 生成构建文件，`make` 再根据生成的 `Makefile` 调用编译器完成实际编译。

## 2. C++ 源程序

本任务编写了简单的 `main.cpp`：

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello CMake!" << std::endl;
    return 0;
}
```

首先使用 g++ 手动编译：

```bash
g++ main.cpp -o hello
./hello
```

程序输出：

```text
Hello CMake!
```

其中 `-o hello` 表示将生成的可执行程序命名为 `hello`。

## 3. CMakeLists.txt

本任务使用的 `CMakeLists.txt`：

```cmake
cmake_minimum_required(VERSION 3.10)

project(HelloCMake)

add_executable(hello main.cpp)

target_compile_features(hello PRIVATE cxx_std_11)
```

其中：

- `cmake_minimum_required`：指定最低 CMake 版本
- `project`：定义项目名称
- `add_executable`：指定源文件并生成可执行程序
- `target_compile_features`：指定目标所需的 C++ 特性

## 4. 使用 CMake 构建项目

采用单独的 `build` 目录进行构建：

```bash
mkdir build
cd build
cmake ..
make
./hello
```

`cmake ..` 中的 `..` 表示上一级目录，CMake 会读取上一级目录中的 `CMakeLists.txt`。

构建完成后运行程序，输出：

```text
Hello CMake!
```

## 5. build 目录

`build/` 中包含 CMake 和编译过程生成的文件，例如：

```text
CMakeCache.txt
CMakeFiles/
Makefile
hello
```

这些文件可以重新生成，因此本项目通过 `.gitignore` 忽略 `Task4/build/`，不将其提交到 Git 仓库。

## 总结

通过本任务完成了基本 `CMakeLists.txt` 的编写，并在 Ubuntu 下完成了 C++ 项目的配置、编译和运行，理解了 CMake、Make 和 g++ 在构建过程中的基本关系。
