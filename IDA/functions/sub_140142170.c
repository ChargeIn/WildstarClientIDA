#include "../winhttp.h"

//----- (0000000140142170) ----------------------------------------------------
__int64 __fastcall sub_140142170(__int64 a1, unsigned __int16* a2)
{
	int v2; // r15d
	int* v5; // rax
	int* v6; // rsi
	bool v7; // zf
	unsigned __int16* v8; // r12
	__int64 v9; // rax
	__int64 v10; // r13
	__int64 v11; // rbp
	_QWORD* v12; // rbx
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // r13
	__int64 v16; // rbp
	_QWORD* v17; // rbx
	int v18; // eax
	unsigned __int64 v19; // rdx
	__int64 v20; // r8
	__int64 v21; // rdx
	int v22; // r9d
	unsigned int v23; // ebx
	bool v25; // al
	WCHAR* v26; // rbx
	__int128 v27; // [rsp+20h] [rbp-58h] BYREF
	int* v28; // [rsp+30h] [rbp-48h]
	int* v29; // [rsp+38h] [rbp-40h]
	__int64 v30; // [rsp+88h] [rbp+10h] BYREF
	__int64 v31; // [rsp+90h] [rbp+18h]

	v2 = 0;
	if (a2 && *a2)
	{
		v5 = sub_14018B280(16i64, 0);
		v6 = v5;
		*((_QWORD*)&v27 + 1) = v5;
		v28 = v5;
		v29 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v7 = *a2 == 99;
		v8 = a2;
		LOBYTE(v30) = 0;
		if (v7 && a2[1] == 114 && a2[2] == 97 && a2[3] == 121)
		{
			v9 = 0i64;
			do
				v7 = a2[++v9] == 0;
			while (!v7);
			if ((2 * v9) >> 1)
			{
				sub_14001C310(&v27, (int*)a2, (int*)&a2[v9]);
				v6 = (int*)*((_QWORD*)&v27 + 1);
			}
			else
			{
				sub_1407DB590(v6, (int*)a2, 0i64);
			}
			*v6 = 7012472;
			v8 = (unsigned __int16*)v6;
			LOBYTE(v30) = 1;
			v6[1] = 6553699;
		}
		v10 = *(_QWORD*)(a1 + 96);
		v11 = v10;
		v12 = *(_QWORD**)(v10 + 8);
		while (v12)
		{
			if ((int)sub_14018E2C0(v12[4], v8) < 0)
			{
				v12 = (_QWORD*)v12[3];
			}
			else
			{
				v11 = (__int64)v12;
				v12 = (_QWORD*)v12[2];
			}
		}
		if (v11 == v10 || (v13 = sub_14018E2C0((__int64)v8, *(unsigned __int16**)(v11 + 32)), v31 = v11, v13 < 0))
			v31 = v10;
		v14 = v31;
		if (v31 == v10)
		{
			if ((_BYTE)v30)
				sub_140059390();
			v15 = *(_QWORD*)(a1 + 96);
			v16 = v15;
			v17 = *(_QWORD**)(v15 + 8);
			while (v17)
			{
				if ((int)sub_14018E2C0(v17[4], a2) < 0)
				{
					v17 = (_QWORD*)v17[3];
				}
				else
				{
					v16 = (__int64)v17;
					v17 = (_QWORD*)v17[2];
				}
			}
			if (v16 == v15 || (v18 = sub_14018E2C0((__int64)a2, *(unsigned __int16**)(v16 + 32)), v30 = v16, v18 < 0))
				v30 = v15;
			v14 = v30;
		}
		else if ((_BYTE)v30)
		{
			sub_140059390();
		}
		if (v14 != *(_QWORD*)(a1 + 96))
		{
			v19 = *(unsigned int*)(v14 + 40);
			if (v19 < *(_QWORD*)(a1 + 48))
			{
				v20 = *(_QWORD*)(a1 + 40);
				v21 = 32 * v19;
				v22 = *(_DWORD*)(v21 + v20 + 16);
				if ((unsigned int)(v22 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v21 + v20 + 16) = v22 + 1;
			}
			v23 = *(_DWORD*)(v14 + 40);
			if (v6)
				sub_14018B900((__int64)v6, 0);
			return v23;
		}
		if (v6)
			sub_14018B900((__int64)v6, 0);
	}
	sub_14018ECC0((__m128*) & v27, a2);
	if (*((float*)&v27 + 3) == 0.0)
	{
		if (a2)
		{
			if (*a2)
			{
				if (*(_BYTE*)(a1 + 60))
				{
					if (!(unsigned int)sub_1407DE874(*a2))
					{
						v25 = 1;
						v26 = a2;
						if (*a2)
						{
							do
							{
								if (!v25)
									goto LABEL_56;
								v25 = (unsigned int)sub_1407DFF44(*v26++) != 0;
								++v2;
							} while (*v26);
							if (!v25 || v2 > 8)
							{
							LABEL_56:
								v27 = xmmword_140C777D0;
								sub_140142780(a1, a2, &v27, (unsigned int*)&v30);
								return (unsigned int)v30;
							}
						}
					}
				}
			}
		}
	}
	return sub_140141F10(a1, (__m128*) & v27);
}
// 14014238E: variable 'v14' is possibly undefined
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

