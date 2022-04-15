#include "../winhttp.h"

//----- (0000000140334CF0) ----------------------------------------------------
struct sockaddr* __fastcall sub_140334CF0(struct sockaddr* name, SOCKET s)
{
	int* v4; // rax
	int namelen; // [rsp+30h] [rbp+8h] BYREF

	*(_QWORD*)&name[2].sa_family = 0i64;
	*(_QWORD*)&name[2].sa_data[6] = 0i64;
	*(_QWORD*)&name[3].sa_family = 0i64;
	v4 = sub_14018B280(8i64, 0);
	*(_QWORD*)&name[2].sa_family = v4;
	*(_QWORD*)&name[2].sa_data[6] = v4;
	*(_QWORD*)&name[3].sa_family = v4 + 2;
	if (v4)
		*(_BYTE*)v4 = 0;
	name[3].sa_data[6] = 0;
	*(_WORD*)&name[4].sa_data[12] = 0;
	namelen = 16;
	getsockname(s, name, &namelen);
	name[3].sa_data[6] = 0;
	*(_WORD*)&name[4].sa_data[12] = 0;
	sub_140334D90((__int64)name);
	if (!name[3].sa_data[6])
		sub_140334D90((__int64)name);
	return name;
}

