TARGET := iphone:clang:14.5:12.0
THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = kotaprefs

kotaprefs_FILES = $(wildcard *.m)
kotaprefs_FRAMEWORKS = UIKit
kotaprefs_PRIVATE_FRAMEWORKS = Preferences
kotaprefs_INSTALL_PATH = /Library/PreferenceBundles
kotaprefs_CFLAGS = -fobjc-arc
kotaprefs_LIBRARIES = colorpicker
# kotaprefs_EXTRA_FRAMEWORKS = Alderis

include $(THEOS_MAKE_PATH)/bundle.mk
