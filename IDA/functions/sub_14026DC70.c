#include "../winhttp.h"

//----- (000000014026DC70) ----------------------------------------------------
__int64 __fastcall sub_14026DC70(__int64 a1, __m128i* a2, int a3, int a4, int a5, int a6, int a7, int a8, __int64* a9)
{
	__int64* v9; // r14
	__m128i* v12; // rsi
	__int64 result; // rax
	__int64 v15; // r8
	int v16; // r13d
	unsigned __int64 v17; // rbp
	_QWORD* v18; // rbx
	int* v19; // rax
	unsigned int v20; // ebx
	__int64 v21; // rdi
	void(__fastcall * **v22)(_QWORD); // rcx
	int v23; // esi
	int v24; // [rsp+40h] [rbp-288h] BYREF
	int v25[6]; // [rsp+48h] [rbp-280h] BYREF
	__m128i* v26; // [rsp+60h] [rbp-268h]
	__int64 v27; // [rsp+68h] [rbp-260h] BYREF
	__m128i v28[33]; // [rsp+70h] [rbp-258h] BYREF

	v9 = a9;
	v12 = a2;
	v24 = a5;
	if (!a9 || !a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	result = sub_140263860(0, a4, &v24, &a6);
	if ((int)result >= 0)
	{
		if (sub_1401B5110(*(__int64*)&qword_140C63788, v28, v15, (__int64)v12))
			v12 = (__m128i*)sub_140263F30(v28, (__int64)v12);
		sub_14003D8F0(&v27, a1 + 24);
		v16 = v24;
		v25[3] = a6;
		v25[4] = a7;
		v25[0] = a3;
		v25[1] = a4;
		v25[2] = v24;
		v26 = v12;
		v25[5] = a8;
		v17 = (*(__int64(__fastcall**)(int*))(a1 + 7312))(v25);
		v18 = *(_QWORD**)(*(_QWORD*)(a1 + 7304) + 8 * (v17 % *(_QWORD*)(a1 + 7296)));
		if (!v18)
			goto LABEL_11;
		while (v17 != *v18 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 7320))(v25, v18 + 2))
		{
			v18 = (_QWORD*)v18[1];
			if (!v18)
				goto LABEL_11;
		}
		if (v18 == (_QWORD*)-48i64)
		{
		LABEL_11:
			v19 = sub_14018B280(272i64, 0);
			v20 = 0;
			if (v19)
				v21 = sub_14028BF30((__int64)v19, a1);
			else
				v21 = 0i64;
			v23 = sub_14028C520(v21, v12->m128i_i32, a3, a4, v16, a6, a7, a8);
			if (v23 >= 0)
			{
				*v9 = v21;
			}
			else
			{
				if (v21)
				{
					sub_14028C000(v21);
					sub_14018B900(v21, 0);
				}
				v20 = v23;
			}
		}
		else
		{
			v22 = (void(__fastcall***)(_QWORD))v18[6];
			*v9 = (__int64)v22;
			(**v22)(v22);
			v20 = 0;
		}
		sub_14003D880(&v27);
		return v20;
	}
	return result;
}
// 14026DD13: variable 'v15' is possibly undefined
// 14026DC70: using guessed type __m128i var_258[33];

