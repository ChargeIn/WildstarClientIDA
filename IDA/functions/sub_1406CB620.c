#include "../winhttp.h"

//----- (00000001406CB620) ----------------------------------------------------
__int64 __fastcall sub_1406CB620(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rax
	int* v11; // rdi
	__m128i* v12; // r14
	__int64 v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rbx
	int* v16; // rax
	wchar_t** v17; // rdi
	unsigned int* v18; // rbx
	unsigned int* v19; // rax
	__int64 v20; // rcx
	unsigned int* v21; // rsi
	unsigned __int64 v22; // rax
	__int64 v23; // r8
	int v24; // edx
	unsigned __int64 v25; // rbx
	__int64 v26; // rcx
	unsigned int* v27; // rdi
	__int64 v28; // r8
	int v29; // edx
	unsigned int v31[4]; // [rsp+30h] [rbp-B8h] BYREF
	_OWORD v32[6]; // [rsp+40h] [rbp-A8h] BYREF

	v8 = sub_1401A6B80(a5, L"Base");
	v9 = 0i64;
	if (v8)
		v10 = sub_1401A4F40(v8 + 32);
	else
		v10 = 0i64;
	v11 = (int*)L"kitBtn_Metal_LargeGreen";
	v12 = 0i64;
	if (v10)
		v11 = (int*)v10;
	v13 = 0i64;
	if (*(_WORD*)v11)
	{
		do
			++v13;
		while (*((_WORD*)v11 + v13));
	}
	v14 = (2 * v13) >> 1;
	if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v12 = (__m128i*)sub_14018B280(2 * (v14 + 1), 0);
	v15 = 2 * v14;
	sub_1407DB590(v12->m128i_i32, v11, v15);
	if (&v12->m128i_i8[v15])
		v12->m128i_i16[v15 / 2] = 0;
	sub_1400D45E0((__int64)v32, a1, a2, a5, 0i64);
	v16 = sub_14018B280(1472i64, 0);
	if (v16)
		v9 = sub_1406CAFA0((__int64)v16, a1, a2, v12, a3, v32);
	v17 = off_140A20FB0;
	v18 = (unsigned int*)(v9 + 1440);
	do
	{
		v19 = sub_1400F66F0(v31, a5, *v17, *(unsigned int*)((char*)v18 + (_QWORD)&unk_140C2C8E8 - v9 - 1440));
		v20 = qword_140C63678;
		v21 = v19;
		if (v18 != v19)
		{
			sub_1401429A0(qword_140C63678, *v18);
			v22 = *v21;
			v20 = qword_140C63678;
			*v18 = v22;
			if (v22 < *(_QWORD*)(v20 + 48))
			{
				v23 = 32i64 * (unsigned int)v22 + *(_QWORD*)(v20 + 40);
				v24 = *(_DWORD*)(v23 + 16);
				if ((unsigned int)(v24 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v23 + 16) = v24 + 1;
			}
		}
		sub_1401429A0(v20, v31[0]);
		++v17;
		++v18;
	} while ((__int64)v17 < (__int64)L"Picture");
	sub_1400F66F0(v31, a5, &word_140A31AB8, 0xFFFFFFFF);
	v25 = v31[0];
	v26 = qword_140C63678;
	v27 = (unsigned int*)(v9 + 708);
	if ((unsigned int*)(v9 + 708) != v31)
	{
		sub_1401429A0(qword_140C63678, *v27);
		v26 = qword_140C63678;
		*v27 = v25;
		if (v25 < *(_QWORD*)(v26 + 48))
		{
			v28 = 32i64 * (unsigned int)v25 + *(_QWORD*)(v26 + 40);
			v29 = *(_DWORD*)(v28 + 16);
			if ((unsigned int)(v29 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v28 + 16) = v29 + 1;
		}
	}
	sub_1401429A0(v26, v25);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	return v9;
}
// 140A20FB0: using guessed type wchar_t *off_140A20FB0[6];
// 140A20FE0: using guessed type wchar_t aPicture_0[8];
// 140A31928: using guessed type wchar_t aBase[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140B3A170: using guessed type wchar_t aKitbtnMetalLar_0[24];
// 140C63678: using guessed type __int64 qword_140C63678;
// 1406CB620: using guessed type _OWORD var_A8[6];

