/*************************************************************************/
/*              Copyright (c) 2000-2018 NT Kernel Resources.             */
/*                           All Rights Reserved.                        */
/*                          http://www.ntkernel.com                      */
/*                           ndisrd@ntkernel.com                         */
/*                                                                       */
/* Module Name:  stdafx.h                                                */
/*                                                                       */
/* Abstract: include file for standard system include files,             */
/* or project specific include files that are used frequently, but       */
/* are changed infrequently                                              */
/*                                                                       */
/* Environment:                                                          */
/*   User mode                                                           */
/*                                                                       */
/*************************************************************************/

#pragma once

#include "targetver.h"

#include <winsock2.h>
#include <in6addr.h>
#include <tchar.h>
#include <ws2ipdef.h>
#include <IPHlpApi.h>
#include <Mstcpip.h>
#include <conio.h>
#include <WinDNS.h>

#include <memory>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <limits>
#include <atomic>
#include <string>

#include <vector>
#include <cassert>
#include <array>
#include <map>
#include <cctype>

#include <functional>

#include "../../../include/common.h"
#include "../../../include/ndisapi.h"
#include "../common/iphlp.h"
#include "../common/winsys/object.h"
#include "../common/winsys/event.h"
#include "../common/net/mac_address.h"
#include "../common/net/ip_address.h"
#include "../common/ndisapi/network_adapter.h"
#include "../common/ndisapi/simple_packet_filter.h"

