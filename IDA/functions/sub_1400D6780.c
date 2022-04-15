#include "../winhttp.h"

//----- (00000001400D6780) ----------------------------------------------------
__int64 __fastcall sub_1400D6780(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rcx
	__int64* v9; // rax

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		LODWORD(v4) = *(_DWORD*)(v3 + 848);
		sub_140058710((__int64)a1, (unsigned __int64*)"x", 1ui64);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)(int)v4;
		a1[2] += 16i64;
		v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		LODWORD(v4) = *(_DWORD*)(v3 + 852);
		sub_140058710((__int64)a1, (unsigned __int64*)"y", 1ui64);
		v8 = a1[2];
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)(int)v4;
		a1[2] += 16i64;
		v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		return 1i64;
	}
	return result;
}

