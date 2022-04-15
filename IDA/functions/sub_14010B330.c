//----- (000000014010B330) ----------------------------------------------------
void __fastcall sub_14010B330(_QWORD* a1, __int64 a2, __m128i* a3, unsigned __int16* a4)
{
	__int64 v6; // rax
	int* v7; // r12
	__int64 v9; // rbx
	signed __int64 v10; // rbx
	__int64* v11; // r14
	__int64 v12; // r13
	__int64 v13; // rcx
	unsigned __int64 v14; // rbx
	char* v15; // rax
	unsigned __int64 v16; // rbp
	__m128i* v17; // rsi
	int* v18; // rdx
	__int64 v19; // rax
	const __m128i* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // [rsp+20h] [rbp-78h]
	char* v24; // [rsp+30h] [rbp-68h]
	__int64 v25; // [rsp+38h] [rbp-60h]
	__int64 v26; // [rsp+40h] [rbp-58h] BYREF
	const __m128i* v27; // [rsp+48h] [rbp-50h]
	__int64 v28; // [rsp+50h] [rbp-48h]
	__int64 v29; // [rsp+58h] [rbp-40h]
	__int64 v31; // [rsp+B0h] [rbp+18h]

	if (a3 && a3->m128i_i16[0])
	{
		v25 = a2 + 240;
		v23 = *(_QWORD*)(a2 + 368);
		v6 = 0i64;
		v7 = 0i64;
		while (a3->m128i_i16[++v6] != 0)
			;
		v9 = (2 * v6) >> 1;
		if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v7 = sub_14018B280(2 * (v9 + 1), 0);
		v10 = 2 * v9;
		sub_1407DB590(v7, a3->m128i_i32, v10);
		if ((int*)((char*)v7 + v10))
			*(_WORD*)((char*)v7 + v10) = 0;
		v11 = a1 + 2;
		v12 = 6i64;
		v13 = v10 >> 1;
		v14 = 2 * (v10 >> 1);
		v31 = 2 * v13;
		v15 = (char*)((char*)off_140A33098 - (char*)a1);
		v16 = v13 + 1;
		v24 = v15 - 16;
		do
		{
			v17 = 0i64;
			v27 = 0i64;
			v29 = 0i64;
			if (v16 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v17 = (__m128i*)sub_14018B280(2 * v16, 0);
				v27 = v17;
				v14 = v31;
				v29 = (__int64)v17->m128i_i64 + 2 * v16;
			}
			sub_1407DB590(v17->m128i_i32, v7, v14);
			v28 = (__int64)v17->m128i_i64 + v14;
			if (&v17->m128i_i8[v14])
				*(__int16*)((char*)v17->m128i_i16 + v14) = 0;
			v18 = *(int**)((char*)v11 + (_QWORD)v24);
			v19 = 0i64;
			if (*(_WORD*)v18)
			{
				do
					++v19;
				while (*((_WORD*)v18 + v19));
			}
			sub_14001C310(&v26, v18, (int*)((char*)v18 + 2 * v19));
			v20 = v27;
			v21 = sub_140108E80(v25, v27);
			*v11 = v21;
			if (!v21)
				*v11 = sub_140108E80(v25, a3);
			if (v20)
				sub_14018B900((__int64)v20, 0);
			v14 = v31;
			++v11;
			--v12;
		} while (v12);
		if (a4)
			v22 = sub_14010DC00(v23, a4);
		else
			v22 = v23 + 72;
		a1[8] = v22;
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
	else
	{
		a1[2] = 0i64;
		a1[3] = 0i64;
		a1[4] = 0i64;
		a1[5] = 0i64;
		a1[6] = 0i64;
		a1[7] = 0i64;
	}
}
// 140A33098: using guessed type wchar_t *off_140A33098[25];

