#include "../winhttp.h"

//----- (000000014010B160) ----------------------------------------------------
__int64 __fastcall sub_14010B160(char* a1, _QWORD* a2, __int64 a3)
{
	__int64 v3; // r12
	__int64 v7; // rax
	__m128i* v8; // rax
	wchar_t** v9; // rdi
	__int64 v10; // rax
	const __m128i* v11; // rax
	const __m128i* v12; // rbx
	__int64 v13; // rax
	const __m128i* v14; // rax
	__int64 v15; // rdi
	const wchar_t* v16; // rbx
	wchar_t* v17; // rax
	int v18; // ecx
	bool v19; // zf
	__int64 result; // rax
	unsigned __int16* v21; // rax

	v3 = a2[46];
	v7 = sub_1401A6B80(a3, L"Auto");
	if (!v7 || (v8 = (__m128i*)sub_1401A4F40(v7 + 32)) == 0i64)
	{
		v9 = off_140A33098;
		while (1)
		{
			v10 = sub_1401A6B80(a3, *v9);
			if (!v10)
				break;
			v11 = (const __m128i*)sub_1401A4F40(v10 + 32);
			v12 = v11;
			if (!v11 || !v11->m128i_i16[0] || ((a2[43] - a2[42]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
				break;
			v13 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v11);
			if (!v13)
			{
				v14 = sub_1407DF6E0(v12, stru_1409D5204);
				if (!v14)
					break;
				v13 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v14->m128i_i64 + 2);
			}
		LABEL_13:
			*(wchar_t**)((char*)v9++ + a1 - (char*)off_140A33098 + 16) = (wchar_t*)v13;
			if ((__int64)v9 >= (__int64)off_140A330C8)
				goto LABEL_14;
		}
		v13 = 0i64;
		goto LABEL_13;
	}
	sub_14010B330(a1, (__int64)a2, v8, 0i64);
LABEL_14:
	v15 = *(_QWORD*)(a3 + 96);
	if (!v15)
		goto LABEL_26;
	while (1)
	{
		v16 = L"WindowSoundTemplate";
		v17 = (wchar_t*)sub_1401A4F40(v15 + 8);
		if (v17 == L"WindowSoundTemplate")
			break;
		v18 = 0;
		if (*v17)
		{
			do
			{
				if (!*v16 || *v17 != *v16)
					break;
				v19 = v18 == 0x7FFFFFFF;
				if (v18 == 0x7FFFFFFF)
					goto LABEL_22;
				++v17;
				++v16;
				++v18;
			} while (*v17);
			v19 = v18 == 0x7FFFFFFF;
		LABEL_22:
			if (v19)
				break;
		}
		if (!*v17 && !*v16)
			break;
		v15 = *(_QWORD*)(v15 + 56);
		if (!v15)
			goto LABEL_26;
	}
	v21 = (unsigned __int16*)sub_1401A4F40(v15 + 32);
	if (v21)
	{
		result = sub_14010DC00(v3, v21);
		*((_QWORD*)a1 + 8) = result;
	}
	else
	{
	LABEL_26:
		result = v3 + 72;
		*((_QWORD*)a1 + 8) = v3 + 72;
	}
	return result;
}
// 14010B302: conditional instruction was optimized away because rdi.8!=0
// 1409D5204: using guessed type __m128i stru_1409D5204[10];
// 140A31820: using guessed type wchar_t aWindowsoundtem[20];
// 140A32928: using guessed type wchar_t aAuto[5];
// 140A33098: using guessed type wchar_t *off_140A33098[25];
// 140A330C8: using guessed type wchar_t *off_140A330C8[19];

