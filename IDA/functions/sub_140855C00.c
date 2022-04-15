//----- (0000000140855C00) ----------------------------------------------------
__int64 __fastcall sub_140855C00(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
	char v6; // di
	unsigned __int8* v7; // r11
	int v8; // ebx
	unsigned int v11; // r10d
	unsigned int v12; // r8d
	int v13; // edx
	__int64 v14; // rcx
	__int64 v15; // rdx
	int* v16; // rax
	__int64 result; // rax
	unsigned __int8* v18; // rdx
	unsigned int v19; // r8d
	__int64 v20; // rcx
	int v21; // [rsp+58h] [rbp+10h] BYREF

	v6 = a2;
	v7 = *(unsigned __int8**)(a1 + 40);
	v8 = 0;
	v11 = 1;
	v21 = dword_140C11000[a2];
	if (v7)
	{
		v12 = *v7;
		v13 = 0;
		while (1)
		{
			v14 = (unsigned int)(v13 + 1);
			if (v7[v14] == v6)
				break;
			++v13;
			if ((unsigned int)v14 >= v12)
				goto LABEL_5;
		}
		v15 = (__int64)&v7[4 * v13 + ((v12 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v15 = 0i64;
	}
	v16 = &v21;
	if (v15)
		v16 = (int*)v15;
	if (*v16 == a3 || (result = sub_14084FB50((__int64*)(a1 + 40), v6, a3), v11 = result, (_DWORD)result == 1))
	{
		if (a4 || a5)
			return sub_14084FAC0((__int64*)(a1 + 48), v6, __SPAIR64__(a5, a4));
		v18 = *(unsigned __int8**)(a1 + 48);
		if (!v18)
			return v11;
		v19 = *v18;
		while (1)
		{
			v20 = (unsigned int)(v8 + 1);
			if (v18[v20] == v6)
				break;
			++v8;
			if ((unsigned int)v20 >= v19)
				return v11;
		}
		if (&v18[8 * v8 + ((v19 + 4) & 0xFFFFFFFC)])
			return sub_14084FAC0((__int64*)(a1 + 48), v6, __SPAIR64__(a5, a4));
		else
			return v11;
	}
	return result;
}
// 140C11000: using guessed type int dword_140C11000[5];

