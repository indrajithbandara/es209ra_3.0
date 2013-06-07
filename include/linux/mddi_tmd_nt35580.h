#ifndef __ARCH_ARM_MACH_MSM_MDDI_TMD_NT35580_H
#define __ARCH_ARM_MACH_MSM_MDDI_TMD_NT35580_H

#define MDDI_TMD_WVGA_NAME "mddi_tmd_wvga"

#include "../../drivers/video/msm/msm_fb_panel.h"

struct tmd_wvga_panel_data {
	void (*power_on)(void);
	void (*power_off)(void);
	void (*window_adjust)(u16 x1, u16 x2, u16 y1, u16 y2);
	void (*exit_deep_standby) (void);
	struct msm_fb_panel_data *panel_data;
};

struct tmd_wvga_panel_ext {
	void (*power_on) (void);
	void (*power_off) (void);
	void (*window_adjust) (u16 x1, u16 x2, u16 y1, u16 y2);
	void (*exit_deep_standby) (void);
	int use_dma_edge_pixels_fix;
	void (*backlight_ctrl) (bool);
	struct panel_data_ext *panel_ext;
};

#endif

/*Lcd_device_add*/
void nt35580_lcd_device_add(void);
/*Lcd_on*/
void mddi_nt35580_lcd_display_on(void);
/*Lcd_on_state*/
