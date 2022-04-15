//----- (000000014002AE30) ----------------------------------------------------
__int64 sub_14002AE30()
{
	_QWORD* v0; // r15
	int* v1; // rax
	unsigned __int64 v2; // rbp
	int* v3; // rsi
	__int64 v4; // rdi
	int* v5; // r14
	__int64 v6; // rcx
	__int64 v8; // rbx
	signed __int64 v9; // rbx
	__int64* v10; // rax
	unsigned __int64 v11; // rcx
	__m128i* v12; // rbx
	__int64 v13; // rax
	int* v14; // rsi
	unsigned __int64 v15; // rcx
	int* v16; // rcx
	signed __int64 v17; // rdx
	bool v18; // si
	__m128i* v19; // rbx
	__int64 v20; // rsi
	int* v21; // rcx
	unsigned __int64 v23; // [rsp+58h] [rbp+10h] BYREF
	unsigned __int64 v24; // [rsp+60h] [rbp+18h] BYREF

	v0 = *(_QWORD**)(qword_140C63608 + 104);
	v1 = (int*)(*(__int64(__fastcall**)(_QWORD*))(*v0 + 112i64))(v0);
	v2 = v0[128];
	v3 = v1;
	if (!v1 || !*(_WORD*)v1)
		return 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	while (*((_WORD*)v1 + ++v6) != 0)
		;
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v5, v3, v9);
	if ((int*)((char*)v5 + v9))
		*(_WORD*)((char*)v5 + v9) = 0;
	v10 = (__int64*)&v23;
	v11 = v9 >> 1;
	v24 = v2;
	v12 = 0i64;
	v23 = v11;
	if (v11 >= v2)
		v10 = (__int64*)&v24;
	v13 = *v10;
	v14 = (int*)((char*)v5 + 2 * v13);
	v15 = ((2 * v13) >> 1) + 1;
	if (v15 <= 0x7FFFFFFFFFFFFFFEi64)
		v12 = (__m128i*)sub_14018B280(2 * v15, 0);
	v16 = (int*)v12;
	if (v5 != v14)
	{
		v17 = (char*)v5 - (char*)v12;
		do
		{
			if (v16)
				*(_WORD*)v16 = *(_WORD*)((char*)v16 + v17);
			v16 = (int*)((char*)v16 + 2);
		} while ((int*)((char*)v16 + v17) != v14);
	}
	if (v16)
		*(_WORD*)v16 = 0;
	v18 = (unsigned int)sub_140199760(
		v16,
		v12,
		(__int64(__fastcall*)(__int64*, __int64))sub_14002B070,
		qword_140C63608) == 1;
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v18)
	{
		v19 = (__m128i*)(*(__int64(__fastcall**)(_QWORD*))(*v0 + 112i64))(v0);
		if (!sub_1407DD988(v19, 0x20u))
		{
			v20 = qword_140C63608;
			if (!sub_14002C740(qword_140C63608 + 120, v19))
			{
				sub_1401163B0(*(_QWORD*)(v20 + 112), (int*)L"White", (int*)L"Courier", v19->m128i_i32);
				sub_140198800(v21, v19->m128i_i32);
				sub_1401163B0(*(_QWORD*)(qword_140C63608 + 112), (int*)L"White", (int*)L"Courier", (int*)" ");
				if (v19->m128i_i16[0])
				{
					do
						++v4;
					while (v19->m128i_i16[v4]);
				}
				sub_14001C480(qword_140C63608 + 120, v19->m128i_i32, (int*)((char*)v19->m128i_i32 + 2 * v4));
			}
		}
	}
	return 0i64;
}
// 14002AFF3: variable 'v21' is possibly undefined
// 1409EE7B0: using guessed type wchar_t aWhite[6];
// 1409EE7C0: using guessed type wchar_t aCourier_0[8];
// 1409EE7D0: using guessed type wchar_t aCourier_1[8];
// 1409EE7E0: using guessed type wchar_t aWhite_0[6];
// 140C63608: using guessed type __int64 qword_140C63608;

