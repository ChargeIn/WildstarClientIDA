#include "../winhttp.h"

//----- (00000001404E4450) ----------------------------------------------------
__int64 __fastcall sub_1404E4450(_QWORD* a1)
{
	__int64* v1; // rax
	__int64* v3; // rcx
	unsigned __int16* v4; // rsi
	int v5; // eax
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // r14
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // r10
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int16* v22; // r10
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	unsigned __int64 v27; // rcx
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v35; // [rsp+20h] [rbp-18h] BYREF
	int v36; // [rsp+28h] [rbp-10h]
	__int64 v37; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)a1[3];
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v1 < a1[2])
		v3 = v1;
	v4 = 0i64;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v37))
		{
			v6 = 0;
			goto LABEL_8;
		}
		v36 = 3;
		v3 = &v35;
		v35 = v37;
	}
	v6 = (int)*(double*)v3;
LABEL_8:
	v7 = sub_1401FE020(v6);
	v8 = v7;
	if (!v7 || (*(_BYTE*)(v7 + 8) & 2) != 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v13 = a1[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v13, L"nId", v14);
		a1[2] -= 16i64;
		sub_14034BDD0(v15, *(_DWORD*)(v8 + 20));
		v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v17 = a1[2];
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v17, L"strName", v18);
		a1[2] -= 16i64;
		sub_14034BDD0(v19, *(_DWORD*)(v8 + 24));
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v21 = a1[2];
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v21, L"strDescription", v22);
		a1[2] -= 16i64;
		v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v25, L"nMaxCount", v26);
		a1[2] -= 16i64;
		v27 = *(_QWORD*)(v8 + 32);
		if (v27 && v27 <= qword_140C3FE70)
			v4 = (unsigned __int16*)(v27 + qword_140C3FE68);
		v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v30, L"icon", v4);
		a1[2] -= 16i64;
		v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v33, v11);
	}
	return 1i64;
}
// 1404E4556: variable 'v14' is possibly undefined
// 1404E4564: variable 'v15' is possibly undefined
// 1404E45A0: variable 'v18' is possibly undefined
// 1404E45AE: variable 'v19' is possibly undefined
// 1404E45EA: variable 'v22' is possibly undefined
// 1404E461B: variable 'v24' is possibly undefined
// 1404E462D: variable 'v25' is possibly undefined
// 1404E462D: variable 'v26' is possibly undefined
// 1404E4679: variable 'v29' is possibly undefined
// 1404E468B: variable 'v30' is possibly undefined
// 1404E46B1: variable 'v32' is possibly undefined
// 1404E46C3: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0BB08: using guessed type wchar_t aIcon_7[5];
// 140B0BB80: using guessed type wchar_t aNid_9[4];
// 140B0BB88: using guessed type wchar_t aStrname_19[8];
// 140B0BB98: using guessed type wchar_t aStrdescription_3[15];
// 140B0BBB8: using guessed type wchar_t aNmaxcount_0[10];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

