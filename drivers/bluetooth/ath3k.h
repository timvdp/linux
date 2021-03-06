/*
 * Copyright (c) 2008-2009 Atheros Communications Inc.
 * Copyright (c) 2014,2015 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
*/

#include <linux/usb.h>

struct ath3k_version {
	__le32	rom_version;
	__le32	build_version;
	__le32	ram_version;
	__u8	ref_clock;
	__u8	reserved[7];
} __packed;

int get_rome_version(struct usb_device *udev, struct ath3k_version *version);
int rome_download(struct usb_device *udev, struct ath3k_version *version);

extern struct rw_semaphore btusb_pm_sem;
