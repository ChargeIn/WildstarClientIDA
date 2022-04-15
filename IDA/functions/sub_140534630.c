#include "../winhttp.h"

//----- (0000000140534630) ----------------------------------------------------
__int64 __fastcall sub_140534630(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	unsigned __int64 v4; // rdx
	_DWORD* v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	_QWORD* v15; // [rsp+30h] [rbp-18h]

	v3 = sub_14052E9B0(a1);
	if (v3)
	{
		v15 = a1;
		v14 = -2;
		v13 = off_140B56A08;
		sub_1400579E0((__int64)a1, v2, -2);
		v4 = a1[2];
		v5 = dword_140A12138;
		if (a1[3] + 16i64 < v4)
			v5 = (_DWORD*)(v15[3] + 16i64);
		*(_QWORD*)v4 = *(_QWORD*)v5;
		*(_DWORD*)(v4 + 8) = v5[2];
		a1[2] += 16i64;
		v14 = sub_1400578C0((__int64)v15);
		v7 = *(_QWORD*)(v3 + 1384);
		v8 = *(_QWORD*)(v7 + 16);
		if (v8 != v7)
		{
			do
			{
				sub_140772670(v8 + 48, (__int64)&v13, 0);
				v9 = *(_QWORD*)(v8 + 24);
				if (v9)
				{
					v8 = *(_QWORD*)(v8 + 24);
					for (i = *(_QWORD*)(v9 + 16); i; i = *(_QWORD*)(i + 16))
						v8 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v8 = j;
					if (*(_QWORD*)(v8 + 24) != j)
						v8 = j;
				}
			} while (v8 != *(_QWORD*)(v3 + 1384));
		}
		*(_DWORD*)(v3 + 1568) = 1;
		v13 = off_140B56A08;
		if (v15)
			sub_1400579E0((__int64)v15, v6, v14);
	}
	return 0i64;
}
// 140534675: variable 'v2' is possibly undefined
// 140534761: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

