#include "../winhttp.h"

//----- (00000001406F69E0) ----------------------------------------------------
__int64 __fastcall sub_1406F69E0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // r14
	int v5; // r12d
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	_QWORD* v11; // rdi
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // r13d
	__int64 v15; // rbx
	unsigned int v16; // ebx
	__int64 v17; // r9
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // r15
	unsigned __int64 v21; // r14
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // r9
	_DWORD* v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // r8
	__int64 v29; // rax
	__int64 v30; // r10
	__int64 v31; // r9
	_DWORD* v32; // rcx
	__int64 v33; // rdx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-30h] BYREF
	__int64 v36; // [rsp+28h] [rbp-28h]
	_QWORD* v37; // [rsp+30h] [rbp-20h]
	int v38; // [rsp+38h] [rbp-18h]
	double v39; // [rsp+80h] [rbp+30h] BYREF

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v4) = 0;
	v5 = sub_1400578C0(a1);
	v6 = *(_QWORD*)(qword_140C65898 + 28048);
	if (v6)
		LODWORD(v4) = sub_1405E73E0(v6);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v8, L"nSpellCount", v4);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v9 = *(_QWORD*)(a1 + 32);
	v35 = off_140B569F0;
	v10 = *(_QWORD*)(v9 + 112);
	v11 = (_QWORD*)a1;
	v37 = (_QWORD*)a1;
	v38 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = sub_1400578C0(a1);
	LODWORD(v36) = v14;
	if ((_DWORD)v4)
	{
		v15 = 20i64;
		v4 = (unsigned int)v4;
		do
		{
			LODWORD(v39) = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 28048) + v15 - 12);
			if ((unsigned int)sub_1403D3470(v11, (int*)&v39))
			{
				sub_1400FB470((__int64)&v35);
				v11 = v37;
				v37[2] -= 16i64;
			}
			LODWORD(v39) = *(_DWORD*)(v15 + *(_QWORD*)(qword_140C65898 + 28048));
			if ((unsigned int)sub_1403D3470(v11, (int*)&v39))
			{
				sub_1400FB470((__int64)&v35);
				v11 = v37;
				v37[2] -= 16i64;
			}
			v15 += 4i64;
			--v4;
		} while (v4);
		v14 = v36;
	}
	v16 = v5 - 1;
	v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v5 - 1) >= *(_DWORD*)(v17 + 56))
	{
		v39 = (double)v5;
		if ((double)v5 == 0.0)
			v18 = *(_DWORD**)(v17 + 32);
		else
			v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
		while (v18[6] != 3 || (double)v5 != *((double*)v18 + 2))
		{
			v18 = (_DWORD*)*((_QWORD*)v18 + 4);
			if (!v18)
			{
				v18 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v5 - 1));
	}
	v19 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v19 = *(_QWORD*)v18;
	*(_DWORD*)(v19 + 8) = v18[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v20 = (unsigned __int64*)sub_14018F0E0(&v35, L"tSpells")[1];
	if (v20)
	{
		v21 = -1i64;
		do
			++v21;
		while (*((_BYTE*)v20 + v21));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v22 = *(_QWORD*)(a1 + 16);
		v23 = sub_140062650(a1, v20, v21);
		*(_DWORD*)(v22 + 8) = 4;
		*(_QWORD*)v22 = v23;
		v16 = v5 - 1;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v24 = v36;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v24)
		sub_14018B900(v24, 0);
	v25 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v14 - 1) >= *(_DWORD*)(v25 + 56))
	{
		v39 = (double)v14;
		if ((double)v14 == 0.0)
			v26 = *(_DWORD**)(v25 + 32);
		else
			v26 = (_DWORD*)(*(_QWORD*)(v25 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v25 + 11)) - 1) | 1)));
		while (v26[6] != 3 || (double)v14 != *((double*)v26 + 2))
		{
			v26 = (_DWORD*)*((_QWORD*)v26 + 4);
			if (!v26)
			{
				v26 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v26 = (_DWORD*)(*(_QWORD*)(v25 + 24) + 16i64 * (v14 - 1));
	}
	v27 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v27 = *(_QWORD*)v26;
	*(_DWORD*)(v27 + 8) = v26[2];
	v28 = *(_QWORD*)(a1 + 16) + 16i64;
	*(_QWORD*)(a1 + 16) = v28;
	sub_14005EA50(a1, (__int64*)(v28 - 48), (int*)(v28 - 32), (unsigned int*)(v28 - 16));
	v29 = *(_QWORD*)(a1 + 32);
	v30 = *(_QWORD*)(a1 + 16) - 48i64;
	*(_QWORD*)(a1 + 16) = v30;
	v31 = *(_QWORD*)(v29 + 160);
	if (v16 >= *(_DWORD*)(v31 + 56))
	{
		v39 = (double)v5;
		if ((double)v5 == 0.0)
			v32 = *(_DWORD**)(v31 + 32);
		else
			v32 = (_DWORD*)(*(_QWORD*)(v31 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
		while (v32[6] != 3 || (double)v5 != *((double*)v32 + 2))
		{
			v32 = (_DWORD*)*((_QWORD*)v32 + 4);
			if (!v32)
			{
				v32 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v32 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v5 - 1));
	}
	*(_QWORD*)v30 = *(_QWORD*)v32;
	v33 = (unsigned int)v32[2];
	*(_DWORD*)(v30 + 8) = v33;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v11)
		sub_1400579E0((__int64)v11, v33, v14);
	sub_1400579E0(a1, v33, v5);
	return 1i64;
}
// 1406F6E31: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B41198: using guessed type wchar_t aTspells[8];
// 140B411A8: using guessed type wchar_t aNspellcount[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

