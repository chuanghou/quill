#pragma once

#include "quill/Logger.h"

class Foo
{
public:
  Foo();

  void hello();

private:
  quill::Logger* _logger;
};

class FooGlobal
{
public:
  void hello();
};

/**
 * For functions best to pass to avoid look ups
 * or store it in a global variable alternatively
 */
void bar(quill::Logger* logger);

void bar();

void bar_global();