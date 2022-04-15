#include "../winhttp.h"

//----- (0000000140694EE0) ----------------------------------------------------
__int64 __fastcall sub_140694EE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = a1[2];
		v6 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		a1[2] += 16i64;
		v8 = *(_DWORD*)(*(_QWORD*)v4 + 48i64);
		if (v8)
		{
			sub_140058710((__int64)a1, (unsigned __int64*)"strTitle", 8ui64);
			sub_14066DB90(a1, &v8);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}

