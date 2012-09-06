#Path to copy plugin on build
win32:DLLDESTDIR       = ../vacuum-im/plugins
unix:DESTDIR           = ../vacuum-im/plugins

#Path from vacumm to plugin resources
DEFINES               += RESOURCES_DIR='\\\"../vacuum-plugins.$${TARGET}/resources\\\"'
