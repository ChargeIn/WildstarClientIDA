//----- (0000000140514170) ----------------------------------------------------
__int64 __fastcall sub_140514170(unsigned int* a1, _QWORD* a2, int a3)
{
	__int64 v4; // rbp
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	float v13; // xmm0_4
	__m128 v14; // xmm1
	int v15; // ecx
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]

	if (a3)
	{
		v4 = sub_14020CE20(*a1);
		if (!v4)
			return 0i64;
		v6 = 0;
		if ((dword_140C8AE20 & 1) != 0)
		{
			if (dword_140C8ADD8)
			{
				v8 = qword_140C8ADD0;
				goto LABEL_11;
			}
		}
		else
		{
			dword_140C8ADE8 = 0;
			dword_140C8ADF8 = 0;
			dword_140C8AE08 = 0;
			dword_140C8AE18 = 0;
			dword_140C8AE20 |= 1u;
		}
		dword_140C8ADD8 = 1;
		v7 = sub_140200220(0x520u);
		if (v7)
		{
			v8 = *(unsigned int*)(v7 + 4);
			qword_140C8ADD0 = v8;
		}
		else
		{
			v8 = 0i64;
			qword_140C8ADD0 = 0i64;
		}
	LABEL_11:
		if (dword_140C8ADE8)
		{
			v10 = qword_140C8ADE0;
		}
		else
		{
			dword_140C8ADE8 = 1;
			v9 = sub_140200220(0x520u);
			if (v9)
			{
				v10 = *(unsigned int*)(v9 + 8);
				qword_140C8ADE0 = v10;
			}
			else
			{
				v10 = 0i64;
				qword_140C8ADE0 = 0i64;
			}
		}
		v11 = *(unsigned int*)(v4 + 36);
		v17 = 15i64;
		v18 = 0x900000000i64;
		*a2 = v8 + v10 * v11;
		a2[1] = v17;
		a2[2] = v18;
		goto LABEL_29;
	}
	v6 = 0;
	if ((dword_140C8AE20 & 2) == 0)
	{
		dword_140C8AE2C = 0;
		dword_140C8AE20 |= 2u;
	}
	v16 = 0i64;
	v17 = 1i64;
	v18 = 0i64;
	if (!(unsigned int)sub_140513CC0((__int64)a1, &v16))
		return 0i64;
	if (dword_140C8AE2C)
	{
		v13 = *(float*)&dword_140C8AE28;
	}
	else
	{
		dword_140C8AE2C = 1;
		v12 = sub_140200220(0x3C4u);
		if (v12)
		{
			v13 = *(float*)(v12 + 28);
			dword_140C8AE28 = LODWORD(v13);
		}
		else
		{
			v13 = 0.0;
			dword_140C8AE28 = 0;
		}
	}
	v14 = 0i64;
	v14.m128_f32[0] = (float)((float)(int)v16 * v13) / (float)100;
	v15 = (int)v14.m128_f32[0];
	if ((int)v14.m128_f32[0] != 0x80000000 && (float)v15 != v14.m128_f32[0])
		v14.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v14, v14)) & 1) + v15);
	v17 = 1i64;
	v18 = 0i64;
	*a2 = 100i64 * (unsigned int)(int)v14.m128_f32[0];
	a2[1] = v17;
	a2[2] = 0i64;
LABEL_29:
	LOBYTE(v6) = *a2 != 0i64;
	return v6;
}
// 140C8ADD0: using guessed type __int64 qword_140C8ADD0;
// 140C8ADD8: using guessed type int dword_140C8ADD8;
// 140C8ADE0: using guessed type __int64 qword_140C8ADE0;
// 140C8ADE8: using guessed type int dword_140C8ADE8;
// 140C8ADF8: using guessed type int dword_140C8ADF8;
// 140C8AE08: using guessed type int dword_140C8AE08;
// 140C8AE18: using guessed type int dword_140C8AE18;
// 140C8AE20: using guessed type int dword_140C8AE20;
// 140C8AE28: using guessed type int dword_140C8AE28;
// 140C8AE2C: using guessed type int dword_140C8AE2C;

