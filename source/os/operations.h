#pragma once

#include <stdbool.h>

#include "type.h"

/*! @brief Fetch current working directory and copy them into `buffer` */
void get_cwd(unsigned int buffer_size, os_char *buffer);

/**
 * @brief Attempt to change current working directory
 * @return Result of the operation
 */
bool change_cwd(const os_char *new_dir);

/*! @brief Clear the console */
void clear_screen();

/*! @brief Run the executable foreground */
bool fore(const os_char *command_line);