#include "../winhttp.h"

//----- (000000014073CEE0) ----------------------------------------------------
__int64 __fastcall sub_14073CEE0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int* v3; // rax
	__int64 v5; // rsi
	_DWORD* v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rcx
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rcx
	int* v17; // rbx
	__int64 v18; // rdi
	__int16* v19; // rdx
	__int64 v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r11
	__int64 v23; // r9
	int v24; // r8d
	__int64 v25; // rdx
	__int64(__fastcall * *v26)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v27; // [rsp+28h] [rbp-20h]
	_QWORD* v28; // [rsp+30h] [rbp-18h]
	int v29; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = (unsigned int*)sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = sub_140240700(*v3);
	if (!v5)
		return 0i64;
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2]
		|| v6 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v7 = sub_140056D60(a1, 2u)) == 0)
	{
		v12 = a1[4];
		v28 = a1;
		v26 = off_140B569F0;
		v13 = *(_QWORD*)(v12 + 112);
		v29 = 1;
		if (*(_QWORD*)(v12 + 120) >= v13)
			sub_14005E2C0((__int64)a1);
		v14 = a1[2];
		v15 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		a1[2] += 16i64;
		LODWORD(v27) = sub_1400578C0((__int64)a1);
		v17 = (int*)(v5 + 12);
		v18 = 3i64;
		do
		{
			v19 = sub_14034BDD0(v16, *v17);
			v20 = 0i64;
			if (*v19)
			{
				do
					++v20;
				while (v19[v20]);
				if (v20)
					sub_1400FAD30((__int64)&v26);
			}
			++v17;
			--v18;
		} while (v18);
		v21 = sub_14005C3C0(*(_QWORD*)(v28[4] + 160i64), v27);
		v23 = *(_QWORD*)(v22 + 16);
		v24 = v27;
		*(_QWORD*)v23 = *v21;
		v25 = *((unsigned int*)v21 + 2);
		*(_DWORD*)(v23 + 8) = v25;
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400579E0(v22, v25, v24);
	}
	else
	{
		if (v7 > 3)
			return 0i64;
		v9 = sub_14034BDD0(v8, *(_DWORD*)(v5 + 4i64 * (v7 - 1) + 12));
		v10 = (unsigned __int64*)sub_14018F0E0(&v26, (unsigned __int16*)v9)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v27)
			sub_14018B900(v27, 0);
	}
	return 1i64;
}
// 14073CF93: variable 'v8' is possibly undefined
// 14073D052: variable 'v16' is possibly undefined
// 14073D09C: variable 'v22' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

