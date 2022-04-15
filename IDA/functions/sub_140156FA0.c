#include "../winhttp.h"

//----- (0000000140156FA0) ----------------------------------------------------
__int64 __fastcall sub_140156FA0(__int64 a1, int* a2)
{
	__int64 v5; // rax
	int* v6; // r14
	__int64 v7; // rbx
	signed __int64 v8; // rbx
	char* v9; // rsi
	unsigned __int64 v10; // rbx
	char* v11; // rax
	unsigned __int64 v12; // rax
	_QWORD* v13; // rsi
	_QWORD* v14; // r10
	unsigned __int16 v15; // r11
	__int64 v16; // r8
	int* v17; // rdx
	unsigned __int16 v18; // ax
	__int64 v19; // rbx
	_QWORD* v20; // r10
	_QWORD* v21; // rsi
	_QWORD* v22; // r10
	unsigned __int16 v23; // r11
	__int64 v24; // r8
	int* v25; // rdx
	unsigned __int16 v26; // ax
	_QWORD* v27; // r10
	int v28; // [rsp+58h] [rbp+10h]

	if (!a2)
		return 0i64;
	v5 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v7 + 1), 0);
	v8 = 2 * v7;
	sub_1407DB590(v6, a2, v8);
	v9 = (char*)v6 + v8;
	if ((int*)((char*)v6 + v8))
		*(_WORD*)v9 = 0;
	v10 = v8 >> 1;
	if (!((v9 - (char*)v6) >> 1) || (HIWORD(v28) = 58, v11 = (char*)sub_14002C8A0(v6, (__int64)v9, v28), v11 == v9))
		v12 = -1i64;
	else
		v12 = (v11 - (char*)v6) >> 1;
	if (v12 <= v10)
	{
		v19 = sub_1400D3830(a1 + 48, a2);
		if (!v19)
			v19 = sub_1400D3830(a1 + 80, a2);
	}
	else
	{
		v13 = *(_QWORD**)(a1 + 56);
		v14 = (_QWORD*)*v13;
		if ((_QWORD*)*v13 == v13)
		{
		LABEL_21:
			v21 = *(_QWORD**)(a1 + 88);
			v22 = (_QWORD*)*v21;
			if ((_QWORD*)*v21 == v21)
			{
			LABEL_28:
				v19 = 0i64;
			}
			else
			{
				v23 = *(_WORD*)a2;
				while (1)
				{
					v24 = 0i64;
					v25 = a2;
					if (v23)
					{
						v26 = v23;
						do
						{
							v25 = (int*)((char*)v25 + 2);
							v24 = v26 + 2860486313i64 * v24;
							v26 = *(_WORD*)v25;
						} while (*(_WORD*)v25);
					}
					v19 = sub_1400D3940((_QWORD*)v22[2], (unsigned __int16*)a2, v24);
					if (v19)
						break;
					v22 = (_QWORD*)*v27;
					if (v22 == v21)
						goto LABEL_28;
				}
			}
		}
		else
		{
			v15 = *(_WORD*)a2;
			while (1)
			{
				v16 = 0i64;
				v17 = a2;
				if (v15)
				{
					v18 = v15;
					do
					{
						v17 = (int*)((char*)v17 + 2);
						v16 = v18 + 2860486313i64 * v16;
						v18 = *(_WORD*)v17;
					} while (*(_WORD*)v17);
				}
				v19 = sub_1400D3940((_QWORD*)v14[2], (unsigned __int16*)a2, v16);
				if (v19)
					break;
				v14 = (_QWORD*)*v20;
				if (v14 == v13)
					goto LABEL_21;
			}
		}
	}
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return v19;
}
// 14015709A: variable 'v15' is possibly undefined
// 1401570CA: variable 'v20' is possibly undefined
// 1401570EC: variable 'v23' is possibly undefined
// 14015711C: variable 'v27' is possibly undefined

