#include "../winhttp.h"

//----- (000000014066B140) ----------------------------------------------------
__int64 __fastcall sub_14066B140(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rdx
	int v8; // r10d
	__int64 v9; // rsi
	__int64 v10; // rdx
	__int64 v11; // rcx
	unsigned int v12; // edi
	_DWORD* v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // r8
	__int64 v17; // rax
	_QWORD* v18; // rax
	__int64 v19; // r8
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+28h] [rbp-20h]
	__int64 v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]

	v1 = a1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(v1 + 16);
	v3 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v23 = v1;
	*(_QWORD*)v2 = v3;
	v4 = *(_QWORD*)(v1 + 32);
	*(_QWORD*)(v1 + 16) += 16i64;
	v24 = 1;
	v21 = off_140B569F0;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	v8 = sub_1400578C0(v1);
	v22 = v8;
	if (!qword_140C65990)
		goto LABEL_22;
	v9 = qword_140C65998;
	v10 = *(_QWORD*)(qword_140C65998 + 176);
	v11 = *(_QWORD*)(v10 + 16);
	if (v11 == v10)
		goto LABEL_21;
	do
	{
		v12 = *(_DWORD*)(v11 + 32);
		v13 = (_DWORD*)(v11 + 32);
		if (qword_140C63840)
		{
			v14 = qword_140C63840(off_140A6E3E8, v12, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				goto LABEL_14;
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v12);
		}
		if (v14)
		{
			sub_14034BDD0(v15, *(_DWORD*)(v14 + 4));
			sub_1400FAD30((__int64)&v21);
		}
	LABEL_14:
		v16 = *(_QWORD*)(v9 + 176);
		v11 = v16;
		v17 = *(_QWORD*)(v16 + 8);
		while (v17)
		{
			if (*v13 >= *(_DWORD*)(v17 + 32))
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v11 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
	} while (v11 != v16);
	v1 = v23;
	v8 = v22;
LABEL_21:
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v8);
	v19 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v19 = *v18;
	v7 = *((unsigned int*)v18 + 2);
	*(_DWORD*)(v19 + 8) = v7;
	*(_QWORD*)(v1 + 16) += 16i64;
LABEL_22:
	if (v1)
		sub_1400579E0(v1, v7, v8);
	return 1i64;
}
// 14066B260: variable 'v15' is possibly undefined
// 14066B2EF: variable 'v7' is possibly undefined
// 14066B2EF: variable 'v8' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;

