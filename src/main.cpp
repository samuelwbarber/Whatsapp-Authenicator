#include "crow_all.h"

int main() {
    // Create the Crow application
    crow::SimpleApp app;

    // Define a route for the homepage
    CROW_ROUTE(app, "/")([]() {
        return "Welcome to your first Crow website!";
    });

    // Define a route with a parameter
    CROW_ROUTE(app, "/hello/<string>")([](const std::string& name) {
        return "Hello, " + name + "!";
    });

    // Start the server on port 8080
    app.port(8080).multithreaded().run();

    return 0;
}
