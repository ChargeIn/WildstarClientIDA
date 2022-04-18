#include "../winhttp.h"

//----- (000000014072ABC0) ----------------------------------------------------
__int64 __fastcall sub_14072ABC0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx
	unsigned int* v8; // r14
	__int64 v9; // rbx
	__int64 v10; // r15
	unsigned int v11; // edi
	__int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rax
	int* v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // rdi
	int* v19; // rbx
	__int64 v20; // r14
	__int64 v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // [rsp+20h] [rbp-49h] BYREF
	__int64 v31; // [rsp+28h] [rbp-41h]
	__int64 v32; // [rsp+30h] [rbp-39h]
	__int64 v33; // [rsp+38h] [rbp-31h]
	int v34; // [rsp+40h] [rbp-29h] BYREF
	__int64 v35; // [rsp+48h] [rbp-21h] BYREF
	__int64 v36; // [rsp+50h] [rbp-19h]
	__int64 v37; // [rsp+58h] [rbp-11h]
	__int64 v38; // [rsp+60h] [rbp-9h]
	__int64 v39; // [rsp+68h] [rbp-1h]
	__int64 v40; // [rsp+70h] [rbp+7h]
	__int64 v41; // [rsp+78h] [rbp+Fh]
	int v42[4]; // [rsp+80h] [rbp+17h] BYREF

	v1 = *(unsigned int*)(a1 + 80);
	v2 = *(_QWORD*)(a1 + 1184);
	v36 = 1065353216i64;
	v4 = *(_QWORD*)(v2 + 80);
	v35 = (unsigned int)dword_140C39700[v1];
	v37 = 0i64;
	v38 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v35);
	*(_DWORD*)(v2 + 88) = v1;
	if (!*(_DWORD*)(a1 + 28))
	{
		sub_140729890(a1);
		v5 = *(_QWORD*)(a1 + 1168);
		*(_DWORD*)(a1 + 20) = 2;
		return sub_14078B410(v5);
	}
	v7 = *(_QWORD*)(a1 + 1160);
	*(_DWORD*)(a1 + 20) = 12;
	v30 = 1120i64;
	v31 = 1065353216i64;
	v32 = 0i64;
	v33 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v30);
	v8 = (unsigned int*)(a1 + 44);
	v9 = 0i64;
	v10 = 3i64;
	v39 = 0i64;
	v40 = 0i64;
	v41 = 0i64;
	v35 = 0i64;
	v36 = 0i64;
	v37 = 0i64;
	do
	{
		v11 = *v8;
		if (qword_140C63840)
		{
			v12 = qword_140C63840(off_140A690C8, v11, qword_140C63858);
		}
		else
		{
			if (dword_140C64170 || (int)sub_1401E89C0() < 0)
				goto LABEL_14;
			v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v11);
		}
		v13 = v12;
		if (v12)
		{
			v34 = *(_DWORD*)(v12 + 72);
			if (v34)
			{
				v15 = sub_140484600(qword_140C65918 + 80, &v34);
				v14 = sub_1404846C0((__int64)v15);
			}
			else
			{
				v14 = 0i64;
			}
			v16 = *(_DWORD*)(v13 + 8);
			v17 = qword_140C658F0;
			*(__int64*)((char*)&v39 + v9) = v14;
			*(__int64*)((char*)&v35 + v9) = (__int64)sub_1400B5DF0(v17, v16, 0i64);
		}
	LABEL_14:
		if (!*(__int64*)((char*)&v39 + v9))
			*(__int64*)((char*)&v39 + v9) = *(_QWORD*)(a1 + 1200);
		++v8;
		v9 += 8i64;
		--v10;
	} while (v10);
	*(_DWORD*)(a1 + 1256) = 0;
	v18 = 0i64;
	v19 = v42;
	v20 = 3i64;
	do
	{
		if (*(int*)((char*)v19 + a1 - (_QWORD)v42 + 56))
		{
			v21 = *(_QWORD*)(a1 + 1272);
			++* (_DWORD*)(a1 + 1256);
			v22 = qword_140C665E0;
			*v19 = 5;
			v23 = v18 + v21;
			if (v23 && v22)
				Apollo_LUAEvent(
					*(_QWORD*)(v22 + 1424),
					"CardFlipped",
					byte_1409F8DC4,
					(unsigned int)(*(_DWORD*)(v23 + 40) + 1),
					v30,
					v31,
					v32,
					v33);
		}
		else
		{
			*v19 = 3;
		}
		v18 += 152i64;
		++v19;
		--v20;
	} while (v20);
	if (*(_DWORD*)(a1 + 32) == 2)
	{
		v24 = *(_QWORD*)(a1 + 1272);
		v25 = *(_QWORD*)(v24 + 136);
		*(_DWORD*)(v24 + 88) = 1;
		if (v25)
		{
			v30 = 1110i64;
			v31 = 1065353216i64;
			v32 = 0i64;
			v33 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v25 + 584i64))(v25, 0i64, &v30);
		}
	}
	if (*(_DWORD*)(a1 + 36) == 2)
	{
		v26 = *(_QWORD*)(a1 + 1272);
		v27 = *(_QWORD*)(v26 + 288);
		*(_DWORD*)(v26 + 240) = 1;
		if (v27)
		{
			v30 = 1110i64;
			v31 = 1065353216i64;
			v32 = 0i64;
			v33 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v27 + 584i64))(v27, 0i64, &v30);
		}
	}
	if (*(_DWORD*)(a1 + 40) == 2)
	{
		v28 = *(_QWORD*)(a1 + 1272);
		v29 = *(_QWORD*)(v28 + 440);
		*(_DWORD*)(v28 + 392) = 1;
		if (v29)
		{
			v30 = 1110i64;
			v31 = 1065353216i64;
			v32 = 0i64;
			v33 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v29 + 584i64))(v29, 0i64, &v30);
		}
	}
	result = sub_14078A1A0(*(_QWORD*)(a1 + 1272), v39, v35, v42[0]);
	if ((int)result >= 0)
	{
		result = sub_14078A1A0(*(_QWORD*)(a1 + 1272) + 152i64, v40, v36, v42[1]);
		if ((int)result >= 0)
			result = sub_14078A1A0(*(_QWORD*)(a1 + 1272) + 304i64, v41, v37, v42[2]);
	}
	*(_DWORD*)(a1 + 1260) = 0;
	return result;
}
// 1409F8DC4: using guessed type _BYTE byte_1409F8DC4[48];
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C39700: using guessed type _DWORD dword_140C39700[16];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C665E0: using guessed type __int64 qword_140C665E0;

