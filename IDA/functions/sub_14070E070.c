#include "../winhttp.h"

//----- (000000014070E070) ----------------------------------------------------
__int64 __fastcall sub_14070E070(__int64 a1, __int64 a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rbx
	__int64 v4; // rdx
	unsigned __int64 v5; // rcx
	int v6; // eax
	unsigned __int64 v7; // rdi
	int* v8; // rbx
	__int64 v9; // rdx
	int v10; // esi
	__int64 v11; // rax
	int* v12; // rax
	int* v13; // r14
	int* v15; // [rsp+28h] [rbp-19h] BYREF
	unsigned __int64 v16; // [rsp+30h] [rbp-11h]
	__int64(__fastcall * *v17)(); // [rsp+38h] [rbp-9h] BYREF
	int v18; // [rsp+40h] [rbp-1h]
	__int64 v19; // [rsp+48h] [rbp+7h]
	int v20; // [rsp+50h] [rbp+Fh]
	__int64(__fastcall * *v21)(); // [rsp+58h] [rbp+17h] BYREF
	int v22; // [rsp+60h] [rbp+1Fh]
	__int64 v23; // [rsp+68h] [rbp+27h]
	__int64(__fastcall * **v24)(); // [rsp+70h] [rbp+2Fh]
	int v25; // [rsp+A8h] [rbp+67h] BYREF

	v19 = a1;
	v20 = 1;
	v18 = -2;
	v17 = off_140B569F0;
	v2 = *(_DWORD**)(a1 + 24);
	if ((unsigned __int64)v2 < *(_QWORD*)(a1 + 16))
	{
		v3 = dword_140A12138;
		if (v2 != dword_140A12138 && v2[2] == 5)
		{
			sub_1400579E0(a1, a2, -2);
			v4 = v19;
			v5 = *(_QWORD*)(v19 + 16);
			if (*(_QWORD*)(v19 + 24) < v5)
				v3 = *(_DWORD**)(v19 + 24);
			*(_QWORD*)v5 = *(_QWORD*)v3;
			*(_DWORD*)(v5 + 8) = v3[2];
			*(_QWORD*)(v4 + 16) += 16i64;
			v6 = sub_1400578C0(v19);
			a1 = v19;
			v18 = v6;
		}
	}
	v23 = a1;
	v22 = -2;
	v24 = &v17;
	v21 = off_140B56A08;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v21[2])(&v21, 0xFFFFFFFFi64);
	v7 = 0i64;
	*(_QWORD*)(v19 + 16) -= 16i64;
	v8 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v24)[1])(v24)
		&& (unsigned int)sub_1400FCBA0((__int64)&v21))
	{
		if ((int)sub_1400FC8E0((__int64)&v21, &v25) >= 0)
		{
			v10 = v25;
			v11 = 0i64;
			if (v7)
			{
				while (v8[v11] != v25)
				{
					if (++v11 >= v7)
						goto LABEL_14;
				}
			}
			else
			{
			LABEL_14:
				v12 = sub_14018DB00((__int64)v8, v7 + 1, 4i64);
				v12[v7] = v10;
				v13 = v12;
				if (v8 != v12)
				{
					sub_1407DB590(v12, v8, 4 * v7);
					if (v8)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
					v8 = v13;
				}
				++v7;
			}
		}
	}
	v16 = v7;
	v15 = v8;
	if (v7 - 1 <= 0xFE)
		sub_1405DE9C0(qword_140C65898 + 26680, &v15);
	if (v8)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	v21 = off_140B56A08;
	if (v23)
		sub_1400579E0(v23, v9, v22);
	v17 = off_140B56A08;
	if (v19)
		sub_1400579E0(v19, v9, v18);
	return 0i64;
}
// 14070E267: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

