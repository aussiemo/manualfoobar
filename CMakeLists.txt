cmake_minimum_required(VERSION 3.2)

project(manualfoobar VERSION 0.1.0 LANGUAGES CXX)
include(GNUInstallDirs)

SET(VERSION_MAJOR "0")
SET(VERSION_MINOR "1")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")
ADD_DEFINITIONS(-DVERSION="${VERSION}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

add_executable(manualfoobar
	src/manualfoobar.cpp
	)
target_compile_features(manualfoobar PUBLIC cxx_std_11)

find_package(Manualfoo 0.1.0 REQUIRED)
find_package(Manualbar 0.1.0 REQUIRED)
target_link_libraries(manualfoobar 
	Manualfoo::libmanualfoo 
	Manualbar::libmanualbar
	)

install(TARGETS
          manualfoobar
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)

