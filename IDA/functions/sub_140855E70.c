//----- (0000000140855E70) ----------------------------------------------------
__int64 __fastcall sub_140855E70(unsigned __int8** a1, __int64 a2, int a3)
{
	int* v3; // rdx
	int v4; // eax
	unsigned __int8* v5; // rax
	__int64 v7; // rdx
	int v8; // edi
	unsigned __int8** v9; // r14
	__int64 v10; // rdx
	int* v11; // rax
	unsigned __int8 v12; // bl
	unsigned int v13; // r15d
	__int64 v14; // rax
	__int64 v15; // rbp
	unsigned int v16; // r9d
	int* v17; // rdx
	unsigned __int64 v18; // rbx
	unsigned __int8* v19; // r8
	unsigned int v20; // r10d
	__int64 v21; // rcx
	__int64 v22; // rdx
	unsigned __int8* v23; // r8
	unsigned __int8* v24; // r8
	unsigned int v25; // edx
	__int64 v26; // rcx
	unsigned __int8* v28; // r8
	__int64 v29; // [rsp+60h] [rbp+8h]
	int* v30; // [rsp+68h] [rbp+10h] BYREF
	int v31; // [rsp+70h] [rbp+18h] BYREF

	v31 = a3;
	v3 = (int*)(a2 + 6);
	v30 = v3;
	v4 = *v3;
	v30 = v3 + 1;
	LODWORD(v29) = v4;
	v5 = *a1;
	BYTE4(v29) = *((_BYTE*)v3 + 4) != 0;
	v30 = (int*)((char*)v3 + 5);
	(*((void(__fastcall**)(unsigned __int8**, __int64))v5 + 5))(a1, v29);
	v7 = (__int64)a1[5];
	if (v7)
		sub_140881720(dword_140C10F20, v7);
	v8 = 0;
	v9 = a1 + 6;
	a1[5] = 0i64;
	v10 = (__int64)a1[6];
	if (v10)
		sub_140881720(dword_140C10F20, v10);
	v11 = v30;
	*v9 = 0i64;
	v12 = *(_BYTE*)v11;
	v30 = (int*)((char*)v11 + 1);
	if (v12)
	{
		v13 = (v12 + 4) & 0xFFFFFFFC;
		v14 = sub_1408819F0(dword_140C10F20, v13 + 4 * v12);
		v15 = v14;
		if (!v14)
		{
			v16 = 52;
			goto LABEL_11;
		}
		*(_BYTE*)v14 = v12;
		sub_1407DB590((int*)(v14 + 1), v30, v12);
		v17 = (int*)((char*)v30 + v12);
		v18 = 4i64 * v12;
		v30 = v17;
		sub_1407DB590((int*)(v15 + v13), v17, v18);
		v30 = (int*)((char*)v30 + v18);
		a1[5] = (unsigned __int8*)v15;
	}
	v16 = sub_140850240((__int64*)a1 + 6, &v30);
	if (v16 == 1)
		v16 = (*((__int64(__fastcall**)(unsigned __int8**, int**, int*, __int64)) * a1 + 9))(a1, &v30, &v31, 1i64);
LABEL_11:
	v19 = a1[5];
	if (v19)
	{
		v20 = *v19;
		v21 = 0i64;
		while (1)
		{
			v22 = (unsigned int)(v21 + 1);
			if (v19[v22] == 14)
				break;
			v21 = (unsigned int)v22;
			if ((unsigned int)v22 >= v20)
				goto LABEL_18;
		}
		v23 = &v19[4 * v21 + ((v20 + 4) & 0xFFFFFFFC)];
		if (v23)
			*(_DWORD*)v23 *= dword_140C110B4 / 0x3E8u;
	}
LABEL_18:
	v24 = *v9;
	if (*v9)
	{
		v25 = *v24;
		while (1)
		{
			v26 = (unsigned int)(v8 + 1);
			if (v24[v26] == 14)
				break;
			++v8;
			if ((unsigned int)v26 >= v25)
				return v16;
		}
		v28 = &v24[8 * v8 + ((v25 + 4) & 0xFFFFFFFC)];
		if (v28)
		{
			*(_DWORD*)v28 *= dword_140C110B4 / 0x3E8u;
			*((_DWORD*)v28 + 1) *= dword_140C110B4 / 0x3E8u;
		}
	}
	return v16;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

