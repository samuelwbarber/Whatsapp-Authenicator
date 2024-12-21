cmake_minimum_required(VERSION 3.10)
project(SimpleCrowWebsite)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(crow_app src/main.cpp)

# Add Crow header-only library
include_directories(/Crow)

# Link Boost if needed (replace "Boost::Boost" with specific modules if necessary)
find_package(Boost REQUIRED)
target_include_directories(crow_app PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(crow_app PRIVATE Boost::Boost)
