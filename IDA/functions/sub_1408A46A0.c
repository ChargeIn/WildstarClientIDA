#include "../winhttp.h"

//----- (00000001408A46A0) ----------------------------------------------------
void __fastcall sub_1408A46A0(__int64 a1)
{
	__int64 v1; // rsi
	unsigned int i; // ebx
	__int64 v4; // rbx
	int v5; // ebp
	float v6; // xmm7_4
	float v7; // xmm6_4
	double v8; // xmm0_8
	double v9; // xmm0_8
	int v10; // xmm3_4
	int v11; // xmm4_4
	__int64 v12; // rcx
	float v13; // xmm0_4
	int v14; // eax
	int v15; // edx
	float v16; // xmm0_4
	int v17; // [rsp+70h] [rbp+8h] BYREF
	int v18; // [rsp+78h] [rbp+10h] BYREF

	v1 = 0i64;
	for (i = 0; i < *(_DWORD*)(a1 + 184); ++i)
		sub_1408A64D0(
			*(_QWORD*)(a1 + 8) + 56i64 * i,
			*(float*)(a1 + 56),
			*(float*)(a1 + 52),
			*(float*)(a1 + 48),
			*(float*)(a1 + 60));
	v4 = *(_QWORD*)(a1 + 16);
	if (v4 && *(_BYTE*)(a1 + 108))
	{
		v5 = *(_DWORD*)(a1 + 188);
		v6 = *(float*)(a1 + 72);
		if (v6 == 0.0)
		{
			sub_1408A5980(0, 0.0, 0, (float*)&v18, (float*)&v17);
		}
		else
		{
			v7 = (float)v5 * 0.5;
			HIDWORD(v8) = 0;
			*(float*)&v8 = v7 / *(float*)(a1 + 68);
			v9 = sub_1408FE170(v8);
			*(float*)&v9 = *(float*)&v9 * v6;
			*(_QWORD*)&v9 ^= 0x8000000080000000ui64;
			*(float*)&v9 = sub_1408FC7F0(v9) * v7;
			sub_1408A5980(1, v9, v5, (float*)&v18, (float*)&v17);
		}
		if (*(_DWORD*)(v4 + 144))
		{
			v10 = v17;
			v11 = v18;
			while (1)
			{
				v12 = 3 * v1;
				v13 = (float)(1.0 / (float)v5) * *(float*)(a1 + 68);
				*(float*)(v4 + 24 * v1 + 16) = v13;
				if (!*(_DWORD*)(a1 + 64))
					*(float*)(v4 + 24 * v1 + 16) = v13 * 6.2831855;
				*(_DWORD*)(v4 + 24 * v1 + 4) = v11;
				*(_DWORD*)(v4 + 24 * v1 + 8) = v10;
				v14 = *(_DWORD*)(v4 + 24 * v1 + 20);
				v15 = *(_DWORD*)(a1 + 64);
				if (v14 == v15)
					goto LABEL_18;
				if (!v14)
					break;
				if (!v15)
				{
					v16 = *(float*)(v4 + 24 * v1 + 12) * 6.2831855;
					goto LABEL_17;
				}
			LABEL_18:
				v1 = (unsigned int)(v1 + 1);
				*(_DWORD*)(v4 + 8 * v12 + 20) = *(_DWORD*)(a1 + 64);
				if ((unsigned int)v1 >= *(_DWORD*)(v4 + 144))
					return;
			}
			v16 = *(float*)(v4 + 24 * v1 + 12) * 0.15915494;
		LABEL_17:
			*(float*)(v4 + 24 * v1 + 12) = v16;
			goto LABEL_18;
		}
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

