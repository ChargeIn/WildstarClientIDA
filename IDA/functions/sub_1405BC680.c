#include "../winhttp.h"

//----- (00000001405BC680) ----------------------------------------------------
__int64 __fastcall sub_1405BC680(__int64 a1, __int64 a2, __int64 a3)
{
	BOOL v3; // r15d
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // r10
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	__int64 v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // rax
	_QWORD* v19; // rcx
	int* v20; // rax
	int* v21; // rdx
	__int64 v22; // rax
	int* v23; // rax
	int* v24; // rsi
	int v25; // ebx
	__int64 v26; // rdx
	__int64 v27; // rax
	__int64 v28; // rbx
	int* v29; // rax
	_QWORD* v30; // r12
	int* v31; // rsi
	__int64 v32; // rax
	__int64 v34; // r15
	int* v35; // rax
	_QWORD* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rdx
	unsigned __int16* v39; // r11
	float v40; // xmm6_4
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	__int64 v44; // rbx
	unsigned __int64* v45; // rdx
	unsigned __int64 v46; // r8
	__int64 v47; // rax
	__int64* v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // r10
	__int64 v51; // rdx
	int v52; // r11d
	__int64 v54; // [rsp+28h] [rbp-E0h] BYREF
	int* v55; // [rsp+30h] [rbp-D8h]
	int* v56; // [rsp+38h] [rbp-D0h]
	__int64 v57; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * *v58)(); // [rsp+48h] [rbp-C0h] BYREF
	__int64 v59; // [rsp+50h] [rbp-B8h] BYREF
	_WORD* v60; // [rsp+58h] [rbp-B0h]
	_WORD* v61; // [rsp+60h] [rbp-A8h]
	__int128 v62; // [rsp+108h] [rbp+0h]
	int* v63; // [rsp+118h] [rbp+10h]
	int v64; // [rsp+168h] [rbp+60h] BYREF

	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = -2;
	v3 = 1;
	*(_QWORD*)a1 = off_140B569F0;
	*(_DWORD*)(a1 + 24) = 1;
	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v7 = *(_QWORD*)(a2 + 16);
	v8 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(a2 + 16) += 16i64;
	v9 = sub_1400578C0(a2);
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 8) = v9;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v10 + 32) + 160i64), v9);
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v13, L"idBuff", v14);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if ((unsigned int)sub_140649870(*(_QWORD**)(a1 + 16), *(_DWORD*)(a3 + 88)))
	{
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	if ((unsigned int)sub_140649870(*(_QWORD**)(a1 + 16), *(_DWORD*)(a3 + 84)))
	{
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v15 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a3 + 84));
	v16 = *(_DWORD*)(a3 + 80);
	if (v16)
	{
		if (v15)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) != v15)
				v3 = *(_QWORD*)(qword_140C65898 + 25744) == v15;
			v17 = 0i64;
			if (v3)
				v17 = qword_140C65898;
			if (v17)
			{
				v18 = sub_1405A5B90(v17, v16);
				if (v18)
					goto LABEL_16;
			}
		}
		v18 = sub_1407A0FD0(qword_140C65B70, v16);
		if (v18)
		{
		LABEL_16:
			v19 = *(_QWORD**)(a1 + 16);
			v64 = **(_DWORD**)(v18 + 112);
			if ((unsigned int)sub_1403D3470(v19, &v64))
			{
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
		}
	}
	sub_1400B6F30((__int64)&v58);
	v58 = off_140B69230;
	v63 = 0i64;
	v62 = 0i64;
	v20 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v62 = v20;
	*((_QWORD*)&v62 + 1) = v20;
	v63 = v20 + 4;
	if (v20)
		*(_WORD*)v20 = 0;
	v21 = (int*)sub_14034BDD0((__int64)(v20 + 4), *(_DWORD*)(a3 + 24));
	if (v21)
	{
		v22 = 0i64;
		if (*(_WORD*)v21)
		{
			do
				++v22;
			while (*((_WORD*)v21 + v22));
		}
		sub_14001C480((__int64)&v59, v21, (int*)((char*)v21 + 2 * v22));
	}
	else if (v60 != v61)
	{
		*v60 = 0;
		v61 = v60;
	}
	v23 = sub_14018B280(88i64, 0);
	v24 = v23;
	if (v23)
	{
		v25 = *(_DWORD*)(a3 + 16);
		sub_1400B6390(v23);
		v24[2] = v25;
		*(_QWORD*)v24 = off_140B69300;
		*((float*)v24 + 3) = (float)v25;
	}
	else
	{
		v24 = 0i64;
	}
	sub_1400B7480((__int64)&v58, v24);
	v26 = *(_QWORD*)(a3 + 72);
	if (v26)
	{
		v27 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(a3 + 64) + 4 * v26 - 4));
		v28 = v27;
		if (v27)
		{
			if (*(_WORD*)(v27 + 136))
			{
				v29 = sub_14018B280(88i64, 0);
				if (v29)
					v30 = (_QWORD*)sub_1404DDA70((__int64)v29, *(unsigned __int16*)(v28 + 136));
				else
					v30 = 0i64;
				v31 = 0i64;
				v55 = 0i64;
				v56 = 0i64;
				v57 = 0i64;
				v32 = 0i64;
				while (aCasteritemleve_1[++v32] != 0)
					;
				v34 = (2 * v32) >> 1;
				if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v31 = sub_14018B280(2 * (v34 + 1), 0);
					v55 = v31;
					v56 = v31;
					v57 = (__int64)v31 + 2 * v34 + 2;
				}
				sub_1407DB590(v31, (int*)L"CasterItemLevel", 2 * v34);
				v35 = (int*)((char*)v31 + 2 * v34);
				v56 = v35;
				if (v35)
					*(_WORD*)v35 = 0;
				sub_1400B7480((__int64)&v58, v30);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v30 + 72i64))(v30, &v54);
				if (v55)
					sub_14018B900((__int64)v55, 0);
			}
		}
	}
	sub_1400B7660(&v58);
	v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v38 = *(_QWORD*)(v37 + 16);
	*(_QWORD*)v38 = *v36;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v36 + 2);
	*(_QWORD*)(v37 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v38, L"strTooltip", v39);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v40 = (float)(int)sub_140453EE0((_DWORD*)a3) * 0.001;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v43 = *(_QWORD*)(v42 + 16);
	*(_QWORD*)v43 = *v41;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(v42 + 16) += 16i64;
	v44 = *(_QWORD*)(a1 + 16);
	v45 = (unsigned __int64*)sub_14018F0E0(&v54, L"fTimeRemaining")[1];
	if (v45)
	{
		v46 = -1i64;
		do
			++v46;
		while (*((_BYTE*)v45 + v46));
		sub_140058710(v44, v45, v46);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v44 + 16) + 8i64) = 0;
		*(_QWORD*)(v44 + 16) += 16i64;
	}
	if (v55)
		sub_14018B900((__int64)v55, 0);
	v47 = *(_QWORD*)(v44 + 16);
	*(_DWORD*)(v47 + 8) = 3;
	*(double*)v47 = v40;
	*(_QWORD*)(v44 + 16) += 16i64;
	v48 = (__int64*)sub_1400580E0(v44, -3);
	sub_14005EA50(v44, v48, (int*)(*(_QWORD*)(v44 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v44 + 16) - 16i64));
	*(_QWORD*)(v44 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v51 = *(_QWORD*)(v50 + 16);
	*(_QWORD*)v51 = *v49;
	*(_DWORD*)(v51 + 8) = *((_DWORD*)v49 + 2);
	*(_QWORD*)(v50 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v51, L"nCount", v52);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if ((_QWORD)v62)
		sub_14018B900(v62, 0);
	sub_1400B7390(&v58);
	return a1;
}
// 1405BC72B: variable 'v12' is possibly undefined
// 1405BC74E: variable 'v14' is possibly undefined
// 1405BC809: variable 'v16' is possibly undefined
// 1405BCA80: variable 'v37' is possibly undefined
// 1405BCAA3: variable 'v39' is possibly undefined
// 1405BCAE2: variable 'v42' is possibly undefined
// 1405BCBD2: variable 'v50' is possibly undefined
// 1405BCBF5: variable 'v52' is possibly undefined
// 140B213A8: using guessed type wchar_t aCasteritemleve_1[16];
// 140B213C8: using guessed type wchar_t aStrtooltip_0[11];
// 140B21410: using guessed type wchar_t aIdbuff[7];
// 140B214F0: using guessed type wchar_t aFtimeremaining[15];
// 140B21510: using guessed type wchar_t aNcount_30[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

