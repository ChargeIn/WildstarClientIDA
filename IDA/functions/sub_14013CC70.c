#include "../winhttp.h"

//----- (000000014013CC70) ----------------------------------------------------
__int64 __fastcall sub_14013CC70(int* a1, int* a2, _QWORD* a3)
{
	int* v5; // rsi
	__int64 v6; // rax
	__m128i* v7; // rbp
	__int64 v8; // r14
	__int16* v9; // rax
	__int64 v10; // rax
	const __m128i* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // r8
	int v14; // ebx
	__int64 v15; // rbx
	__int64 v17; // [rsp+30h] [rbp-48h] BYREF
	const __m128i* v18; // [rsp+38h] [rbp-40h]
	__int16* v19; // [rsp+40h] [rbp-38h]
	__int64 v20; // [rsp+48h] [rbp-30h]
	__int64 v21; // [rsp+90h] [rbp+18h] BYREF

	if (!a3 || !a2)
		return 2147942487i64;
	v5 = (int*)&unk_1409D9164;
	if (a1)
		v5 = a1;
	v18 = 0i64;
	v20 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = (__m128i*)sub_14018B280(2 * (v8 + 1), 0);
		v18 = v7;
		v20 = (__int64)v7->m128i_i64 + 2 * v8 + 2;
	}
	sub_1407DB590(v7->m128i_i32, v5, 2 * v8);
	v9 = &v7->m128i_i16[v8];
	v19 = v9;
	if (v9)
		*v9 = 0;
	v10 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v10;
		while (*((_WORD*)a2 + v10));
	}
	sub_14001C310(&v17, a2, (int*)((char*)a2 + 2 * v10));
	v11 = v18;
	if ((unsigned int)sub_1401B58D0(v12, v18, v13))
	{
		v14 = sub_1401B5B50(*(__int64*)&qword_140C63788, v11, 1i64, 3, &v21);
		if (v14 >= 0)
		{
			v15 = v21;
			if (*a3 < (unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 32i64))(v21))
				*a3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			v14 = 0;
		}
	}
	else
	{
		v14 = -2147023728;
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return (unsigned int)v14;
}
// 14013CD75: variable 'v12' is possibly undefined
// 14013CD75: variable 'v13' is possibly undefined

