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

/**
 * @brief Set environment variable of the shell process
 * @param `val` may be `NULL`
 */
bool set_shell_env(const os_char *name, const os_char *val);

/**
 * @brief Unset environment variable of the shell process
 */
bool unset_shell_env(const os_char *name);

/*! @brief Get value of an an environment variable */
bool get_shell_env(const os_char *var, unsigned int buffer_size, os_char *buffer);

/*! @brief Get all current environment variable */
os_char *get_all_shell_env_display();