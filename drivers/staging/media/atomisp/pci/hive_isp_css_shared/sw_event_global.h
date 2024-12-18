/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __SW_EVENT_GLOBAL_H_INCLUDED__
#define __SW_EVENT_GLOBAL_H_INCLUDED__

#define MAX_NR_OF_PAYLOADS_PER_SW_EVENT 4

enum ia_css_psys_sw_event {
	IA_CSS_PSYS_SW_EVENT_BUFFER_ENQUEUED, /* from host to SP */
	IA_CSS_PSYS_SW_EVENT_BUFFER_DEQUEUED, /* from SP to host */
	IA_CSS_PSYS_SW_EVENT_EVENT_DEQUEUED, /* from SP to host, one way only */
	IA_CSS_PSYS_SW_EVENT_START_STREAM,
	IA_CSS_PSYS_SW_EVENT_STOP_STREAM,
	IA_CSS_PSYS_SW_EVENT_MIPI_BUFFERS_READY,
	IA_CSS_PSYS_SW_EVENT_UNLOCK_RAW_BUFFER,
	IA_CSS_PSYS_SW_EVENT_STAGE_ENABLE_DISABLE /* for extension state change enable/disable */
};

enum ia_css_isys_sw_event {
	IA_CSS_ISYS_SW_EVENT_EVENT_DEQUEUED
};

#endif /* __SW_EVENT_GLOBAL_H_INCLUDED__ */
