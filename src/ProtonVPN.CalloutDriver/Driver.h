#pragma once

EXTERN_C_START

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_UNLOAD DriverUnload;

EXTERN_C_END

#define ProtonTAG 'pvpn'