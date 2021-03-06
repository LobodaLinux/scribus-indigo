include_directories(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/scribus
)

ADD_SUBDIRECTORY(artwork)

##################


#Install our 1.5.0 icons
file( GLOB SCRIBUS_ICONS_1_5_0_UNSORTED 1_5_0/*.jpg 1_5_0/*.png 1_5_0/*.xpm 1_5_0/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_UNSORTED} DESTINATION ${ICONDIR}/1_5_0/)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_0_10 1_5_0/10/*.jpg 1_5_0/10/*.png 1_5_0/10/*.xpm 1_5_0/10/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_10} DESTINATION ${ICONDIR}/1_5_0/10)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_0_16 1_5_0/16/*.jpg 1_5_0/16/*.png 1_5_0/16/*.xpm 1_5_0/16/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_16} DESTINATION ${ICONDIR}/1_5_0/16)

#Install our 22x22 icons
file( GLOB SCRIBUS_ICONS_1_5_0_22 1_5_0/22/*.jpg 1_5_0/22/*.png 1_5_0/22/*.xpm 1_5_0/22/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_22} DESTINATION ${ICONDIR}/1_5_0/22)

#Install our 32x32 icons
file( GLOB SCRIBUS_ICONS_1_5_0_32 1_5_0/32/*.jpg 1_5_0/32/*.png 1_5_0/32/*.xpm 1_5_0/32/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_32} DESTINATION ${ICONDIR}/1_5_0/32)

#Install our 64x64 icons
file( GLOB SCRIBUS_ICONS_1_5_0_64 1_5_0/64/*.jpg 1_5_0/64/*.png 1_5_0/64/*.xpm 1_5_0/64/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_0_64} DESTINATION ${ICONDIR}/1_5_0/64)

#Install our stylesheet icons
file( GLOB SCRIBUS_ICONS_1_5_0_STYLE 1_5_0/stylesheet/*.png )
install(FILES ${SCRIBUS_ICONS_1_5_0_STYLE} DESTINATION ${ICONDIR}/1_5_0/stylesheet)

#Install our XML
file( GLOB SCRIBUS_XML_1_5_0 1_5_0/*.xml )
install(FILES ${SCRIBUS_XML_1_5_0} DESTINATION ${ICONDIR})


##################


#Install our 1.5.1 icons
file( GLOB SCRIBUS_ICONS_1_5_1_UNSORTED 1_5_1/*.jpg 1_5_1/*.png 1_5_1/*.xpm 1_5_1/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_UNSORTED} DESTINATION ${ICONDIR}/1_5_1/)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_1_10 1_5_1/10/*.jpg 1_5_1/10/*.png 1_5_1/10/*.xpm 1_5_1/10/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_10} DESTINATION ${ICONDIR}/1_5_1/10)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_1_16 1_5_1/16/*.jpg 1_5_1/16/*.png 1_5_1/16/*.xpm 1_5_1/16/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_16} DESTINATION ${ICONDIR}/1_5_1/16)

#Install our 22x22 icons
file( GLOB SCRIBUS_ICONS_1_5_1_22 1_5_1/22/*.jpg 1_5_1/22/*.png 1_5_1/22/*.xpm 1_5_1/22/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_22} DESTINATION ${ICONDIR}/1_5_1/22)

#Install our 32x32 icons
file( GLOB SCRIBUS_ICONS_1_5_1_32 1_5_1/32/*.jpg 1_5_1/32/*.png 1_5_1/32/*.xpm 1_5_1/32/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_32} DESTINATION ${ICONDIR}/1_5_1/32)

#Install our 64x64 icons
file( GLOB SCRIBUS_ICONS_1_5_1_64 1_5_1/64/*.jpg 1_5_1/64/*.png 1_5_1/64/*.xpm 1_5_1/64/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_64} DESTINATION ${ICONDIR}/1_5_1/64)

#Install our stylesheet icons
file( GLOB SCRIBUS_ICONS_1_5_1_STYLE 1_5_1/stylesheet/*.png )
install(FILES ${SCRIBUS_ICONS_1_5_1_STYLE} DESTINATION ${ICONDIR}/1_5_1/stylesheet)

#Install our XML
file( GLOB SCRIBUS_XML_1_5_1 1_5_1/*.xml )
install(FILES ${SCRIBUS_XML_1_5_1} DESTINATION ${ICONDIR})


##################


#Install our 1.5.1_light icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_UNSORTED 1_5_1_light/*.jpg 1_5_1_light/*.png 1_5_1_light/*.xpm 1_5_1_light/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_UNSORTED} DESTINATION ${ICONDIR}/1_5_1_light/)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_10 1_5_1_light/10/*.jpg 1_5_1_light/10/*.png 1_5_1_light/10/*.xpm 1_5_1_light/10/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_10} DESTINATION ${ICONDIR}/1_5_1_light/10)

#Install our 16x16 icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_16 1_5_1_light/16/*.jpg 1_5_1_light/16/*.png 1_5_1_light/16/*.xpm 1_5_1_light/16/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_16} DESTINATION ${ICONDIR}/1_5_1_light/16)

#Install our 22x22 icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_22 1_5_1_light/22/*.jpg 1_5_1_light/22/*.png 1_5_1_light/22/*.xpm 1_5_1_light/22/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_22} DESTINATION ${ICONDIR}/1_5_1_light/22)

#Install our 32x32 icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_32 1_5_1_light/32/*.jpg 1_5_1_light/32/*.png 1_5_1_light/32/*.xpm 1_5_1_light/32/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_32} DESTINATION ${ICONDIR}/1_5_1_light/32)

#Install our 64x64 icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_64 1_5_1_light/64/*.jpg 1_5_1_light/64/*.png 1_5_1_light/64/*.xpm 1_5_1_light/64/*.svg)
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_64} DESTINATION ${ICONDIR}/1_5_1_light/64)

#Install our stylesheet icons
file( GLOB SCRIBUS_ICONS_1_5_1_LIGHT_STYLE 1_5_1_light/stylesheet/*.png )
install(FILES ${SCRIBUS_ICONS_1_5_1_LIGHT_STYLE} DESTINATION ${ICONDIR}/1_5_1_light/stylesheet)

#Install our XML
file( GLOB SCRIBUS_XML_1_5_1_LIGHT 1_5_1_light/*.xml )
install(FILES ${SCRIBUS_XML_1_5_1_LIGHT} DESTINATION ${ICONDIR})


##################
