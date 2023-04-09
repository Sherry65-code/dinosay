#!/bin/bash

# Check if GCC is installed
if command -v gcc >/dev/null 2>&1; then
  echo "GCC is already installed on your system."
  exit 0
fi

# Check which package manager is installed and install GCC
if command -v apt >/dev/null 2>&1; then
  sudo apt update
  sudo apt install gcc
elif command -v yum >/dev/null 2>&1; then
  sudo yum update
  sudo yum install gcc
elif command -v pacman >/dev/null 2>&1; then
  sudo pacman -S gcc
else
  echo "Unable to detect package manager. Please install GCC manually."
  exit 1
fi

echo "GCC has been successfully installed on your system."

