#include "../winhttp.h"

//----- (000000014011EB60) ----------------------------------------------------
__int64 __fastcall sub_14011EB60(_QWORD* a1)
{
	char* v2; // rax
	unsigned __int16* v3; // rbx
	__int64 v4; // rcx
	_DWORD* v5; // rsi
	__int64 result; // rax
	int v7; // edx
	_DWORD* v8; // r8
	bool v9; // zf
	int v10; // edx
	double v11; // xmm0_8
	__int64 v12; // r8
	int v13; // edx
	int v14; // edx
	int v15; // edx
	int v16; // edx
	unsigned __int16* v17; // rbx
	unsigned __int64 v18; // r8
	unsigned __int16* v19; // rcx
	__int64 v20; // rdx
	int v21; // ebx
	int v22; // edi
	int v23; // esi
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	__int64 v27; // r8
	unsigned __int64* v28; // rbx
	unsigned __int64 v29; // r8
	__int64 v30; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int16* v31; // [rsp+28h] [rbp-40h]
	__int64 v32; // [rsp+40h] [rbp-28h] BYREF
	unsigned __int64* v33; // [rsp+48h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v30, v2);
	v3 = v31;
	v5 = (_DWORD*)sub_14019D200(v4, v31);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	if (!v5)
		return 0i64;
	switch ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 8i64))(v5))
	{
	case 0u:
		v7 = v5[4];
		v8 = (_DWORD*)a1[2];
		if (*(_DWORD*)qword_140C63750 < v7)
			v7 = *(_DWORD*)qword_140C63750;
		v9 = *((_BYTE*)v5 + v7 + 32) == 0;
		v8[2] = 1;
		*v8 = !v9;
		a1[2] += 16i64;
		goto LABEL_41;
	case 1u:
		v10 = v5[4];
		if (*(_DWORD*)qword_140C63750 < v10)
			v10 = *(_DWORD*)qword_140C63750;
		v11 = (double)(int)v5[v10 + 8];
		goto LABEL_12;
	case 3u:
		v13 = v5[4];
		if (*(_DWORD*)qword_140C63750 < v13)
			v13 = *(_DWORD*)qword_140C63750;
		v11 = (double)(int)v5[v13 + 8];
		goto LABEL_12;
	case 5u:
		v14 = v5[4];
		if (*(_DWORD*)qword_140C63750 < v14)
			v14 = *(_DWORD*)qword_140C63750;
		v11 = *(float*)&v5[v14 + 8];
	LABEL_12:
		v12 = a1[2];
		*(double*)v12 = v11;
		*(_DWORD*)(v12 + 8) = 3;
		a1[2] += 16i64;
		goto LABEL_41;
	case 9u:
		v20 = (unsigned int)v5[4];
		if (*(_DWORD*)qword_140C63750 < (int)v20)
			v20 = *(unsigned int*)qword_140C63750;
		v21 = v5[3 * (int)v20 + 8];
		v22 = v5[3 * (int)v20 + 9];
		v23 = v5[3 * (int)v20 + 10];
		sub_140058900((__int64)a1, v20, 0);
		sub_1400EFF50((__int64)a1, v24, (unsigned __int64*)"x", v21);
		sub_1400EFF50((__int64)a1, v25, (unsigned __int64*)"y", v22);
		sub_1400EFF50((__int64)a1, v26, (unsigned __int64*)"z", v23);
		goto LABEL_41;
	case 0xCu:
		v15 = v5[4];
		if (*(_DWORD*)qword_140C63750 < v15)
			v15 = *(_DWORD*)qword_140C63750;
		sub_1401181F0(a1, &v5[4 * v15 + 8]);
		goto LABEL_41;
	case 0xDu:
		v16 = v5[4];
		if (*(_DWORD*)qword_140C63750 < v16)
			v16 = *(_DWORD*)qword_140C63750;
		sub_14018F0E0(&v30, *(unsigned __int16**)&v5[8 * v16 + 10]);
		v17 = v31;
		if (v31)
		{
			v18 = -1i64;
			do
				++v18;
			while (*((_BYTE*)v31 + v18));
			sub_140058710((__int64)a1, (unsigned __int64*)v31, v18);
			v19 = v17;
		LABEL_40:
			sub_14018B900((__int64)v19, 0);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	LABEL_41:
		result = 1i64;
		break;
	default:
		v27 = (unsigned int)v5[4];
		if (*(_DWORD*)qword_140C63750 < (int)v27)
			v27 = *(unsigned int*)qword_140C63750;
		(*(void(__fastcall**)(_DWORD*, __int64*, __int64))(*(_QWORD*)v5 + 16i64))(v5, &v30, v27);
		sub_14018F0E0(&v32, v31);
		v28 = v33;
		if (v33)
		{
			v29 = -1i64;
			do
				++v29;
			while (*((_BYTE*)v33 + v29));
			sub_140058710((__int64)a1, v33, v29);
			sub_14018B900((__int64)v28, 0);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v19 = v31;
		if (v31)
			goto LABEL_40;
		goto LABEL_41;
	}
	return result;
}
// 14011EB93: variable 'v4' is possibly undefined
// 14011ED5F: variable 'v24' is possibly undefined
// 14011ED71: variable 'v25' is possibly undefined
// 14011ED83: variable 'v26' is possibly undefined
// 140C63750: using guessed type __int64 qword_140C63750;

