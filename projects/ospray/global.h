//!
//! This file defines some global variables and all callback functions
//!
#pragma once
#ifndef OSPRAY_GLOBAL_H
#define OSPRAY_GLOBAL_H

#include "common.h"
#include "camera.h"
#include "framebuffer.h"

// camera
extern Camera camera;

// framebuffers
extern Framebuffer framebuffer;

// renderer
extern OSPModel world;
extern OSPRenderer renderer;

// transfer function
extern OSPTransferFunction transferFcn;

// histogram
extern std::vector<float> hist;
extern const int hist_xdim, hist_ydim;

// cleaning
extern std::vector<std::function<void()>> cleanlist;
void Clean();

#endif //OSPRAY_GLOBAL_H