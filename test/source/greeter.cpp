#include <doctest/doctest.h>
#include <haroo/haroo.h>
#include <haroo/version.h>

#include <string>

TEST_CASE("Greeter") {
  using namespace haroo;

  Greeter haroo("Tests");

  CHECK(haroo.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(haroo.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(haroo.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(haroo.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Greeter version") {
  static_assert(std::string_view(GREETER_VERSION) == std::string_view("1.0"));
  CHECK(std::string(GREETER_VERSION) == std::string("1.0"));
}
