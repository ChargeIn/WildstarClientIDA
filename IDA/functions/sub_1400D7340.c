#include "../winhttp.h"

//----- (00000001400D7340) ----------------------------------------------------
__int64 __fastcall sub_1400D7340(_QWORD* a1)
{
	unsigned int v1; // edi
	__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	unsigned __int64 v6; // rdx
	_DWORD* v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64(__fastcall * *v10)(); // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]
	_QWORD* v12; // [rsp+30h] [rbp-18h]

	v1 = 1;
	result = sub_1400D66A0(a1, 1u);
	v5 = result;
	if (result)
	{
		v12 = a1;
		v11 = -2;
		v10 = off_140B56A08;
		sub_1400579E0((__int64)a1, v4, -2);
		v6 = a1[2];
		v7 = dword_140A12138;
		if (a1[3] + 16i64 < v6)
			v7 = (_DWORD*)(v12[3] + 16i64);
		*(_QWORD*)v6 = *(_QWORD*)v7;
		*(_DWORD*)(v6 + 8) = v7[2];
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)v12);
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v10[1])(&v10)
			&& (v9 = sub_1400D3A20(v5, (__int64)&v10)) != 0
			&& (*(_BYTE*)(v9 + 28) & 1) != 0)
		{
			v1 = sub_1400D62A0(a1, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v10 = off_140B56A08;
		if (v12)
			sub_1400579E0((__int64)v12, v8, v11);
		return v1;
	}
	return result;
}
// 1400D739D: variable 'v4' is possibly undefined
// 1400D7441: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

