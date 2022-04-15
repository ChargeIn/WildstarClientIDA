#include "../winhttp.h"

//----- (00000001403102B0) ----------------------------------------------------
__int64 __fastcall sub_1403102B0(__int64 a1, __int64 a2)
{
	bool v2; // zf
	__int64* v3; // r8
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int v6; // ebx
	int v7; // eax
	int v8; // eax
	int v10[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+28h] [rbp-30h]
	unsigned __int64(__fastcall * v12)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v13; // [rsp+38h] [rbp-20h]
	int v14; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 24) == 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	v3 = (__int64*)(a2 + 40);
	if (v2)
	{
		*(_QWORD*)(a1 + 24) = v3;
		*(_QWORD*)(a1 + 32) = *v3;
		*v3 = a1;
		v4 = *(_QWORD*)(a1 + 32);
		if (v4)
			*(_QWORD*)(v4 + 24) = a1 + 32;
	}
	v5 = qword_140C63758;
	*(_DWORD*)(a1 + 496) = 43200;
	v6 = 0;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_DWORD*)(a1 + 224) = 0;
	*(_OWORD*)(a1 + 240) = xmmword_140C78390;
	*(_OWORD*)(a1 + 256) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 272) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 288) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 304) = xmmword_140C78390;
	*(_OWORD*)(a1 + 320) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 336) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 352) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 368) = xmmword_140C78390;
	*(_OWORD*)(a1 + 384) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 400) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 416) = xmmword_140C783C0;
	*(_DWORD*)(a1 + 1496) = 0;
	*(_QWORD*)(a1 + 1504) = a1;
	*(_DWORD*)(a1 + 1520) = -1;
	*(_QWORD*)(a1 + 1528) = a1;
	*(_DWORD*)(a1 + 1544) = 0;
	*(_QWORD*)(a1 + 1552) = a1;
	*(_DWORD*)(a1 + 1568) = 0;
	*(_QWORD*)(a1 + 1576) = a1;
	*(_DWORD*)(a1 + 1592) = 0;
	*(_QWORD*)(a1 + 1600) = a1;
	if (v5)
		v7 = *(_DWORD*)(v5 + 184);
	else
		v7 = 0;
	v11 = a1;
	v12 = sub_140310E70;
	v10[0] = 20;
	v10[1] = 5;
	v13 = 0i64;
	v14 = v7;
	v8 = sub_14019DCA0((__int64)v10, 1, 0i64, (int**)(a1 + 552));
	if (v8 < 0)
		return (unsigned int)v8;
	return v6;
}
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

