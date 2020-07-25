/*
 * ndisguid.h
 *
 * GUIDs for NDIS drivers
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#ifndef __NDISGUID_H
#define __NDISGUID_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(GUID_NDIS_LAN_CLASS,
  0xad498944, 0x762f, 0x11d0, 0x8d, 0xcb, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ENUMERATE_ADAPTER,
  0x981f2d7f, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ENUMERATE_VC,
  0x981f2d82, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
  0x981f2d81, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
  0x981f2d80, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_VC_ARRIVAL,
  0x182f9e0c, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_VC_REMOVAL,
  0x981f2d79, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_BIND,
  0x5413531c, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_NOTIFY_UNBIND,
  0x6e3ce1ec, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY,
  0xa14f1c97, 0x8839, 0x4f8a, 0x99, 0x96, 0xa2, 0x89, 0x96, 0xeb, 0xbf, 0x1d);


DEFINE_GUID(GUID_NDIS_802_3_CURRENT_ADDRESS,
  0x44795700, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_MAC_OPTIONS,
  0x44795703, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_MAXIMUM_LIST_SIZE,
  0x44795702, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_MULTICAST_LIST,
  0x44795701, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_PERMANENT_ADDRESS,
  0x447956ff, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_RCV_ERROR_ALIGNMENT,
  0x44795704, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_XMIT_MORE_COLLISIONS,
  0x44795706, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_3_XMIT_ONE_COLLISION,
  0x44795705, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_CURRENT_ADDRESS,
  0x44795708, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_CURRENT_FUNCTIONAL,
  0x44795709, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_CURRENT_GROUP,
  0x4479570a, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_CURRENT_RING_STATE,
  0xacf14032, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_CURRENT_RING_STATUS,
  0x890a36ec, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_LAST_OPEN_STATUS,
  0x4479570b, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_PERMANENT_ADDRESS,
  0x44795707, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_LINE_ERRORS,
  0xacf14033, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_802_5_LOST_FRAMES,
  0xacf14034, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_802_11_ADD_WEP,
  0x4307bff0, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_AUTHENTICATION_MODE,
  0x43920a24, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_BSSID,
  0x2504b6c2, 0x1fa5, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_BSSID_LIST,
  0x69526f9a, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_BASIC_RATES,
  0x4a198516, 0x2068, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_CONFIGURATION,
  0x4a4df982, 0x2068, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_DESIRED_RATES,
  0x452ee08e, 0x2536, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_DISASSOCIATE,
  0x43671f40, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_FRAGMENTATION_THRESHOLD,
  0x69aaa7c4, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_INFRASTRUCTURE_MODE,
  0x697d5a7e, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_NETWORK_TYPES_SUPPORTED,
  0x8531d6e6, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_NETWORK_TYPE_IN_USE,
  0x857e2326, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_NUMBER_OF_ANTENNAS,
  0x01779336, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_POWER_MODE,
  0x85be837c, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_RATES_SUPPORTED,
  0x49db8722, 0x2068, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_REMOVE_WEP,
  0x433c345c, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_PRIVACY_FILTER,
  0x6733c4e9, 0x4792, 0x11d4, 0x97, 0xf1, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_RSSI,
  0x1507db16, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_RSSI_TRIGGER,
  0x155689b8, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_RTS_THRESHOLD,
  0x0134d07e, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_RX_ANTENNA_SELECTED,
  0x01ac07a2, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_SSID,
  0x7d2a90ea, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_STATISTICS,
  0x42bb73b0, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_TX_POWER_LEVEL,
  0x11e6ba76, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);

DEFINE_GUID(GUID_NDIS_802_11_TX_ANTENNA_SELECTED,
  0x01dbb74a, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);


DEFINE_GUID(GUID_NDIS_ATM_HW_CURRENT_ADDRESS,
  0x791ad1a1, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_AAL0_PACKET_SIZE,
  0x791ad1a5, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_AAL1_PACKET_SIZE,
  0x791ad1a6, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_AAL34_PACKET_SIZE,
  0x791ad1a7, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_AAL5_PACKET_SIZE,
  0x791ad191, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_ACTIVE_VCI_BITS,
  0x791ad1a3, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_ACTIVE_VCS,
  0x791ad1a2, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_MAX_ACTIVE_VPI_BITS,
  0x791ad1a4, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_SUPPORTED_AAL_TYPES,
  0x791ad1a0, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_SUPPORTED_SERVICE_CATEGORY,
  0x791ad19f, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_SUPPORTED_VC_RATES,
  0x791ad19e, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_ATM_RCV_CELLS_DROPPED,
  0x0a21480c, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_RCV_CELLS_OK,
  0x0a21480a, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_ATM_XMIT_CELLS_OK,
  0x0a21480b, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_FDDI_LONG_CURRENT_ADDR,
  0xacf14036, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LONG_MAX_LIST_SIZE,
  0xacf14038, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LONG_MULTICAST_LIST,
  0xacf14037, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LONG_PERMANENT_ADDR,
  0xacf14035, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_SHORT_CURRENT_ADDR,
  0xacf1403a, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_SHORT_MAX_LIST_SIZE,
  0xacf1403c, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_SHORT_MULTICAST_LIST,
  0xacf1403b, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_SHORT_PERMANENT_ADDR,
  0xacf14039, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_FDDI_ATTACHMENT_TYPE,
  0xacf1403d, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_DOWNSTREAM_NODE_LONG,
  0xacf1403f, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_FRAME_ERRORS,
  0xacf14040, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_FRAMES_LOST,
  0xacf14041, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LCT_FAILURES,
  0xacf14043, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LCONNECTION_STATE,
  0xacf14045, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_LEM_REJECTS,
  0xacf14044, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_RING_MGT_STATE,
  0xacf14042, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_FDDI_UPSTREAM_NODE_LONG,
  0xacf1403e, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_GEN_CURRENT_LOOKAHEAD,
  0x5ec10361, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CURRENT_PACKET_FILTER,
  0x5ec10360, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_DRIVER_VERSION,
  0x5ec10362, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_HARDWARE_STATUS,
  0x5ec10354, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MEDIA_IN_USE,
  0x5ec10356, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MEDIA_SUPPORTED,
  0x5ec10355, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_LINK_SPEED,
  0x5ec10359, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MAC_OPTIONS,
  0x5ec10365, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_LOOKAHEAD,
  0x5ec10357, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_FRAME_SIZE,
  0x5ec10358, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_SEND_PACKETS,
  0x5ec10367, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_TOTAL_SIZE,
  0x5ec10363, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_MEDIA_CONNECT_STATUS,
  0x5ec10366, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_RECEIVE_BLOCK_SIZE,
  0x5ec1035d, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_RECEIVE_BUFFER_SPACE,
  0x5ec1035b, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_TRANSMIT_BUFFER_SPACE,
  0x5ec1035a, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_TRANSMIT_BLOCK_SIZE,
  0x5ec1035c, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_VENDOR_DESCRIPTION,
  0x5ec1035f, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_VENDOR_DRIVER_VERSION,
  0x447956f9, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_VENDOR_ID,
  0x5ec1035e, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_GEN_RCV_ERROR,
  0x447956fd, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_RCV_NO_BUFFER,
  0x447956fe, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_RCV_OK,
  0x447956fb, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_XMIT_ERROR,
  0x447956fc, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_XMIT_OK,
  0x447956fa, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_GEN_CO_DRIVER_VERSION,
  0x791ad198, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_HARDWARE_STATUS,
  0x791ad192, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_LINK_SPEED,
  0x791ad195, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_MAC_OPTIONS,
  0x791ad19a, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_SUPPORTED,
  0x791ad193, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_IN_USE,
  0x791ad194, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_CONNECT_STATUS,
  0x791ad19b, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_MINIMUM_LINK_SPEED,
  0x791ad19d, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_DESCRIPTION,
  0x791ad197, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_DRIVER_VERSION,
  0x791ad19c, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_ID,
  0x791ad196, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_ERROR,
  0x0a214808, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_OK,
  0x0a214806, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_NO_BUFFER,
  0x0a214809, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_XMIT_PDUS_ERROR,
  0x0a214807, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_GEN_CO_XMIT_PDUS_OK,
  0x0a214805, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);


DEFINE_GUID(GUID_NDIS_STATUS_LINK_SPEED_CHANGE,
  0x981f2d85, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_CONNECT,
  0x981f2d7d, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_DISCONNECT,
  0x981f2d7e, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_SPECIFIC_INDICATION,
  0x981f2d84, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_STATUS_RESET_END,
  0x981f2d77, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

DEFINE_GUID(GUID_NDIS_STATUS_RESET_START,
  0x981f2d76, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

#ifdef __cplusplus
}
#endif

#endif /* __NDISGUID_H */
