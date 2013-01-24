SET(grapheine_lib_src 
    graphpaper.cpp
    graphtypes/cartesian.cpp
    )

ADD_LIBRARY(grapheine SHARED ${grapheine_lib_src})
