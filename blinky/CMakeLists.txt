cmake_minimum_required(VERSION 3.20.0)

# Find the Zephyr SDK workspace
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

# Set the project name
project(blinky)

# Header files
target_include_directories(app PRIVATE include/)

# Source files
target_sources(app PRIVATE src/trinket.c)
target_sources(app PRIVATE src/main.c)


