#pragma once
struct mac {
	USHORT byte1, byte2, byte3;
};

struct ethernet_h {
	struct mac dst_mac, src_mac;
	USHORT type;
};

struct ip_h {
	UCHAR ip_v_l, ip_dscp_ecn;
	USHORT toal_len, identification;
	USHORT ip_off;
	UCHAR ttl;
	UCHAR ip_protocol;
	USHORT chksum;
	struct in_addr ip_src, ip_dst;
};

struct tcp_h {
	USHORT src_port;
	USHORT dest_port;
	ULONG sqc_number;
	ULONG ack_number;
	UCHAR offset_reserved;
	UCHAR flags;
	USHORT window_size;
	USHORT tcp_checksum;
	USHORT urg_point;
};

struct pseudoheader {
	ULONG src_addr, dst_addr;
	UCHAR zeros;
	UCHAR protocol;
	USHORT length;
};