#include "../winhttp.h"

//----- (00000001406523C0) ----------------------------------------------------
__int64 __fastcall sub_1406523C0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int128 v5; // xmm0
	unsigned __int64 v6; // rax
	__int64(__fastcall * **v7)(); // rcx
	int v8; // r14d
	int v9; // eax
	unsigned int v10; // esi
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // r15d
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rcx
	unsigned __int64 v20; // rsi
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	_DWORD* v23; // rcx
	__int64* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // eax
	float v28; // xmm6_4
	int v29; // ebx
	_QWORD* v30; // rax
	__int64 v31; // rcx
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	__int64 v34; // rax
	__int64* v35; // rax
	float v36; // xmm6_4
	_QWORD* v37; // rax
	__int64 v38; // r11
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	__int64 v41; // rax
	__int64* v42; // rax
	float v43; // xmm6_4
	_QWORD* v44; // rax
	__int64 v45; // r11
	unsigned __int64* v46; // rdx
	__int64 v47; // rax
	__int64* v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // rdx
	__int64 v51; // rdx
	__int128 v53; // [rsp+20h] [rbp-78h] BYREF
	__int64(__fastcall * *v54)(); // [rsp+30h] [rbp-68h] BYREF
	int v55; // [rsp+38h] [rbp-60h]
	_QWORD* v56; // [rsp+40h] [rbp-58h]
	int v57; // [rsp+48h] [rbp-50h]
	__int64 v58; // [rsp+50h] [rbp-48h] BYREF
	__int64 v59; // [rsp+58h] [rbp-40h]
	__int64(__fastcall * *v60)(); // [rsp+A8h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2), (v4 = v3) == 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = *(_OWORD*)(v3 + 4576);
	v6 = a1[3] + 16i64;
	v53 = v5;
	v7 = (__int64(__fastcall***)())dword_140A12138;
	if (v6 < a1[2])
		v7 = (__int64(__fastcall***)())v6;
	v8 = 0;
	v9 = *((_DWORD*)v7 + 2);
	if (v9 == 3)
		goto LABEL_9;
	if (v9 == 4 && sub_14005AC80((char*)*v7 + 32, (unsigned __int64*)&v60))
	{
		v55 = 3;
		v7 = &v54;
		v54 = v60;
	LABEL_9:
		v10 = (int)*(double*)v7;
		goto LABEL_10;
	}
	v10 = 0;
LABEL_10:
	v11 = *(_QWORD*)(v4 + 5864);
	if (v11 && (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 848i64))(v11, v10))
	{
		v8 = 1;
		(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, _QWORD))(**(_QWORD**)(v4 + 5864) + 872i64))(
			*(_QWORD*)(v4 + 5864),
			v10,
			&v53,
			0i64);
	}
	v12 = a1[4];
	v56 = a1;
	v54 = off_140B569F0;
	v13 = *(_QWORD*)(v12 + 112);
	v57 = 1;
	if (*(_QWORD*)(v12 + 120) >= v13)
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	v17 = *(_QWORD*)(a1[4] + 160i64);
	v55 = v16;
	v18 = sub_14005C3C0(v17, v16);
	v19 = a1[2];
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	v20 = -1i64;
	v21 = (unsigned __int64*)sub_14018F0E0(&v58, L"bFound")[1];
	if (v21)
	{
		v22 = -1i64;
		do
			++v22;
		while (*((_BYTE*)v21 + v22));
		sub_140058710((__int64)a1, v21, v22);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v59)
		sub_14018B900(v59, 0);
	v23 = (_DWORD*)a1[2];
	v23[2] = 1;
	*v23 = v8 != 0;
	a1[2] += 16i64;
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v25 = a1[2];
	v26 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	*(_QWORD*)v25 = v26;
	a1[2] += 16i64;
	v27 = sub_1400578C0((__int64)a1);
	v28 = *(float*)&v53;
	v29 = v27;
	v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v27);
	v31 = a1[2];
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	a1[2] += 16i64;
	v32 = (unsigned __int64*)sub_14018F0E0(&v58, (unsigned __int16*)"x")[1];
	if (v32)
	{
		v33 = -1i64;
		do
			++v33;
		while (*((_BYTE*)v32 + v33));
		sub_140058710((__int64)a1, v32, v33);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v59)
		sub_14018B900(v59, 0);
	v34 = a1[2];
	*(_DWORD*)(v34 + 8) = 3;
	*(double*)v34 = v28;
	a1[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v36 = *((float*)&v53 + 1);
	v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v29);
	*(_QWORD*)v38 = *v37;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
	a1[2] += 16i64;
	v39 = (unsigned __int64*)sub_14018F0E0(&v58, word_1409F4484)[1];
	if (v39)
	{
		v40 = -1i64;
		do
			++v40;
		while (*((_BYTE*)v39 + v40));
		sub_140058710((__int64)a1, v39, v40);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v59)
		sub_14018B900(v59, 0);
	v41 = a1[2];
	*(_DWORD*)(v41 + 8) = 3;
	*(double*)v41 = v36;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v43 = *((float*)&v53 + 2);
	v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v29);
	*(_QWORD*)v45 = *v44;
	*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
	a1[2] += 16i64;
	v46 = (unsigned __int64*)sub_14018F0E0(&v58, (unsigned __int16*)"z")[1];
	if (v46)
	{
		do
			++v20;
		while (*((_BYTE*)v46 + v20));
		sub_140058710((__int64)a1, v46, v20);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v59)
		sub_14018B900(v59, 0);
	v47 = a1[2];
	*(_DWORD*)(v47 + 8) = 3;
	*(double*)v47 = v43;
	a1[2] += 16i64;
	v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	sub_1400FB2A0((__int64)&v54, (__int64)L"tLocation", v29);
	v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	v50 = a1[2];
	*(_QWORD*)v50 = *v49;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v50, v29);
	sub_1400579E0((__int64)a1, v51, v16);
	return 1i64;
}
// 140652724: variable 'v38' is possibly undefined
// 1406527E7: variable 'v45' is possibly undefined
// 1406528D1: variable 'v51' is possibly undefined
// 1409F4484: using guessed type unsigned __int16 word_1409F4484[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B2C750: using guessed type wchar_t aTlocation[10];
// 140B2C768: using guessed type wchar_t aBfound[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

