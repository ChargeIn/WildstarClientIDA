#include "../winhttp.h"

//----- (0000000140790AA0) ----------------------------------------------------
__int64 __fastcall sub_140790AA0(_QWORD* a1, int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v5; // r14
	bool v6; // cf
	_DWORD* v7; // rcx
	int v8; // ebx
	const char* v9; // rsi
	unsigned __int64 v10; // r13
	__int64 v11; // r12
	_DWORD* v12; // rax
	__int64 v13; // rcx
	const char* v14; // r9
	const char* v15; // rax
	_DWORD* v16; // rcx
	unsigned __int64 v17; // r15
	char* v18; // rbp
	_DWORD* v19; // rax
	__int64 v20; // rcx
	const char* v21; // rax
	_DWORD* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rsi
	__int64 v25; // rsi
	int v26; // eax
	unsigned __int64 v27; // rax
	__int64 v28; // rdx
	int v29; // r15d
	int v30; // ecx
	__int64 result; // rax
	__int64 v32; // rcx
	int v33; // ecx
	unsigned __int8* v34; // rsi
	__int64 v35; // r14
	__int64 v36; // r8
	unsigned __int64 v37; // rcx
	__int64 v38; // rax
	__m128i v39; // xmm0
	_QWORD* v40; // rsi
	__int64 v41; // rcx
	__int64 v42; // rax
	int v43; // edi
	__int64 v45; // [rsp+30h] [rbp-258h] BYREF
	unsigned __int64 v46; // [rsp+38h] [rbp-250h]
	_QWORD* v47; // [rsp+40h] [rbp-248h]
	int v48; // [rsp+48h] [rbp-240h]

	v3 = (_DWORD*)a1[3];
	v5 = dword_140A12138;
	v6 = (unsigned __int64)v3 < a1[2];
	v7 = dword_140A12138;
	if (v6)
		v7 = v3;
	v8 = 0;
	v9 = aNoValue;
	if (v7[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v7))
		{
		LABEL_10:
			v12 = (_DWORD*)a1[3];
			if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || (v13 = (int)v12[2], (_DWORD)v13 == -1))
				v14 = aNoValue;
			else
				v14 = off_140A123B0[v13];
			v15 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v14);
			sub_140056570(a1, 1u, v15);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = dword_140A12138;
		if (a1[3] < a1[2])
			v7 = (_DWORD*)a1[3];
	}
	v10 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	v11 = *(_QWORD*)v7 + 32i64;
	if (*(_QWORD*)v7 == -32i64)
		goto LABEL_10;
	v16 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v16 = (_DWORD*)(a1[3] + 16i64);
	if (v16[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v16))
		{
		LABEL_25:
			v19 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v19 < a1[2] && v19 != dword_140A12138)
			{
				v20 = *(int*)(a1[3] + 24i64);
				if ((_DWORD)v20 != -1)
					v9 = off_140A123B0[v20];
			}
			v21 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v9);
			sub_140056570(a1, 2u, v21);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v16 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v16 = (_DWORD*)(a1[3] + 16i64);
	}
	v17 = *(_QWORD*)(*(_QWORD*)v16 + 16i64);
	v18 = (char*)(*(_QWORD*)v16 + 32i64);
	if (*(_QWORD*)v16 == -32i64)
		goto LABEL_25;
	v22 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v22 >= a1[2] || v22 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		LODWORD(v23) = 1;
	else
		LODWORD(v23) = sub_140056D60(a1, 3u);
	v23 = (int)v23;
	if ((int)v23 < 0i64)
		v23 = v10 + (int)v23 + 1i64;
	v24 = 0i64;
	if (v23 >= 0)
		v24 = v23;
	v25 = v24 - 1;
	if (v25 >= 0)
	{
		if (v25 > v10)
			v25 = v10;
	}
	else
	{
		v25 = 0i64;
	}
	if (!a2)
		goto LABEL_52;
	if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
		v5 = (_DWORD*)(a1[3] + 48i64);
	if ((v26 = v5[2]) != 0 && (v26 != 1 || *v5) || !sub_140901194(v18, (unsigned __int8*)asc_140C39F18, a3))
	{
		v27 = sub_140790870(v11 + v25, v10 - v25, v18, v17);
		if (v27)
		{
			v28 = a1[2];
			*(_DWORD*)(v28 + 8) = 3;
			v29 = v27 + v17 - v11;
			v30 = v27 - v11 + 1;
			result = 2i64;
			*(double*)v28 = (double)v30;
			a1[2] += 16i64;
			v32 = a1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = (double)v29;
			a1[2] += 16i64;
		}
		else
		{
		LABEL_59:
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
	LABEL_52:
		if (*v18 == 94)
		{
			++v18;
			v33 = 1;
		}
		else
		{
			v33 = 0;
		}
		v34 = (unsigned __int8*)(v11 + v25);
		v47 = a1;
		v45 = v11;
		v35 = v33;
		v46 = v11 + v10;
		while (1)
		{
			v48 = 0;
			v36 = sub_1407905D0((__int64)&v45, v34, v18);
			if (v36)
				break;
			v37 = (unsigned __int64)v34++;
			if (v37 >= v46 || v35)
				goto LABEL_59;
		}
		if (a2)
		{
			v38 = a1[2];
			*(_DWORD*)(v38 + 8) = 3;
			v39 = _mm_cvtsi32_si128((int)v34 - (int)v11 + 1);
			v40 = v47;
			v41 = (__int64)v47;
			*(_QWORD*)v38 = *(_OWORD*)&_mm_cvtepi32_pd(v39);
			a1[2] += 16i64;
			v42 = a1[2];
			*(_DWORD*)(v42 + 8) = 3;
			*(double*)v42 = (double)((int)v36 - (int)v11);
			a1[2] += 16i64;
			v43 = v48;
			if (!(unsigned int)sub_140058190(v41, v48))
				sub_140056830(v40, (unsigned __int64*)"stack overflow (%s)", aTooManyCapture_0);
			if (v43 > 0)
			{
				do
					sub_140790910((__int64)&v45, v8++, 0i64, 0i64);
				while (v8 < v43);
			}
			return (unsigned int)(v43 + 2);
		}
		else
		{
			return sub_1407909F0((__int64)&v45, (unsigned __int64*)v34, v36);
		}
	}
	return result;
}
// 140790CDD: variable 'a3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

