#include "../winhttp.h"

//----- (00000001406BBB90) ----------------------------------------------------
__int64 __fastcall sub_1406BBB90(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rsi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // rbx
	int v10; // r10d
	__int64* v11; // rax
	__int64 v12; // r8
	__int64 v13; // rdx
	int v14; // r10d
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	_QWORD* v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0 || (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		goto LABEL_15;
	}
	if (!*(_QWORD*)(v4 + 48))
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
	LABEL_15:
		v1[2] += 16i64;
		return 1i64;
	}
	v5 = v1[4];
	v18 = v1;
	v16 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v19 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0((__int64)v1);
	v7 = v1[2];
	v8 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v1[2] += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0((__int64)v1);
	v17 = v10;
	if (*(_QWORD*)(v4 + 48))
	{
		do
		{
			if ((unsigned int)sub_1404338E0(v1, *(_QWORD*)(*(_QWORD*)(v4 + 40) + 8 * v9)))
			{
				sub_1400FB470((__int64)&v16);
				v1 = v18;
				v18[2] -= 16i64;
			}
			++v9;
		} while (v9 < *(_QWORD*)(v4 + 48));
		v10 = v17;
	}
	v11 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v10);
	v12 = v1[2];
	v13 = *v11;
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v13, v14);
	return 1i64;
}
// 1406BBCC5: variable 'v14' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

