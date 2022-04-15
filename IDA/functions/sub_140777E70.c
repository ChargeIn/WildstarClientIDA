#include "../winhttp.h"

//----- (0000000140777E70) ----------------------------------------------------
void __fastcall sub_140777E70(__int64 a1, float a2)
{
	float v2; // xmm2_4
	char v4; // bp
	float v5; // xmm6_4
	__int64 v6; // rax
	int* v7; // rsi
	__int64 v8; // rbx
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	char* v11; // rsi
	__int64* v12; // rbx
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rcx
	unsigned __int64 v16; // rsi
	int* v17; // rbx
	int* v18; // r11
	char* v19; // rcx
	signed __int64 v20; // rdx
	unsigned __int64 v21; // rdx
	__int64 v22; // rcx
	char v23; // bl
	int* v24; // rbx
	int* v25; // rbp
	int* v26; // rsi
	unsigned __int64 v27; // rcx
	int* v28; // rcx
	signed __int64 v29; // rbx
	__int64 v30; // rcx
	__int64 v31; // [rsp+20h] [rbp-68h] BYREF
	int* v32; // [rsp+28h] [rbp-60h]
	unsigned __int64 v33; // [rsp+90h] [rbp+8h]

	v2 = *(float*)(a1 + 16) - a2;
	v4 = 0;
	*(float*)(a1 + 16) = v2;
	if (v2 > 0.0)
		return;
	v5 = 0.25;
	*(float*)(a1 + 16) = v2 + 0.25;
	v6 = *(_QWORD*)(a1 + 64);
	if (*(_QWORD*)v6 == v6)
		return;
	v7 = *(int**)(*(_QWORD*)v6 + 24i64);
	v8 = (__int64)(*(_QWORD*)(*(_QWORD*)v6 + 32i64) - (_QWORD)v7) >> 1;
	v9 = 0i64;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v9 = sub_14018B280(2 * (v8 + 1), 0);
	v10 = 2 * v8;
	sub_1407DB590(v9, v7, v10);
	v11 = (char*)v9 + v10;
	if ((int*)((char*)v9 + v10))
		*(_WORD*)v11 = 0;
	v12 = **(__int64***)(a1 + 64);
	v13 = *v12;
	v14 = (__int64*)v12[1];
	*v14 = *v12;
	*(_QWORD*)(v13 + 8) = v14;
	v15 = v12[3];
	if (v15)
		sub_14018B900(v15, 0);
	sub_14018B900((__int64)v12, 0);
	v16 = (v11 - (char*)v9) >> 1;
	if (v16 < 0xB)
	{
		v18 = v32;
	}
	else
	{
		v4 = 1;
		v17 = (int*)((char*)v9 + 22);
		v18 = sub_14018B280(24i64, 0);
		v19 = (char*)v18;
		if (v9 != v17)
		{
			v20 = (char*)v9 - (char*)v18;
			do
			{
				if (v19)
					*(_WORD*)v19 = *(_WORD*)&v19[v20];
				v19 += 2;
			} while (&v19[v20] != (char*)v17);
		}
		if (v19)
			*(_WORD*)v19 = 0;
		v21 = 0i64;
		do
			++v21;
		while (aMacropause[v21]);
		if ((v19 - (char*)v18) >> 1 == v21)
		{
			v22 = 0i64;
			if (!v21)
			{
				v23 = 1;
				goto LABEL_30;
			}
			while (*((_WORD*)v18 + v22) == aMacropause[v22])
			{
				if (++v22 >= v21)
				{
					v23 = 1;
					goto LABEL_30;
				}
			}
		}
	}
	v23 = 0;
LABEL_30:
	if ((v4 & 1) != 0 && v18)
		sub_14018B900((__int64)v18, 0);
	if (v23)
	{
		if (v16 > 0xB)
		{
			v33 = v16 - 12;
			v24 = v9 + 6;
			v25 = 0i64;
			v26 = (int*)((char*)v9 + 2 * v16);
			v27 = ((__int64)(2 * (v33 + 12) - 24) >> 1) + 1;
			if (v27 <= 0x7FFFFFFFFFFFFFFEi64)
				v25 = sub_14018B280(2 * v27, 0);
			v28 = v25;
			if (v24 != v26)
			{
				v29 = (char*)v24 - (char*)v25;
				do
				{
					if (v28)
						*(_WORD*)v28 = *(_WORD*)((char*)v28 + v29);
					v28 = (int*)((char*)v28 + 2);
				} while ((int*)((char*)v28 + v29) != v26);
			}
			if (v28)
				*(_WORD*)v28 = 0;
			v30 = (__int64)v9;
			v9 = v25;
			if (v30)
				sub_14018B900(v30, 0);
			v5 = *(double*)sub_1407DFE80((WCHAR*)v25, 0i64).m128_u64;
		}
		*(float*)(a1 + 16) = v5 + *(float*)(a1 + 16);
	}
	else
	{
		sub_14011B780(&v31, *(_QWORD*)(a1 + 8), v9);
		if (v32)
			sub_14018B900((__int64)v32, 0);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
}
// 140777F8F: conditional instruction was optimized away because rsi.8>=Bu
// 14077805E: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407780BC: conditional instruction was optimized away because rsi.8>=Cu
// 140B4F340: using guessed type wchar_t aMacropause[12];

