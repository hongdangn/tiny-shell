#pragma once

#include "../core/args.h"
#include "../os/operations.h"
#include "res.h"

/*! @brief Run the executable foreground */
enum run_result run_launch_executable(const struct args args);