#include "../winhttp.h"

//----- (00000001407032B0) ----------------------------------------------------
__int64 __fastcall sub_1407032B0(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	unsigned int* v4; // rax
	unsigned int* v5; // rsi
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v2 = sub_140056D60(a1, 1u);
	v4 = (unsigned int*)sub_1404B0E10(v3, v2);
	v5 = v4;
	if (v4
		&& ((v6 = *(_QWORD*)(qword_140C65898 + 120)) == 0 ? (v7 = 0) : (v7 = *(_DWORD*)(v6 + 56)),
			(unsigned int)sub_1404AF7D0(v4, v7)))
	{
		v8 = a1[4];
		v15 = off_140B569F0;
		v9 = *(_QWORD*)(v8 + 112);
		v17 = a1;
		v18 = 1;
		if (*(_QWORD*)(v8 + 120) >= v9)
			sub_14005E2C0((__int64)a1);
		v10 = a1[2];
		v11 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v10 + 8) = 5;
		*(_QWORD*)v10 = v11;
		a1[2] += 16i64;
		LODWORD(v10) = sub_1400578C0((__int64)a1);
		v16 = v10;
		sub_1404B39C0(v5, (__int64)&v15);
		v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v13 = a1[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v13, v10);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 0i64;
	}
}
// 1407032C9: variable 'v3' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

