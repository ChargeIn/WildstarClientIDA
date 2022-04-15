#include "../winhttp.h"

//----- (0000000140513F30) ----------------------------------------------------
__int64 __fastcall sub_140513F30(unsigned int* a1, _QWORD* a2, int a3)
{
	__int64 v6; // rbp
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	float v15; // xmm0_4
	__m128 v16; // xmm1
	int v17; // ecx
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	__int64 v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]

	v6 = sub_14020CE20(*a1);
	if (!v6)
		return 0i64;
	if (a3)
	{
		v8 = 0;
		if ((dword_140C8AE94 & 1) != 0)
		{
			if (dword_140C8AD88)
			{
				v10 = qword_140C8AD80;
				goto LABEL_11;
			}
		}
		else
		{
			dword_140C8AD98 = 0;
			dword_140C8ADA8 = 0;
			dword_140C8ADB8 = 0;
			dword_140C8ADC8 = 0;
			dword_140C8AE94 |= 1u;
		}
		dword_140C8AD88 = 1;
		v9 = sub_140200220(0x521u);
		if (v9)
		{
			v10 = *(unsigned int*)(v9 + 4);
			qword_140C8AD80 = v10;
		}
		else
		{
			v10 = 0i64;
			qword_140C8AD80 = 0i64;
		}
	LABEL_11:
		if (dword_140C8AD98)
		{
			v12 = qword_140C8AD90;
		}
		else
		{
			dword_140C8AD98 = 1;
			v11 = sub_140200220(0x521u);
			if (v11)
			{
				v12 = *(unsigned int*)(v11 + 8);
				qword_140C8AD90 = v12;
			}
			else
			{
				v12 = 0i64;
				qword_140C8AD90 = 0i64;
			}
		}
		v13 = *(unsigned int*)(v6 + 36);
		v19 = 15i64;
		v20 = 0x900000000i64;
		*a2 = v10 + v12 * v13;
		a2[1] = v19;
		a2[2] = v20;
		goto LABEL_29;
	}
	v8 = 0;
	if ((dword_140C8AE94 & 2) == 0)
	{
		dword_140C8AD7C = 0;
		dword_140C8AE94 |= 2u;
	}
	v18 = 0i64;
	v19 = 1i64;
	v20 = 0i64;
	if (!(unsigned int)sub_140513CC0((__int64)a1, &v18))
		return 0i64;
	if (dword_140C8AD7C)
	{
		v15 = *(float*)&dword_140C8AD78;
	}
	else
	{
		dword_140C8AD7C = 1;
		v14 = sub_140200220(0x3C2u);
		if (v14)
		{
			v15 = *(float*)(v14 + 28);
			dword_140C8AD78 = LODWORD(v15);
		}
		else
		{
			v15 = 0.0;
			dword_140C8AD78 = 0;
		}
	}
	v16 = 0i64;
	v16.m128_f32[0] = (float)((float)(int)v18 * v15) / (float)100;
	v17 = (int)v16.m128_f32[0];
	if ((int)v16.m128_f32[0] != 0x80000000 && (float)v17 != v16.m128_f32[0])
		v16.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1) + v17);
	v19 = 1i64;
	v20 = 0i64;
	*a2 = 100i64 * (unsigned int)(int)v16.m128_f32[0];
	a2[1] = v19;
	a2[2] = 0i64;
LABEL_29:
	LOBYTE(v8) = *a2 != 0i64;
	return v8;
}
// 140C8AD78: using guessed type int dword_140C8AD78;
// 140C8AD7C: using guessed type int dword_140C8AD7C;
// 140C8AD80: using guessed type __int64 qword_140C8AD80;
// 140C8AD88: using guessed type int dword_140C8AD88;
// 140C8AD90: using guessed type __int64 qword_140C8AD90;
// 140C8AD98: using guessed type int dword_140C8AD98;
// 140C8ADA8: using guessed type int dword_140C8ADA8;
// 140C8ADB8: using guessed type int dword_140C8ADB8;
// 140C8ADC8: using guessed type int dword_140C8ADC8;
// 140C8AE94: using guessed type int dword_140C8AE94;

