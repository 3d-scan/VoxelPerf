#pragma once

#include "PerfFramework.h"
#include "Voxels.h"

#include <GL/glew.h>
#include <glm/glm.hpp>

// Runs a performance test that relies on display lists
PerfRecord RunDisplayListsTest(VoxelSet& model, glm::ivec3 gridSize, glm::vec3 voxelSpacing);
