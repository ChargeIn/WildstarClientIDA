#include "../winhttp.h"

//----- (00000001407324B0) ----------------------------------------------------
__int64 __fastcall sub_1407324B0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	int v9; // r9d
	__int64 v10; // rbx
	unsigned int v11; // edi
	__int64 v12; // rax
	int* v13; // r15
	__int64 v14; // rdi
	__int64 v15; // rax
	int v16; // eax
	int v17; // r13d
	int v18; // r12d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // r14
	unsigned __int64 v22; // rbp
	__int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	unsigned __int16* v31; // r10
	_QWORD* v32; // rax
	__int64 v33; // r11
	__int64 v34; // rdx
	unsigned __int16* v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v40; // r10
	_DWORD* v41; // rcx
	__int64 v42; // r8
	__int64 v43; // rdx
	__int64(__fastcall * *v45)(); // [rsp+20h] [rbp-68h] BYREF
	int v46; // [rsp+28h] [rbp-60h]
	__int64 v47; // [rsp+30h] [rbp-58h]
	int v48; // [rsp+38h] [rbp-50h]
	_QWORD v49[4]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v50; // [rsp+90h] [rbp+8h]
	double v51; // [rsp+90h] [rbp+8h]

	v47 = a1;
	v1 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v45 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v4 = qword_140C659F8;
	v50 = qword_140C659F8;
	v48 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	v7 = sub_1400578C0(v1);
	v8 = *(_QWORD*)(v4 + 232);
	v9 = v7;
	v46 = v7;
	v10 = *(_QWORD*)(v8 + 16);
	if (v10 != v8)
	{
		while (1)
		{
			v11 = *(_DWORD*)(v10 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C6539C && (int)sub_1401F44C0() >= 0)
			{
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65158 + 24i64))(qword_140C65158, v11);
			LABEL_9:
				v13 = (int*)v12;
				if (v12)
				{
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v14 = *(_QWORD*)(v1 + 16);
					v15 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v14 + 8) = 5;
					*(_QWORD*)v14 = v15;
					*(_QWORD*)(v1 + 16) += 16i64;
					v16 = sub_1400578C0(v1);
					v17 = *v13;
					v18 = v16;
					v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v16);
					v20 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v20 = *v19;
					*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					v21 = (unsigned __int64*)sub_14018F0E0(v49, L"id")[1];
					if (v21)
					{
						v22 = -1i64;
						do
							++v22;
						while (*((_BYTE*)v21 + v22));
						if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
							sub_14005E2C0(v1);
						v23 = *(_QWORD*)(v1 + 16);
						v24 = sub_140062650(v1, v21, v22);
						v4 = v50;
						*(_DWORD*)(v23 + 8) = 4;
						*(_QWORD*)v23 = v24;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					}
					v25 = v49[1];
					*(_QWORD*)(v1 + 16) += 16i64;
					if (v25)
						sub_14018B900(v25, 0);
					v26 = *(_QWORD*)(v1 + 16);
					*(_DWORD*)(v26 + 8) = 3;
					*(double*)v26 = (double)v17;
					*(_QWORD*)(v1 + 16) += 16i64;
					v27 = (__int64*)sub_1400580E0(v1, -3);
					sub_14005EA50(v1, v27, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
					*(_QWORD*)(v1 + 16) -= 48i64;
					sub_14034BDD0(v28, v13[4]);
					v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v18);
					v30 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v30 = *v29;
					*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v30, L"strName", v31);
					*(_QWORD*)(v1 + 16) -= 16i64;
					v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v18);
					*(_QWORD*)v33 = *v32;
					*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v34, L"strPreviewSwatch", v35);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v45);
					sub_1400579E0(v1, v36, v18);
				}
			}
			v37 = *(_QWORD*)(v10 + 24);
			if (v37)
			{
				v10 = *(_QWORD*)(v10 + 24);
				for (i = *(_QWORD*)(v37 + 16); i; i = *(_QWORD*)(i + 16))
					v10 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = j;
				if (*(_QWORD*)(v10 + 24) != j)
					v10 = j;
			}
			if (v10 == *(_QWORD*)(v4 + 232))
			{
				v1 = v47;
				v9 = v46;
				goto LABEL_32;
			}
		}
		v12 = qword_140C63840(off_140A69A68, v11, qword_140C63858);
		goto LABEL_9;
	}
LABEL_32:
	v40 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v40 + 56))
	{
		if ((double)v9 == 0.0)
		{
			v41 = *(_DWORD**)(v40 + 32);
		}
		else
		{
			v51 = (double)v9;
			v41 = (_DWORD*)(*(_QWORD*)(v40 + 32)
				+ 40 * ((unsigned int)(LODWORD(v51) + HIDWORD(v51)) % (((1i64 << *(_BYTE*)(v40 + 11)) - 1) | 1)));
		}
		while (v41[6] != 3 || (double)v9 != *((double*)v41 + 2))
		{
			v41 = (_DWORD*)*((_QWORD*)v41 + 4);
			if (!v41)
			{
				v41 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v41 = (_DWORD*)(*(_QWORD*)(v40 + 24) + 16i64 * (v9 - 1));
	}
	v42 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v42 = *(_QWORD*)v41;
	v43 = (unsigned int)v41[2];
	*(_DWORD*)(v42 + 8) = v43;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v43, v9);
	return 1i64;
}
// 1407326F4: variable 'v28' is possibly undefined
// 140732731: variable 'v31' is possibly undefined
// 140732788: variable 'v33' is possibly undefined
// 14073279A: variable 'v34' is possibly undefined
// 14073279A: variable 'v35' is possibly undefined
// 1407327B7: variable 'v36' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69A68: using guessed type wchar_t *off_140A69A68[2];
// 140B472B0: using guessed type wchar_t aStrpreviewswat[17];
// 140B472D8: using guessed type wchar_t aStrname_95[8];
// 140B472E8: using guessed type wchar_t aId_23[3];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65158: using guessed type __int64 qword_140C65158;
// 140C6539C: using guessed type int dword_140C6539C;
// 140C659F8: using guessed type __int64 qword_140C659F8;

