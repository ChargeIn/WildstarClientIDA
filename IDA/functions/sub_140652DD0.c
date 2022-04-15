#include "../winhttp.h"

//----- (0000000140652DD0) ----------------------------------------------------
__int64 __fastcall sub_140652DD0(__int64 a1)
{
	_QWORD* v1; // rdi
	int* v2; // rax
	__int64 v3; // rbp
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // r10d
	__int64 v10; // rsi
	unsigned int v11; // ebx
	__int64 v12; // rcx
	int v13; // edx
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // r10d
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+28h] [rbp-20h]
	_QWORD* v21; // [rsp+30h] [rbp-18h]
	int v22; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = v1[4];
		v19 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v21 = v1;
		v22 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)v1);
		v6 = v1[2];
		v7 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		v1[2] += 16i64;
		v20 = sub_1400578C0((__int64)v1);
		v8 = sub_1403DEC00(qword_140C65898, v3);
		v10 = v8;
		if (v8)
		{
			v11 = 0;
			if (*(_QWORD*)(v8 + 24))
			{
				v12 = 0i64;
				do
				{
					v13 = *(_DWORD*)(*(_QWORD*)(v10 + 16) + 4 * v12);
					if (v13 != *(_DWORD*)(v3 + 8) && (unsigned int)sub_140649870(v1, v13))
					{
						sub_1400FB470((__int64)&v19);
						v1 = v21;
						v21[2] -= 16i64;
					}
					v12 = ++v11;
				} while ((unsigned __int64)v11 < *(_QWORD*)(v10 + 24));
				v9 = v20;
			}
		}
		v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v9);
		v15 = v1[2];
		*(_QWORD*)v15 = *v14;
		v16 = *((unsigned int*)v14 + 2);
		*(_DWORD*)(v15 + 8) = v16;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v16, v17);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	return 1i64;
}
// 140652EDC: variable 'v9' is possibly undefined
// 140652EFD: variable 'v17' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

