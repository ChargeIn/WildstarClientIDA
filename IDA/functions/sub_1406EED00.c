#include "../winhttp.h"

//----- (00000001406EED00) ----------------------------------------------------
__int64 __fastcall sub_1406EED00(__int64 a1, int a2, __int64** a3, __int64 a4)
{
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v10; // rax
	unsigned __int16* v11; // rsi
	_QWORD* v12; // r15
	__int64 v13; // rax
	int* v14; // rbp
	__int64 v15; // r14
	int* v16; // rax
	int* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // eax
	unsigned __int64 v24; // rcx
	int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	unsigned __int16* v30; // r10
	_QWORD* v31; // rax
	__int64 v32; // rdx
	unsigned __int16* v33; // r10
	_QWORD* v34; // rax
	__int64 v35; // rdx
	int v36; // r10d
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	int v46; // r11d
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	char v51[8]; // [rsp+20h] [rbp-128h] BYREF
	int* v52; // [rsp+28h] [rbp-120h]
	int* v53; // [rsp+30h] [rbp-118h]
	__int64 v54; // [rsp+38h] [rbp-110h]
	__int64 v55; // [rsp+40h] [rbp-108h] BYREF
	char v56[8]; // [rsp+48h] [rbp-100h] BYREF
	_WORD* v57; // [rsp+50h] [rbp-F8h]
	_WORD* v58; // [rsp+58h] [rbp-F0h]
	__int64 v59; // [rsp+100h] [rbp-48h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = sub_14005C1B0(a1, 0, 0);
	v9 = qword_140C65970;
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v9 && qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && *(_DWORD*)(v9 + 8) == 2 && a3 && a4)
	{
		sub_1404DDE90(&v55);
		v10 = sub_14018B280(96i64, 0);
		v11 = 0i64;
		if (v10)
			v12 = (_QWORD*)sub_1404DB7E0((__int64)v10, *(_QWORD*)(qword_140C65898 + 120));
		else
			v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		v52 = 0i64;
		v53 = 0i64;
		v54 = 0i64;
		do
			++v13;
		while (word_140B0A7D8[v13]);
		v15 = (2 * v13) >> 1;
		if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v14 = sub_14018B280(2 * (v15 + 1), 0);
			v52 = v14;
			v53 = v14;
			v54 = (__int64)v14 + 2 * v15 + 2;
		}
		sub_1407DB590(v14, (int*)word_140B0A7D8, 2 * v15);
		v16 = (int*)((char*)v14 + 2 * v15);
		v53 = v16;
		if (v16)
			*(_WORD*)v16 = 0;
		sub_1400B7480((__int64)&v55, v12);
		(*(void(__fastcall**)(_QWORD*, char*))(*v12 + 72i64))(v12, v51);
		if (v52)
			sub_14018B900((__int64)v52, 0);
		v17 = (int*)sub_14034BDD0(*a3[6], *(_DWORD*)(*a3[6] + 28));
		if (v17)
		{
			v18 = 0i64;
			if (*(_WORD*)v17)
			{
				do
					++v18;
				while (*((_WORD*)v17 + v18));
			}
			sub_14001C480((__int64)v56, v17, (int*)((char*)v17 + 2 * v18));
		}
		else if (v57 != v58)
		{
			*v57 = 0;
			v58 = v57;
		}
		v19 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v19 = 0x3FF0000000000000i64;
		*(_DWORD*)(v19 + 8) = 3;
		v20 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v20 + 120) >= *(_QWORD*)(v20 + 112))
			sub_14005E2C0(a1);
		v21 = *(_QWORD*)(a1 + 16);
		v22 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v21 + 8) = 5;
		*(_QWORD*)v21 = v22;
		*(_QWORD*)(a1 + 16) += 16i64;
		v23 = sub_1400578C0(a1);
		v24 = *(_QWORD*)(a4 + 8);
		v25 = v23;
		if (v24 && v24 <= qword_140C3FE70)
			v11 = (unsigned __int16*)(v24 + qword_140C3FE68);
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v23);
		v27 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v27, L"strIcon", v11);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_14034BDD0(*a3[6], *(_DWORD*)(*a3[6] + 24));
		v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		v29 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v29, L"strName", v30);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_1400B7660(&v55);
		v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		v32 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v32, L"strSummary", v33);
		*(_QWORD*)(a1 + 16) -= 16i64;
		((void(__fastcall*)(__int64**))(*a3)[8])(a3);
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		v35 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v35 = *v34;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v35, L"nCompleted", v36);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v39, L"nNeeded", 100);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		*(_QWORD*)v41 = *v40;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v42, L"nReceived", a2);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		*(_QWORD*)v44 = *v43;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v45, L"eType", v46);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
		*(_QWORD*)v48 = *v47;
		*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v49, v25);
		if (v59)
			sub_14018B900(v59, 0);
		sub_1400B7390(&v55);
	}
	return 1i64;
}
// 1406EF017: variable 'v30' is possibly undefined
// 1406EF063: variable 'v33' is possibly undefined
// 1406EF0AE: variable 'v36' is possibly undefined
// 1406EF0D1: variable 'v38' is possibly undefined
// 1406EF0F0: variable 'v39' is possibly undefined
// 1406EF122: variable 'v41' is possibly undefined
// 1406EF134: variable 'v42' is possibly undefined
// 1406EF165: variable 'v44' is possibly undefined
// 1406EF177: variable 'v45' is possibly undefined
// 1406EF177: variable 'v46' is possibly undefined
// 1406EF19D: variable 'v48' is possibly undefined
// 1406EF1AF: variable 'v49' is possibly undefined
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B3FD70: using guessed type wchar_t aEtype_41[6];
// 140B3FD80: using guessed type wchar_t aNreceived[10];
// 140B3FD98: using guessed type wchar_t aNneeded_6[8];
// 140B3FDA8: using guessed type wchar_t aNcompleted_5[11];
// 140B3FDC0: using guessed type wchar_t aStrsummary[11];
// 140B3FDD8: using guessed type wchar_t aStrname_82[8];
// 140B3FDE8: using guessed type wchar_t aStricon_16[8];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 1406EED00: using guessed type char var_128[8];
// 1406EED00: using guessed type char var_100[8];

