#include "../winhttp.h"

//----- (000000014026E540) ----------------------------------------------------
__int64 __fastcall sub_14026E540(__int64 a1, __m128i* a2, int a3, int a4, int a5, int a6, int a7, __int64* a8)
{
	__int64* v8; // r15
	__m128i* v11; // rdi
	__int64 result; // rax
	__int64 v14; // r8
	unsigned int v15; // esi
	unsigned __int64 v16; // r14
	_QWORD* v17; // rbx
	int* v18; // rax
	__int64 v19; // rbx
	void(__fastcall * **v20)(_QWORD); // rcx
	int v21; // edi
	int v22; // [rsp+40h] [rbp-288h] BYREF
	int v23[6]; // [rsp+48h] [rbp-280h] BYREF
	__m128i* v24; // [rsp+60h] [rbp-268h]
	__int64 v25; // [rsp+68h] [rbp-260h] BYREF
	__m128i v26[33]; // [rsp+70h] [rbp-258h] BYREF

	v8 = a8;
	v11 = a2;
	v22 = a5;
	if (!a8 || !a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	result = sub_140263860(2, a4, &v22, &a6);
	if ((int)result >= 0)
	{
		if (sub_1401B5110(*(__int64*)&qword_140C63788, v26, v14, (__int64)v11))
			v11 = (__m128i*)sub_140263F30(v26, (__int64)v11);
		sub_14003D8F0(&v25, a1 + 24);
		v23[2] = v22;
		v15 = 0;
		v23[3] = a6;
		v23[0] = a3;
		v23[1] = a4;
		v24 = v11;
		v23[5] = 0;
		v23[4] = a7;
		v16 = (*(__int64(__fastcall**)(int*))(a1 + 7392))(v23);
		v17 = *(_QWORD**)(*(_QWORD*)(a1 + 7384) + 8 * (v16 % *(_QWORD*)(a1 + 7376)));
		if (!v17)
			goto LABEL_11;
		while (v16 != *v17 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 7400))(v23, v17 + 2))
		{
			v17 = (_QWORD*)v17[1];
			if (!v17)
				goto LABEL_11;
		}
		if (v17 == (_QWORD*)-48i64)
		{
		LABEL_11:
			v18 = sub_14018B280(376i64, 0);
			if (v18)
				v19 = sub_140291C80((__int64)v18, a1);
			else
				v19 = 0i64;
			v21 = sub_1402922B0(v19, v11->m128i_i32, a3, a4, v22, a6, a7);
			if (v21 >= 0)
			{
				*v8 = v19;
			}
			else
			{
				if (v19)
				{
					sub_140291DB0(v19);
					sub_14018B900(v19, 0);
				}
				v15 = v21;
			}
		}
		else
		{
			v20 = (void(__fastcall***)(_QWORD))v17[6];
			*v8 = (__int64)v20;
			(**v20)(v20);
		}
		sub_14003D880(&v25);
		return v15;
	}
	return result;
}
// 14026E5E6: variable 'v14' is possibly undefined
// 14026E540: using guessed type __m128i var_258[33];

