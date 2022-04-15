#include "../winhttp.h"

//----- (00000001405EAEC0) ----------------------------------------------------
__int64 __fastcall sub_1405EAEC0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // ebp
	__int64 v10; // rbx
	int* v11; // rcx
	int* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdx
	unsigned __int16* v18; // r11
	int* v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rdx
	unsigned __int16* v25; // r11
	int* v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdx
	unsigned __int16* v32; // r11
	int* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rdx
	unsigned __int16* v37; // r11
	_QWORD* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rdx
	__int64(__fastcall * *v43)(); // [rsp+20h] [rbp-E8h] BYREF
	char v44[184]; // [rsp+28h] [rbp-E0h] BYREF
	__int128 v45; // [rsp+E0h] [rbp-28h]
	int* v46; // [rsp+F0h] [rbp-18h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v6 = v5) != 0)
		&& *(_QWORD*)(v5 + 8))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		v9 = sub_1400578C0((__int64)a1);
		sub_1400B6F30((__int64)&v43);
		v10 = 0i64;
		v46 = 0i64;
		v45 = 0i64;
		v43 = off_140B69230;
		v11 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v45 = v11;
		*((_QWORD*)&v45 + 1) = v11;
		v46 = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		v12 = (int*)sub_14034BDD0((__int64)v11, *(_DWORD*)(*(_QWORD*)(v6 + 8) + 32i64));
		if (v12)
		{
			v14 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v14;
				while (*((_WORD*)v12 + v14));
			}
			sub_14001C480((__int64)v44, v12, (int*)((char*)v12 + 2 * v14));
			sub_1400B7660(&v43);
			v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
			v16 = a1[2];
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v17, L"strLASTooltip", v18);
			a1[2] -= 16i64;
		}
		v19 = (int*)sub_14034BDD0(v13, *(_DWORD*)(*(_QWORD*)(v6 + 8) + 36i64));
		if (v19)
		{
			v21 = 0i64;
			if (*(_WORD*)v19)
			{
				do
					++v21;
				while (*((_WORD*)v19 + v21));
			}
			sub_14001C480((__int64)v44, v19, (int*)((char*)v19 + 2 * v21));
			sub_1400B7660(&v43);
			v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
			v23 = a1[2];
			*(_QWORD*)v23 = *v22;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v24, L"strCasterTooltip", v25);
			a1[2] -= 16i64;
		}
		v26 = (int*)sub_14034BDD0(v20, *(_DWORD*)(*(_QWORD*)(v6 + 8) + 40i64));
		if (v26)
		{
			v28 = 0i64;
			if (*(_WORD*)v26)
			{
				do
					++v28;
				while (*((_WORD*)v26 + v28));
			}
			sub_14001C480((__int64)v44, v26, (int*)((char*)v26 + 2 * v28));
			sub_1400B7660(&v43);
			v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
			v30 = a1[2];
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v31, L"strPrimaryTargetTooltip", v32);
			a1[2] -= 16i64;
		}
		v33 = (int*)sub_14034BDD0(v27, *(_DWORD*)(*(_QWORD*)(v6 + 8) + 44i64));
		if (v33)
		{
			if (*(_WORD*)v33)
			{
				do
					++v10;
				while (*((_WORD*)v33 + v10));
			}
			sub_14001C480((__int64)v44, v33, (int*)((char*)v33 + 2 * v10));
			sub_1400B7660(&v43);
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
			v35 = a1[2];
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v36, L"strSecondaryTargetTooltip", v37);
			a1[2] -= 16i64;
		}
		v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
		v39 = a1[2];
		*(_QWORD*)v39 = *v38;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
		v40 = v45;
		a1[2] += 16i64;
		if (v40)
			sub_14018B900(v40, 0);
		sub_1400B7390(&v43);
		sub_1400579E0((__int64)a1, v41, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1405EB06E: variable 'v17' is possibly undefined
// 1405EB06E: variable 'v18' is possibly undefined
// 1405EB07F: variable 'v13' is possibly undefined
// 1405EB0F1: variable 'v24' is possibly undefined
// 1405EB0F1: variable 'v25' is possibly undefined
// 1405EB102: variable 'v20' is possibly undefined
// 1405EB174: variable 'v31' is possibly undefined
// 1405EB174: variable 'v32' is possibly undefined
// 1405EB185: variable 'v27' is possibly undefined
// 1405EB1F5: variable 'v36' is possibly undefined
// 1405EB1F5: variable 'v37' is possibly undefined
// 1405EB24E: variable 'v41' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23618: using guessed type wchar_t aStrsecondaryta[26];
// 140B23660: using guessed type wchar_t aStrcastertoolt[17];
// 140B23688: using guessed type wchar_t aStrprimarytarg[24];
// 140B236B8: using guessed type wchar_t aStrlastooltip[14];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

