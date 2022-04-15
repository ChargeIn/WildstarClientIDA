//----- (00000001408524D0) ----------------------------------------------------
__int64 __fastcall sub_1408524D0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	int v3; // xmm0_4
	__int64 v4; // rbx
	__int64 v6; // r15
	bool v8; // r14
	bool v10; // r15
	unsigned __int8* v11; // r8
	unsigned int v12; // r9d
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rdx
	int* v16; // rax
	int v17; // eax
	unsigned __int8* v18; // r8
	unsigned int v19; // r9d
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rdx
	int* v23; // rax
	unsigned __int8* v24; // r8
	unsigned int v25; // r9d
	__int64 v26; // rcx
	__int64 v27; // rdx
	int* v28; // rax
	int v30; // [rsp+50h] [rbp+8h] BYREF

	v4 = 0i64;
	v6 = *(_QWORD*)(a1 + 96);
	v8 = (v6 & 0x200000) != 0;
	v10 = (v6 & 0x100000) != 0;
	if (v10 || v8)
	{
		if (v10)
		{
			sub_140836340(qword_140C61BB0, a1, 20, a2);
			*(_DWORD*)a3 = v3;
		}
		else
		{
			*(_DWORD*)a3 = 0;
		}
		if (!v8)
		{
			*(_DWORD*)(a3 + 4) = 0;
			goto LABEL_24;
		}
		sub_140836340(qword_140C61BB0, a1, 21, a2);
	}
	else
	{
		v11 = *(unsigned __int8**)(a1 + 80);
		v30 = 0;
		if (v11)
		{
			v12 = *v11;
			v13 = 0i64;
			while (1)
			{
				v14 = (unsigned int)(v13 + 1);
				if (v11[v14] == 11)
					break;
				v13 = (unsigned int)v14;
				if ((unsigned int)v14 >= v12)
					goto LABEL_12;
			}
			v15 = (__int64)&v11[4 * v13 + ((v12 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_12:
			v15 = 0i64;
		}
		v16 = &v30;
		if (v15)
			v16 = (int*)v15;
		v17 = *v16;
		v30 = 0;
		*(_DWORD*)a3 = v17;
		v18 = *(unsigned __int8**)(a1 + 80);
		if (v18)
		{
			v19 = *v18;
			v20 = 0i64;
			while (1)
			{
				v21 = (unsigned int)(v20 + 1);
				if (v18[v21] == 12)
					break;
				v20 = (unsigned int)v21;
				if ((unsigned int)v21 >= v19)
					goto LABEL_19;
			}
			v22 = (__int64)&v18[4 * v20 + ((v19 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_19:
			v22 = 0i64;
		}
		v23 = &v30;
		if (v22)
			v23 = (int*)v22;
		v30 = *v23;
		v3 = v30;
	}
	*(_DWORD*)(a3 + 4) = v3;
LABEL_24:
	v24 = *(unsigned __int8**)(a1 + 80);
	v30 = 0;
	if (v24)
	{
		v25 = *v24;
		v26 = 0i64;
		while (1)
		{
			v27 = (unsigned int)(v26 + 1);
			if (v24[v27] == 13)
				break;
			v26 = (unsigned int)v27;
			if ((unsigned int)v27 >= v25)
				goto LABEL_32;
		}
		v4 = (__int64)&v24[4 * v26 + ((v25 + 4) & 0xFFFFFFFC)];
	}
LABEL_32:
	v28 = &v30;
	if (v4)
		v28 = (int*)v4;
	v30 = *v28;
	*(_DWORD*)(a3 + 8) = v30;
	*(_BYTE*)(a3 + 12) = (*(_BYTE*)(a1 + 91) & 0x20) != 0;
	return v10 | (unsigned int)v8;
}
// 140852532: variable 'v3' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

