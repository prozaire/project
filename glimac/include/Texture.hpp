#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <glm.hpp>
#include <iostream>

using namespace std;

struct Texture {
  unsigned int id;
  string type;
  string path;
};
