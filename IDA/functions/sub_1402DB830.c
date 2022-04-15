//----- (00000001402DB830) ----------------------------------------------------
__int64 __fastcall sub_1402DB830(const __m128i* a1, __int64 a2, __int64 a3)
{
	__m128i* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int16 v9; // cx
	unsigned int v10; // edi
	__int16* v11; // rcx
	__int64 v12; // rdx
	__int16 v13; // ax
	__int64 v14; // r8
	int v15; // eax
	char v17[528]; // [rsp+30h] [rbp-238h] BYREF

	if (!a2 || !a3)
		return 2147942487i64;
	v6 = (__m128i*) & a1[1];
	v7 = 260i64;
	v8 = a2 - (_QWORD)(a1 + 1);
	while (v7 != -2147483386)
	{
		v9 = *(__int16*)((char*)v6->m128i_i16 + v8);
		if (!v9)
			break;
		v6->m128i_i16[0] = v9;
		v6 = (__m128i*)((char*)v6 + 2);
		if (!--v7)
		{
			v6 = (__m128i*)((char*)v6 - 2);
			break;
		}
	}
	v10 = 0;
	v11 = &a1[33].m128i_i16[4];
	v6->m128i_i16[0] = 0;
	v12 = 260i64;
	while (v12 != -2147483386)
	{
		v13 = *(__int16*)((char*)v11 + a3 - ((_QWORD)a1 + 536));
		if (!v13)
			break;
		*v11++ = v13;
		if (!--v12)
		{
			--v11;
			break;
		}
	}
	*v11 = 0;
	sub_14001B370((const __m128i*)a1[66].m128i_i8, 260i64, L"%s\\%s.map", a2, a3);
	a1[98].m128i_i32[2] = sub_1401B5110(*(__int64*)&qword_140C63788, v17, v14, (__int64)a1[66].m128i_i64) == 0;
	v15 = sub_1402DB980(a1);
	if (v15 < 0)
		return (unsigned int)v15;
	return v10;
}
// 1402DB8A7: conditional instruction was optimized away because rdx.8!=0
// 1402DB8EB: conditional instruction was optimized away because rdx.8!=0
// 1402DB927: variable 'v14' is possibly undefined
// 140AF0CB0: using guessed type wchar_t aSSMap[10];
// 1402DB830: using guessed type char var_238[528];

