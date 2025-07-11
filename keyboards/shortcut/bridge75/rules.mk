include keyboards/shortcut/wireless/wireless.mk

# Activate or deactivate your desired modifications here with yes/no:
VIA_ENABLE = yes # Allowes for the modification of the Layout with the VIA website
SMOOTH_BATTERY_COLOR_ENABLE = yes # Makes the Battery Percentage Color interpolate smoothly between red, yelow and green

ifeq ($(strip $(SMOOTH_BATTERY_COLOR_ENABLE)),yes)
	CFLAGS += -DSMOOTH_BATTERY_COLOR_ENABLE
endif