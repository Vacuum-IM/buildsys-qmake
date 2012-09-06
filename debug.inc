!macx:!isEmpty(DEBUG_VACUUM_PATH) {
  VACUUM_SDK_PATH        = $$DEBUG_VACUUM_PATH/src
  LIBS                  += -L$$DEBUG_VACUUM_PATH/src/libs

  win32:DLLDESTDIR       = $$DEBUG_VACUUM_PATH/plugins
  unix:DESTDIR           = $$DEBUG_VACUUM_PATH/plugins

  DEFINES               += DEBUG_RESOURCES_DIR='\\\"$${_PRO_FILE_PWD_}/resources\\\"'
}
