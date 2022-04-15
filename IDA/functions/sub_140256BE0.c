#include "../winhttp.h"

//----- (0000000140256BE0) ----------------------------------------------------
__int64 __fastcall sub_140256BE0(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // [rsp+28h] [rbp-40h]
	__int64 v7[4]; // [rsp+30h] [rbp-38h] BYREF
	int v8; // [rsp+50h] [rbp-18h]
	int v9; // [rsp+54h] [rbp-14h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v2 = dword_140C40550;
	if (*(_DWORD*)qword_140C63750 < dword_140C40550)
		v2 = *(_DWORD*)qword_140C63750;
	if (byte_140C40560[v2]
		&& (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 56i64))(a1, 7i64)
			|| !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 56i64))(a1, 6i64)))
	{
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			0i64,
			192i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			1i64,
			0i64);
		v7[0] = *(_QWORD*)(a1 + 1936);
		v7[1] = v7[0];
		v6 = *(_QWORD*)(a1 + 1944);
		v7[2] = 0i64;
		v7[3] = 1i64;
		v8 = 0;
		v9 = 1;
		sub_140257D20(a1, v7, 0x11u, 2.8333333, 2.0, v6);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	}
	if ((unsigned int)(*(_DWORD*)(a1 + 40) - 1) <= 9)
		sub_140255F70(a1, *(_QWORD*)(a1 + 1720), 1u);
	v3 = *(_QWORD*)(a1 + 1648);
	*(_QWORD*)(a1 + 2360) = 0i64;
	*(_QWORD*)(a1 + 2368) = 0i64;
	*(_QWORD*)(a1 + 2376) = 0i64;
	*(_QWORD*)(a1 + 2352) = v3;
	*(_QWORD*)(a1 + 2384) = *(_QWORD*)(a1 + 1720);
	v4 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 2392) = 15i64;
	*(_DWORD*)(a1 + 2400) = 3;
	*(_DWORD*)(a1 + 2404) = 1;
	*(_DWORD*)(a1 + 2408) = 1;
	*(_DWORD*)(a1 + 2412) = 1;
	*(_QWORD*)(a1 + 2416) = 1i64;
	*(_QWORD*)(a1 + 2424) = 0i64;
	*(_DWORD*)(a1 + 2432) = 2;
	(*(void(__fastcall**)(__int64))(v4 + 72))(a1);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	*(_DWORD*)(a1 + 148) = 13;
	return result;
}
// 140C40550: using guessed type int dword_140C40550;
// 140C40560: using guessed type _BYTE byte_140C40560[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

