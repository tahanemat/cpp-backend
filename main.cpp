#include "lithium_http_backend.hh"
#include <iostream>

using namespace li;

int main() {
  http_api api;

  api.get("/health-check") = [&](http_request& request, http_response& response) {
    std::cout << "DEBUG | ROUTE: " << request.url_spec << " | ";
    response.write("<h1>Welcome!</h1>");
  };

  http_serve(api, 8000);
  return 0;
}
