#include "foo.h"

#include "quill/LogMacros.h"
#include "quill/Frontend.h" // for get_logger
#include "quill/LogMacros.h"

#include <cassert>

 Foo::Foo()
 {
   // look up the logger
   _logger = quill::Frontend::get_logger("my_logger");

   // app creates the logger - check it was created
   // logger can be created anywhere it is just an example
   assert(_logger);
 }

void Foo::hello()
 {
   LOG_INFO(_logger, "Hello from foo");
 }


void bar(quill::Logger* logger)
 {
   LOG_INFO(logger, "Hello from bar");
 }

void bar()
 {
   // Looking up the logger before each log statement is expensive it is not recommended to
   // do this for each function
   auto logger = quill::Frontend::get_logger("my_logger");
   LOG_INFO(logger, "Hello again from bar");
 }

