//----- (0000000140855D20) ----------------------------------------------------
__int64 __fastcall sub_140855D20(__int64 a1, int a2, float a3, float a4, float a5)
{
	char v6; // di
	unsigned __int8* v7; // r9
	int v8; // ebx
	unsigned int v9; // r8d
	unsigned int v10; // r10d
	int v11; // edx
	__int64 v12; // rcx
	__int64 v13; // rdx
	float* v14; // rax
	__int64 result; // rax
	unsigned __int8* v16; // rdx
	unsigned int v17; // r9d
	__int64 v18; // rcx
	float v19; // [rsp+58h] [rbp+10h] BYREF

	v6 = a2;
	v7 = *(unsigned __int8**)(a1 + 40);
	v8 = 0;
	v9 = 1;
	v19 = dword_140C11000[a2];
	if (v7)
	{
		v10 = *v7;
		v11 = 0;
		while (1)
		{
			v12 = (unsigned int)(v11 + 1);
			if (v7[v12] == v6)
				break;
			++v11;
			if ((unsigned int)v12 >= v10)
				goto LABEL_5;
		}
		v13 = (__int64)&v7[4 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v13 = 0i64;
	}
	v14 = &v19;
	if (v13)
		v14 = (float*)v13;
	v19 = *v14;
	if (v19 == a3
		|| (v19 = a3, result = sub_14084FB50((__int64*)(a1 + 40), v6, SLODWORD(a3)), v9 = result, (_DWORD)result == 1))
	{
		if (a4 != 0.0 || a5 != 0.0)
			return sub_14084FAC0((__int64*)(a1 + 48), v6, __SPAIR64__(LODWORD(a5), LODWORD(a4)));
		v16 = *(unsigned __int8**)(a1 + 48);
		if (!v16)
			return v9;
		v17 = *v16;
		while (1)
		{
			v18 = (unsigned int)(v8 + 1);
			if (v16[v18] == v6)
				break;
			++v8;
			if ((unsigned int)v18 >= v17)
				return v9;
		}
		if (!&v16[8 * v8 + ((v17 + 4) & 0xFFFFFFFC)])
			return v9;
		else
			return sub_14084FAC0((__int64*)(a1 + 48), v6, __SPAIR64__(LODWORD(a5), LODWORD(a4)));
	}
	return result;
}
// 140C11000: using guessed type float dword_140C11000[5];

