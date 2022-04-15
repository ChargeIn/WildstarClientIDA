//----- (00000001400B8AA0) ----------------------------------------------------
__int64 __fastcall sub_1400B8AA0(_WORD* a1, int* a2, __int64 a3)
{
	_QWORD* v3; // r15
	int* v7; // rbx
	int* v8; // rax
	__int64 v9; // rsi
	__int64 v10; // rax
	int* v11; // rdi
	unsigned int v12; // r13d
	__int64 v13; // rsi
	__int64* v14; // rax
	unsigned __int64 v15; // r8
	__int64* v16; // rcx
	__int64 v17; // rdx
	int* v18; // rax
	unsigned __int16* v19; // r12
	int* v20; // rbx
	__int64 v21; // rcx
	_WORD* v22; // rbx
	unsigned __int64 v23; // rax
	__m128i* i; // rdi
	const __m128i* v25; // rax
	const __m128i* v26; // rsi
	__int16* j; // rax
	char v28; // r14
	__int64 v29; // rsi
	int* v30; // r15
	__int64* v31; // rdx
	int* v32; // rbx
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // [rsp+20h] [rbp-50h] BYREF
	unsigned __int16* v37; // [rsp+28h] [rbp-48h]
	int* v38; // [rsp+30h] [rbp-40h]
	int* v39; // [rsp+38h] [rbp-38h]
	char v40; // [rsp+40h] [rbp-30h] BYREF
	int* v41; // [rsp+48h] [rbp-28h]
	int* v42; // [rsp+50h] [rbp-20h]
	__int64 v43; // [rsp+58h] [rbp-18h]
	__int64 v44; // [rsp+A8h] [rbp+38h] BYREF
	_QWORD* v45; // [rsp+B0h] [rbp+40h]
	unsigned __int64 v46; // [rsp+B8h] [rbp+48h] BYREF

	v45 = (_QWORD*)a3;
	v3 = (_QWORD*)a3;
	LODWORD(v44) = 0;
	if (!a2)
		return 0i64;
	v7 = sub_14018B280(16i64, 0);
	v37 = (unsigned __int16*)v7;
	v39 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	if ((int*)((char*)v7 + 2) == v7 + 4)
	{
		v8 = sub_14018B280(4i64, 0);
		v9 = (__int64)v8;
		if (v8)
			*(_WORD*)v8 = 0;
		if (v7)
			sub_14018B900((__int64)v7, 0);
		v37 = (unsigned __int16*)v9;
		v7 = (int*)v9;
		v39 = (int*)(v9 + 4);
	}
	if (v7 != (int*)-2i64)
		*((_WORD*)v7 + 1) = 0;
	v38 = (int*)((char*)v7 + 2);
	v10 = 0i64;
	*(_WORD*)v7 = 123;
	if (*(_WORD*)a2)
	{
		do
			++v10;
		while (*((_WORD*)a2 + v10));
	}
	sub_14001C310(&v36, a2, (int*)((char*)a2 + 2 * v10));
	v11 = v38;
	v12 = 1;
	if ((int*)((char*)v38 + 2) == v39)
	{
		v13 = (__int64)v37;
		v44 = 1i64;
		v14 = &v44;
		v15 = ((char*)v38 - (char*)v37) >> 1;
		v46 = v15;
		if (v15)
			v14 = (__int64*)&v46;
		v16 = &v44;
		v17 = *v14;
		v44 = ((char*)v38 - (char*)v37) >> 1;
		v46 = v15 + v17;
		if (v15 + v17 >= v15)
			v16 = (__int64*)&v46;
		v18 = sub_14018B280(2 * *v16 + 2, 0);
		v19 = (unsigned __int16*)v18;
		v20 = v18;
		if ((int*)v13 != v11)
		{
			v21 = v13 - (_QWORD)v18;
			do
			{
				if (v20)
					*(_WORD*)v20 = *(_WORD*)((char*)v20 + v21);
				v20 = (int*)((char*)v20 + 2);
			} while ((int*)((char*)v20 + v21) != v11);
		}
		if (v20)
			*(_WORD*)v20 = 0;
		if (v13)
			sub_14018B900(v13, 0);
		v11 = v20;
	}
	else
	{
		v19 = v37;
	}
	v22 = (_WORD*)v11 + 1;
	if (v11 != (int*)-2i64)
		*v22 = 0;
	*(_WORD*)v11 = 58;
	v23 = sub_14018E5E0(a1, v19);
	if (!v23)
		goto LABEL_54;
	for (i = (__m128i*)(v23 + 2 * (v22 - v19)); i->m128i_i16[0] == 32; i = (__m128i*)((char*)i + 2))
		;
	v25 = sub_1407DD988(i, 0x7Du);
	v26 = v25;
	if (v25)
	{
		for (j = &v25[-1].m128i_i16[7]; *j == 32; --j)
			v26 = (const __m128i*)j;
		if (v26 <= i)
		{
			v28 = 2;
			v32 = sub_14018B280(2i64, 0);
			v41 = v32;
			v43 = (__int64)v32 + 2;
			sub_1407DB590(v32, dword_1409D19E4, 0i64);
			v42 = v32;
			if (v32)
				*(_WORD*)v32 = 0;
			v31 = (__int64*)&v40;
		}
		else
		{
			v28 = 1;
			v29 = ((char*)v26 - (char*)i) >> 1;
			v30 = 0i64;
			v37 = 0i64;
			v39 = 0i64;
			if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v30 = sub_14018B280(2 * (v29 + 1), 0);
				v37 = (unsigned __int16*)v30;
				v39 = (int*)((char*)v30 + 2 * v29 + 2);
			}
			sub_1407DB590(v30, i->m128i_i32, 2 * v29);
			v38 = (int*)((char*)v30 + 2 * v29);
			if (v38)
				*((_WORD*)v30 + v29) = 0;
			v3 = v45;
			v31 = &v36;
		}
		v33 = v3[1];
		v3[1] = v31[1];
		v31[1] = v33;
		v34 = v31[2];
		v31[2] = v3[2];
		v3[2] = v34;
		v35 = v3[3];
		v3[3] = v31[3];
		v31[3] = v35;
		if ((v28 & 2) != 0)
		{
			v28 &= ~2u;
			if (v41)
				sub_14018B900((__int64)v41, 0);
		}
		if ((v28 & 1) != 0 && v37)
			sub_14018B900((__int64)v37, 0);
	}
	else
	{
	LABEL_54:
		v12 = 0;
	}
	if (v19)
		sub_14018B900((__int64)v19, 0);
	return v12;
}
// 1409D19E4: using guessed type int dword_1409D19E4[28];

