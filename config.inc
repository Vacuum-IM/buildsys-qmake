#Path to Vacuum SDK
isEmpty(VACUUM_SDK_PATH) {
  win32:VACUUM_SDK_PATH  = c:/vacuum/sdk
  unix:VACUUM_SDK_PATH   = /usr/local/include/vacuum
  macx:VACUUM_SDK_PATH   = /Applications/vacuum.app/Contents/Resources/include
  haiku:VACUUM_SDK_PATH  = /boot/apps/vacuum/sdk
}

include($$VACUUM_SDK_PATH/make/config.inc)
