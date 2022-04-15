//----- (000000014084ED10) ----------------------------------------------------
__int64 __fastcall sub_14084ED10(_QWORD* a1, __int64 a2)
{
	float v2; // xmm0_4
	unsigned int v5; // ebp
	__int64 result; // rax
	unsigned __int8* v7; // r8
	int v8; // ebx
	unsigned int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rdx
	int* v13; // rax
	float v14; // xmm6_4
	unsigned __int8* v15; // rdx
	unsigned int v16; // r8d
	__int64 v17; // rcx
	float* v18; // rbx
	float v19; // xmm0_4
	float v20; // xmm7_4
	float v21; // [rsp+78h] [rbp+10h] BYREF

	v5 = 1;
	if (*(_BYTE*)(a2 + 158))
	{
		*(_BYTE*)(a2 + 158) = 0;
		return 1i64;
	}
	v7 = (unsigned __int8*)a1[10];
	v8 = 0;
	v21 = 0.0;
	if (v7)
	{
		v9 = *v7;
		v10 = 0i64;
		while (1)
		{
			v11 = (unsigned int)(v10 + 1);
			if (v7[v11] == 25)
				break;
			v10 = (unsigned int)v11;
			if ((unsigned int)v11 >= v9)
				goto LABEL_7;
		}
		v12 = (__int64)&v7[4 * v10 + ((v9 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_7:
		v12 = 0i64;
	}
	v13 = (int*)&v21;
	if (v12)
		v13 = (int*)v12;
	v21 = *(float*)v13;
	v14 = v21;
	if ((a1[12] & 0x40i64) != 0)
	{
		sub_140836340(qword_140C61BB0, (__int64)a1, 6, *(_QWORD*)(a2 + 16));
		v14 = v14 + v2;
	}
	v15 = (unsigned __int8*)a1[16];
	if (v15)
	{
		v16 = *v15;
		while (1)
		{
			v17 = (unsigned int)(v8 + 1);
			if (v15[v17] == 25)
				break;
			++v8;
			if ((unsigned int)v17 >= v16)
				goto LABEL_22;
		}
		v18 = (float*)&v15[8 * v8 + ((v16 + 4) & 0xFFFFFFFC)];
		if (v18)
		{
			v19 = 0.0;
			v20 = v18[1] - *v18;
			if (v20 != 0.0)
				v19 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v20;
			v14 = v14 + (float)(v19 + *v18);
		}
	}
LABEL_22:
	if (v14 <= 0.0)
		return v5;
	if (*(_DWORD*)(a2 + 152))
	{
		*(_DWORD*)(a2 + 140) += sub_14084F860(v14);
		return 1i64;
	}
	v5 = sub_14084D1B0((__int64)a1, v14, a2);
	result = 3i64;
	if (v5 != 1)
		return v5;
	return result;
}
// 14084EDD0: variable 'v2' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

