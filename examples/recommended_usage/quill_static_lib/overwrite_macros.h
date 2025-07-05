#pragma once

/**
 * This file is optional and demonstrates how users can replace the library macros with their own.
 *
 * It becomes useful when opting for a single Logger object over several logger objects.
 *
 * However, using multiple logger objects provides greater flexibility in applications with multiple
 * components. With multiple loggers, it's easier to control the log level of each component
 * individually, whereas using a single logger, as shown in this example, may present limitations.
 */

#include "quill/LogMacros.h"
#include "quill/Logger.h"

// The logger we defined in quill_wrapper.cpp
extern quill::Logger* global_logger_a;

// etc ..
