AUX_SOURCE_DIRECTORY(. APP_LIST)

FOREACH(app ${APP_LIST})
    GET_FILENAME_COMPONENT(output_name ./${app} NAME_WE)
    ADD_EXECUTABLE(${output_name} ${app})
    TARGET_LINK_LIBRARIES(${output_name} stereo700_cam)
ENDfOREACH()