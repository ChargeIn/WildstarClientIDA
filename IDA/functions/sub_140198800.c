#include "../winhttp.h"

//----- (0000000140198800) ----------------------------------------------------
__int64 __fastcall sub_140198800(int* a1, int* a2)
{
	unsigned __int16 v2; // ax
	__int64 v3; // r13
	int* v4; // rsi
	int* v6; // rdi
	unsigned int v7; // ebp
	int* v8; // r15
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	int* v11; // rax
	int* v12; // r14
	__int64 v13; // rcx
	int* v14; // rsi
	__int64 v15; // rsi
	__int64 v16; // r12
	int* v17; // rsi
	int* v18; // rdi
	int* v19; // rbx
	int v20; // eax
	int* v21; // rbx
	unsigned __int64 v22; // rsi
	unsigned __int64 i; // rdi
	__int64 v24; // rax
	unsigned int* v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rdx
	char v28[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v29; // [rsp+28h] [rbp-40h]
	int* v30; // [rsp+30h] [rbp-38h]
	int* v31; // [rsp+38h] [rbp-30h]
	int* v32; // [rsp+70h] [rbp+8h] BYREF

	v32 = a1;
	v2 = *(_WORD*)a2;
	v3 = qword_140C63748;
	v4 = a2;
	if (!*(_WORD*)a2)
		return 2i64;
	while ((unsigned int)sub_1407DE9E8(v2))
	{
		v2 = *((_WORD*)v4 + 1);
		v4 = (int*)((char*)v4 + 2);
		if (!v2)
			return 2i64;
	}
	if (!*(_WORD*)v4)
		return 2i64;
	v6 = v4;
	do
	{
		if ((unsigned int)sub_1407DE9E8(*(unsigned __int16*)v6))
			break;
		v6 = (int*)((char*)v6 + 2);
	} while (*(_WORD*)v6);
	v7 = 0;
	v8 = 0i64;
	v9 = ((char*)v6 - (char*)v4) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v8, v4, v10);
	if ((int*)((char*)v8 + v10))
		*(_WORD*)((char*)v8 + v10) = 0;
	for (; *(_WORD*)v6; v6 = (int*)((char*)v6 + 2))
	{
		if (!(unsigned int)sub_1407DE9E8(*(unsigned __int16*)v6))
			break;
	}
	v11 = sub_14018B280(16i64, 0);
	v12 = v11;
	v29 = v11;
	v30 = v11;
	v13 = (__int64)(v11 + 4);
	v31 = v11 + 4;
	if (v11)
	{
		*(_WORD*)v11 = 0;
		v12 = v29;
	}
	if (*(_WORD*)v6)
	{
		v14 = v6;
		do
			v14 = (int*)((char*)v14 + 2);
		while (*(_WORD*)v14);
		v12 = 0i64;
		v15 = ((char*)v14 - (char*)v6) >> 1;
		v16 = 0i64;
		if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v12 = sub_14018B280(2 * (v15 + 1), 0);
			v16 = (__int64)v12 + 2 * v15 + 2;
		}
		sub_1407DB590(v12, v6, 2 * v15);
		if ((int*)((char*)v12 + 2 * v15))
			*((_WORD*)v12 + v15) = 0;
		v13 = (__int64)v29;
		v31 = (int*)v16;
		v29 = v12;
		v30 = (int*)((char*)v12 + 2 * v15);
		if (v13)
		{
			sub_14018B900(v13, 0);
			v12 = v29;
		}
	}
	v17 = *(int**)(v3 + 24);
	v18 = v17;
	v19 = (int*)*((_QWORD*)v17 + 1);
	while (v19)
	{
		if ((int)sub_14018E2C0(*((_QWORD*)v19 + 5), (unsigned __int16*)v8) < 0)
		{
			v19 = (int*)*((_QWORD*)v19 + 3);
		}
		else
		{
			v18 = v19;
			v19 = (int*)*((_QWORD*)v19 + 2);
		}
	}
	if (v18 == v17 || (v20 = sub_14018E2C0((__int64)v8, *((unsigned __int16**)v18 + 5)), v32 = v18, v20 < 0))
		v32 = v17;
	if (v32 == v17)
	{
		if (v12 == v30)
		{
			v32 = 0i64;
			sub_14019D3A0(v13, (unsigned __int16*)v8, &v32);
			v21 = v32;
			v22 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v32 + 16i64))(v32);
			if (v22)
			{
				for (i = 0i64; i < v22; ++i)
				{
					v24 = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v21 + 24i64))(v21, i);
					sub_140198B40(v3, v24);
				}
				(*(void(__fastcall**)(int*))(*(_QWORD*)v21 + 8i64))(v21);
			}
			else
			{
				(*(void(__fastcall**)(int*))(*(_QWORD*)v21 + 8i64))(v21);
				v7 = 2;
			}
		}
		else
		{
			v25 = (unsigned int*)sub_14019D200(v13, (unsigned __int16*)v8);
			v26 = (__int64)v25;
			if (v25)
			{
				v27 = v25[4];
				if (*(_DWORD*)qword_140C63750 < (int)v27)
					v27 = *(unsigned int*)qword_140C63750;
				(*(void(__fastcall**)(unsigned int*, __int64, char*))(*(_QWORD*)v25 + 24i64))(v25, v27, v28);
				sub_140198B40(v3, v26);
			}
			else
			{
				v7 = 2;
			}
		}
	}
	else
	{
		LOBYTE(v7) = (*((int(__fastcall**)(char*, _QWORD))v32 + 8))(v28, *((_QWORD*)v32 + 9)) < 0;
	}
	if (v29)
		sub_14018B900((__int64)v29, 0);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return v7;
}
// 140198A78: conditional instruction was optimized away because rax.8!=0
// 140198A49: variable 'v13' is possibly undefined
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140198800: using guessed type char var_48[8];

