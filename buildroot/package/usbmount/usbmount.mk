################################################################################
#
# usbmount
#
################################################################################

USBMOUNT_VERSION = 0.0.22
USBMOUNT_SOURCE = usbmount_$(USBMOUNT_VERSION).tar.gz
USBMOUNT_SITE = http://snapshot.debian.org/archive/debian/20141023T043132Z/pool/main/u/usbmount
USBMOUNT_DEPENDENCIES = udev
USBMOUNT_LICENSE = BSD-2-Clause
USBMOUNT_LICENSE_FILES = debian/copyright

define USBMOUNT_INSTALL_TARGET_CMDS
	$(INSTALL) -m 0755 -D $(@D)/usbmount $(TARGET_DIR)/usr/share/usbmount/usbmount

	$(INSTALL) -m 0755 -D $(@D)/00_create_model_symlink \
		$(TARGET_DIR)/etc/usbmount/mount.d/00_create_model_symlink
	$(INSTALL) -m 0755 -D $(@D)/00_remove_model_symlink \
		$(TARGET_DIR)/etc/usbmount/umount.d/00_remove_model_symlink

	$(INSTALL) -m 0644 -D $(@D)/usbmount.rules $(TARGET_DIR)/lib/udev/rules.d/usbmount.rules
	$(INSTALL) -m 0644 -D $(@D)/usbmount.conf $(TARGET_DIR)/etc/usbmount/usbmount.conf

	for type in storage udisk sdcard; do \
		mkdir -p $(addprefix $(TARGET_DIR)/media/$${type},1 2 3); \
		mkdir -p $(TARGET_DIR)/mnt/$$type; \
		rm -rf $(TARGET_DIR)/media/$${type}0; \
		ln -sf /mnt/$$type $(TARGET_DIR)/media/$${type}0; \
	done
endef

ifeq ($(BR2_PACKAGE_USBMOUNT_SYNC_MOUNT),)
define USBMOUNT_DISABLE_SYNC_MOUNT
	$(SED) 's/^\(MOUNTOPTIONS="\)\<sync,*\(.*"\)/\1\2 #"sync,\2/' \
		$(TARGET_DIR)/etc/usbmount/usbmount.conf
endef
USBMOUNT_POST_INSTALL_TARGET_HOOKS += USBMOUNT_DISABLE_SYNC_MOUNT
endif

$(eval $(generic-package))
