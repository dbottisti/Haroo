#include <haroo/haroo.h>
#include <haroo/version.h>

#include <catch2/catch_test_macros.hpp>
#include <string>

TEST_CASE("Haroo") {
  using namespace haroo;

  Haroo haroo("Tests");

  CHECK(haroo.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(haroo.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(haroo.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(haroo.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Haroo version") {
  static_assert(std::string_view(HAROO_VERSION) == std::string_view("0.1"));
  CHECK(std::string(HAROO_VERSION) == std::string("0.1"));
}
