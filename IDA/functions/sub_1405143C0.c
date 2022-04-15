#include "../winhttp.h"

//----- (00000001405143C0) ----------------------------------------------------
__int64 __fastcall sub_1405143C0(unsigned int* a1, _QWORD* a2, __int64 a3, int a4, int a5)
{
	__int64 v7; // rbp
	__int64 v9; // rax
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	float v18; // xmm0_4
	__m128 v19; // xmm1
	int v20; // ecx
	__int64 v21; // [rsp+20h] [rbp-38h] BYREF
	__int64 v22; // [rsp+28h] [rbp-30h]
	__int64 v23; // [rsp+30h] [rbp-28h]

	if (a4)
	{
		if (a5)
		{
			if ((dword_140C8AE24 & 1) == 0)
			{
				dword_140C8AE48 = 0;
				dword_140C8AE58 = 0;
				dword_140C8AE68 = 0;
				dword_140C8AE78 = 0;
				dword_140C8AE88 = 0;
				dword_140C8AE24 |= 1u;
			}
			v7 = sub_14020CE20(*(_DWORD*)(a3 + 8));
			if (!v7)
				return 0i64;
			if (dword_140C8AE48)
			{
				v10 = qword_140C8AE40;
			}
			else
			{
				dword_140C8AE48 = 1;
				v9 = sub_140200220(0x522u);
				if (v9)
				{
					v10 = *(unsigned int*)(v9 + 4);
					qword_140C8AE40 = v10;
				}
				else
				{
					v10 = 0i64;
					qword_140C8AE40 = 0i64;
				}
			}
			if (dword_140C8AE58)
			{
				v12 = qword_140C8AE50;
			}
			else
			{
				dword_140C8AE58 = 1;
				v11 = sub_140200220(0x522u);
				if (v11)
				{
					v12 = *(unsigned int*)(v11 + 8);
					qword_140C8AE50 = v12;
				}
				else
				{
					v12 = 0i64;
					qword_140C8AE50 = 0i64;
				}
			}
			if (dword_140C8AE68)
			{
				v14 = qword_140C8AE60;
			}
			else
			{
				dword_140C8AE68 = 1;
				v13 = sub_140200220(0x522u);
				if (v13)
				{
					v14 = *(unsigned int*)(v13 + 12);
					qword_140C8AE60 = v14;
				}
				else
				{
					v14 = 0i64;
					qword_140C8AE60 = 0i64;
				}
			}
			v15 = *(unsigned int*)(v7 + 36);
			v16 = *(unsigned int*)(a3 + 296);
			v22 = 15i64;
			v23 = 0x900000000i64;
			*a2 = (v14 + v16) * (v10 + v12 * v15);
		}
		else
		{
			if ((dword_140C8AE24 & 2) == 0)
			{
				dword_140C8AE34 = 0;
				dword_140C8AE24 |= 2u;
			}
			v21 = 0i64;
			v22 = 1i64;
			v23 = 0i64;
			if (!(unsigned int)sub_140513F30(a1, &v21, 0))
				return 0i64;
			if (dword_140C8AE34)
			{
				v18 = *(float*)&dword_140C8AE30;
			}
			else
			{
				dword_140C8AE34 = 1;
				v17 = sub_140200220(0x3C3u);
				if (v17)
				{
					v18 = *(float*)(v17 + 24);
					dword_140C8AE30 = LODWORD(v18);
				}
				else
				{
					v18 = 0.0;
					dword_140C8AE30 = 0;
				}
			}
			v19 = 0i64;
			v19.m128_f32[0] = (float)((float)(int)v21 * v18) / (float)100;
			v20 = (int)v19.m128_f32[0];
			if ((int)v19.m128_f32[0] != 0x80000000 && (float)v20 != v19.m128_f32[0])
				v19.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1) + v20);
			v22 = 1i64;
			v23 = 0i64;
			*a2 = 100i64 * (unsigned int)(int)v19.m128_f32[0];
		}
		a2[1] = v22;
		a2[2] = v23;
		if (!*a2)
			return 0i64;
	}
	return 1i64;
}
// 140C8AE24: using guessed type int dword_140C8AE24;
// 140C8AE30: using guessed type int dword_140C8AE30;
// 140C8AE34: using guessed type int dword_140C8AE34;
// 140C8AE40: using guessed type __int64 qword_140C8AE40;
// 140C8AE48: using guessed type int dword_140C8AE48;
// 140C8AE50: using guessed type __int64 qword_140C8AE50;
// 140C8AE58: using guessed type int dword_140C8AE58;
// 140C8AE60: using guessed type __int64 qword_140C8AE60;
// 140C8AE68: using guessed type int dword_140C8AE68;
// 140C8AE78: using guessed type int dword_140C8AE78;
// 140C8AE88: using guessed type int dword_140C8AE88;

