################################################################################
#
# irqbalance
#
################################################################################

IRQBALANCE_VERSION = 1.9.3
IRQBALANCE_SITE = $(call github,irqbalance,irqbalance,v$(IRQBALANCE_VERSION))
IRQBALANCE_LICENSE = GPL-2.0
IRQBALANCE_LICENSE_FILES = COPYING
IRQBALANCE_SELINUX_MODULES = irqbalance
IRQBALANCE_DEPENDENCIES = host-pkgconf libglib2
# Autoreconf needed because package is distributed without a configure script
IRQBALANCE_AUTORECONF = YES

ifeq ($(BR2_PACKAGE_LIBCAP_NG),y)
IRQBALANCE_DEPENDENCIES += libcap-ng
IRQBALANCE_CONF_OPTS += --with-libcap-ng
else
IRQBALANCE_CONF_OPTS += --without-libcap-ng
endif

ifeq ($(BR2_PACKAGE_NCURSES_WCHAR),y)
IRQBALANCE_DEPENDENCIES += ncurses
IRQBALANCE_CONF_OPTS += --with-irqbalance-ui
else
IRQBALANCE_CONF_OPTS += --without-irqbalance-ui
endif

ifeq ($(BR2_PACKAGE_NUMACTL),y)
IRQBALANCE_DEPENDENCIES += numactl
IRQBALANCE_CONF_OPTS += --enable-numa
else
IRQBALANCE_CONF_OPTS += --disable-numa
endif

ifeq ($(BR2_PACKAGE_SYSTEMD),y)
IRQBALANCE_DEPENDENCIES += systemd
IRQBALANCE_CONF_OPTS += --with-systemd
else
IRQBALANCE_CONF_OPTS += --without-systemd
endif

ifeq ($(BR2_PACKAGE_IRQBALANCE_STATIC),y)
IRQBALANCE_CONF_ENV += CFLAGS="$(TARGET_CFLAGS) -static" \
	LDFLAGS="$(TARGET_LDFLAGS) -static"
endif

ifeq ($(BR2_PACKAGE_IRQBALANCE_FORCE_CORE),y)
define IRQBALANCE_INSTALL_FORCE_CORE
	$(INSTALL) -D -m 755 package/irqbalance/force_core.sh \
		$(TARGET_DIR)/etc/irqbalance.d/force_core.sh
endef
IRQBALANCE_POST_INSTALL_TARGET_HOOKS += IRQBALANCE_INSTALL_FORCE_CORE
endif

define IRQBALANCE_INSTALL_INIT_SYSV
	$(INSTALL) -D -m 755 package/irqbalance/S13irqbalance \
		$(TARGET_DIR)/etc/init.d/S13irqbalance
endef

define IRQBALANCE_INSTALL_INIT_SYSTEMD
	$(INSTALL) -D -m 644 package/irqbalance/irqbalance.service \
		$(TARGET_DIR)/usr/lib/systemd/system/irqbalance.service
endef

$(eval $(autotools-package))
