SET(grapheine_client_src main.cpp)

ADD_EXECUTABLE(main ${grapheine_client_src})

TARGET_LINK_LIBRARIES(main grapheine)

#rename to the final outut name
SET_TARGET_PROPERTIES(main
                      PROPERTIES OUTPUT_NAME grapheine)
