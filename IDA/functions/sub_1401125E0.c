#include "../winhttp.h"

//----- (00000001401125E0) ----------------------------------------------------
__int64 __fastcall sub_1401125E0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v6; // eax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rdx
	bool v11; // cf

	if (a2)
		return sub_1400D2120(a1, a2, a3, a4);
	if (*a3 < *(_DWORD*)(a1 + 716))
		return sub_1400D2120(a1, a2, a3, a4);
	if (*a3 >= *(_DWORD*)(a1 + 724))
		return sub_1400D2120(a1, a2, a3, a4);
	v6 = a3[1];
	if (v6 < *(_DWORD*)(a1 + 720) || v6 >= *(_DWORD*)(a1 + 728) || (*(_BYTE*)(a1 + 664) & 2) != 0)
		return sub_1400D2120(a1, a2, a3, a4);
	v7 = *(_QWORD**)(a1 + 32);
	if (!v7 || v7[360] != a1)
	{
		sub_1400E8C50(v7, (char*)a1);
		return 0i64;
	}
	if (*(_QWORD*)(a1 + 1304))
		return 0i64;
	v8 = sub_140112240(a1, (__int64)a3);
	if (a4)
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 1080) + 200i64))(
			*(_QWORD*)(a1 + 1080),
			v8,
			a1 + 1048);
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 1080) + 208i64))(
			*(_QWORD*)(a1 + 1080),
			*(_QWORD*)(a1 + 1048),
			a1 + 1040);
		v9 = *(_QWORD*)(a1 + 1048);
		v10 = -1i64;
		v11 = *(_QWORD*)(a1 + 1040) < v9;
		*(_QWORD*)(a1 + 1024) = v9;
		if (v11)
			v10 = *(_QWORD*)(a1 + 1040);
		*(_QWORD*)(a1 + 1032) = v10;
		sub_14010EE40((_QWORD*)a1);
		return 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 1040) = v8;
		*(_QWORD*)(a1 + 1048) = v8;
		*(_QWORD*)(a1 + 1024) = v8;
		*(_BYTE*)(a1 + 1075) = 1;
		*(_QWORD*)(a1 + 1032) = -1i64;
		sub_14010EE40((_QWORD*)a1);
		return 0i64;
	}
}

