file( GLOB EOLYMP_SOURCES *.cpp )
foreach( src ${EOLYMP_SOURCES} )
    # I used a simple string replace, to cut off .cpp.
    get_filename_component(testname ${src} NAME)
    add_executable( ${testname} ${src} )
endforeach( src ${EOLYMP_SOURCES} )