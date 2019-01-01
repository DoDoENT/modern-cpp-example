cmake_minimum_required( VERSION 3.10 )

project( ModernCPPDesignPatterns )

set( old_way_prefix ${CMAKE_CURRENT_LIST_DIR}/old )

set( old_sources
    ${old_way_prefix}/Shape.cpp
    ${old_way_prefix}/Shape.hpp
    ${old_way_prefix}/Rectangle.cpp
    ${old_way_prefix}/Rectangle.hpp
    ${old_way_prefix}/Square.cpp
    ${old_way_prefix}/Square.hpp
    ${old_way_prefix}/Circle.cpp
    ${old_way_prefix}/Circle.hpp
    ${old_way_prefix}/RandomShapeFactory.cpp
    ${old_way_prefix}/RandomShapeFactory.hpp
    ${old_way_prefix}/main.cpp
)

set( utils_prefix ${CMAKE_CURRENT_LIST_DIR}/util )

set( utils_sources 
    ${utils_prefix}/Random.cpp
    ${utils_prefix}/Random.hpp
)

set( CMAKE_CXX_STANDARD 17 )

add_executable( OldWay ${old_sources} ${utils_sources} )
target_include_directories( OldWay PRIVATE ${utils_prefix} ) 

set( new_way_prefix ${CMAKE_CURRENT_LIST_DIR}/new )

set( new_sources
    ${new_way_prefix}/Rectangle.cpp
    ${new_way_prefix}/Rectangle.hpp
    ${new_way_prefix}/Square.cpp
    ${new_way_prefix}/Square.hpp
    ${new_way_prefix}/Circle.cpp
    ${new_way_prefix}/Circle.hpp
    ${new_way_prefix}/RandomShapeGenerator.cpp
    ${new_way_prefix}/RandomShapeGenerator.hpp
    ${new_way_prefix}/main.cpp
)

add_executable( NewWay ${new_sources} ${utils_sources} )
target_include_directories( NewWay PRIVATE ${utils_prefix} ) 
