#include <iostream>

#include "foo.h"

#include "quill/Backend.h"
#include "quill/Frontend.h"
#include "quill/LogMacros.h"
#include "quill/sinks/ConsoleSink.h"

int main()
{
  // start logging thread
  quill::BackendOptions backend_options;
  quill::Backend::start(backend_options);

  // create a logger here or elsewhere
  auto console_sink = quill::Frontend::create_or_get_sink<quill::ConsoleSink>("sink_id_1");
  quill::Logger* logger = quill::Frontend::create_or_get_logger("my_logger", std::move(console_sink));

  LOG_WARNING(logger, "Hello from main");

  Foo foo;
  foo.hello();

  bar(logger);
  bar();
}