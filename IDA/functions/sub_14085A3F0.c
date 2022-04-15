//----- (000000014085A3F0) ----------------------------------------------------
__m128 __fastcall sub_14085A3F0(__int64 a1, unsigned int a2, int a3)
{
	float v3; // xmm7_4
	__int64 v4; // rbx
	__int128 v7; // xmm6
	unsigned __int8* v8; // r8
	float** v9; // rsi
	unsigned int v10; // r9d
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rdx
	float* v14; // rax
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	float v17; // xmm6_4
	__int64 v18; // r8
	unsigned __int8* v19; // r8
	unsigned int v20; // r9d
	int v21; // ecx
	__int64 v22; // rdx
	float* v23; // rdx
	float* i; // rax
	__int64 v25; // rcx
	int v27[2]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v28; // [rsp+28h] [rbp-50h]
	__int64 v29; // [rsp+30h] [rbp-48h]
	char v30; // [rsp+38h] [rbp-40h]
	int v31; // [rsp+3Ch] [rbp-3Ch]
	char v32; // [rsp+40h] [rbp-38h]
	float v33; // [rsp+90h] [rbp+18h] BYREF

	v30 &= 0xFCu;
	v32 &= ~1u;
	v3 = 0.0;
	v4 = a3;
	v27[1] = 1065353216;
	v7 = 0i64;
	v27[0] = 0;
	v28 = 0i64;
	v29 = 0i64;
	v31 = 0;
	if (a3)
	{
		if (a3 == 4)
		{
			sub_1408527D0(a1, (float*)v27, 8);
			v7 = (unsigned int)v29;
		}
	}
	else
	{
		sub_1408527D0(a1, (float*)v27, 1);
		v7 = (unsigned int)v27[0];
	}
	v8 = *(unsigned __int8**)(a1 + 80);
	v9 = 0i64;
	v33 = 0.0;
	if (v8)
	{
		v10 = *v8;
		v11 = 0i64;
		while (1)
		{
			v12 = (unsigned int)(v11 + 1);
			if (v8[v12] == (_BYTE)v4)
				break;
			v11 = (unsigned int)v12;
			if ((unsigned int)v12 >= v10)
				goto LABEL_9;
		}
		v13 = (__int64)&v8[4 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_9:
		v13 = 0i64;
	}
	v14 = &v33;
	v15 = (unsigned int)dword_1409A3530[v4];
	if (v13)
		v14 = (float*)v13;
	v33 = *v14;
	v16 = *(_QWORD*)(a1 + 96);
	v17 = *(float*)&v7 + v33;
	if (_bittest64(&v16, v15))
	{
		sub_140836340(qword_140C61BB0, a1, v15, 0i64);
		v17 = v17 + 1.0;
	}
	v18 = *(_QWORD*)(a1 + 40);
	if (v18)
	{
		v19 = *(unsigned __int8**)(v18 + 24);
		if (v19)
		{
			v20 = *v19;
			v21 = 0;
			while (1)
			{
				v22 = (unsigned int)(v21 + 1);
				if (v19[v22] == (_BYTE)v4)
					break;
				++v21;
				if ((unsigned int)v22 >= v20)
					goto LABEL_23;
			}
			v23 = (float*)&v19[16 * v21 + ((v20 + 4) & 0xFFFFFFFC)];
			if (v23)
				v17 = v17 + *v23;
		}
	}
LABEL_23:
	if ((_DWORD)v4)
	{
		if ((_DWORD)v4 == 4)
			v9 = (float**)(a1 + 272);
	}
	else
	{
		v9 = (float**)(a1 + 224);
	}
	for (i = *v9; i; i = *(float**)i)
		v3 = v3 + i[10];
	if (v3 < *(float*)(a1 + 168))
		v3 = *(float*)(a1 + 168);
	v25 = *(_QWORD*)(a1 + 72);
	*(float*)&v7 = v17 + v3;
	if (v25 && (a2 == 1 || !sub_14085AF10(v25)))
		*(float*)&v7 = *(float*)&v7 + sub_14085A3F0(*(_QWORD*)(a1 + 72), a2, (unsigned int)v4);
	return (__m128)v7;
}
// 1409A3530: using guessed type int dword_1409A3530[];
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

