//----- (0000000140838960) ----------------------------------------------------
__int64 __fastcall sub_140838960(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbp
	__int64 v5; // r9
	__int64 v6; // r15
	__int64 v7; // rcx
	__int64 v8; // r8
	int v9; // ebx
	__int64 v10; // r15
	__int64 v11; // rdx
	__int64 v12; // rbp
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // r9
	unsigned __int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rdx
	int v19; // r12d
	_QWORD* i; // rbx
	__int64 v21; // rdx
	int v23; // [rsp+28h] [rbp-60h]
	int v24; // [rsp+28h] [rbp-60h]

	v1 = *(_QWORD*)a1;
	LODWORD(v3) = 0;
	v4 = 0i64;
	if (*(_QWORD*)a1)
		goto LABEL_35;
	while (1)
	{
		v3 = (unsigned int)(v3 + 1);
		if ((unsigned int)v3 >= 0xC1)
			break;
		v1 = *(_QWORD*)(a1 + 8 * v3);
		if (v1)
			goto LABEL_6;
	}
	if (v1)
	{
	LABEL_35:
		while (1)
		{
		LABEL_6:
			v5 = *(_QWORD*)(v1 + 8);
			v6 = v1;
			LODWORD(v7) = v3;
			v23 = v3;
			v8 = v4;
			v1 = v5;
			if (!v5)
			{
				do
				{
					v7 = (unsigned int)(v7 + 1);
					if ((unsigned int)v7 >= 0xC1)
						break;
					v1 = *(_QWORD*)(a1 + 8 * v7);
					v8 = 0i64;
				} while (!v1);
				v23 = v7;
			}
			*(_QWORD*)(a1 + 8i64 * (unsigned int)v3) = v5;
			--* (_DWORD*)(a1 + 1544);
			v9 = dword_140C10F20;
			v4 = v8;
			sub_140835200(v6);
			sub_140881720(v9, v6);
			if (!v1)
				break;
			LODWORD(v3) = v23;
		}
	}
	v10 = a1 + 3112;
	LODWORD(v11) = 0;
	v12 = 0i64;
	v13 = *(_QWORD*)(a1 + 3112);
	if (v13)
	{
		while (1)
		{
		LABEL_17:
			v14 = *(_QWORD*)(v13 + 16);
			v15 = v13;
			LODWORD(v16) = v11;
			v24 = v11;
			v17 = v12;
			v13 = v14;
			if (!v14)
			{
				do
				{
					v16 = (unsigned int)(v16 + 1);
					if ((unsigned int)v16 >= 0xC1)
						break;
					v13 = *(_QWORD*)(v10 + 8 * v16);
					v17 = 0i64;
				} while (!v13);
				v24 = v16;
			}
			*(_QWORD*)(v10 + 8i64 * (unsigned int)v11) = v14;
			--* (_DWORD*)(a1 + 4656);
			v12 = v17;
			sub_140837930((_QWORD*)a1, v15);
			v18 = *(_QWORD*)(v15 + 40);
			v19 = dword_140C10F20;
			if (v18)
			{
				*(_QWORD*)(v15 + 48) = v18;
				sub_140881720(dword_140C10F20, v18);
				*(_QWORD*)(v15 + 40) = 0i64;
				*(_QWORD*)(v15 + 48) = 0i64;
				*(_DWORD*)(v15 + 56) = 0;
			}
			sub_140881720(v19, v15);
			if (!v13)
				break;
			LODWORD(v11) = v24;
		}
	}
	else
	{
		while (1)
		{
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= 0xC1)
				break;
			v13 = *(_QWORD*)(v10 + 8 * v11);
			if (v13)
				goto LABEL_17;
		}
	}
	if (*(_DWORD*)(a1 + 4740))
	{
		for (i = *(_QWORD**)(a1 + 4712); i; i = (_QWORD*)*i)
		{
			sub_1408387C0((__int64)(i + 4));
			v21 = i[2];
			if (v21)
			{
				sub_140881720(dword_140C10F20, v21);
				i[2] = 0i64;
			}
			i[3] = 0i64;
		}
	}
	if (*(_DWORD*)(a1 + 1552) != -1)
	{
		sub_140830670((int*)(a1 + 1552));
		*(_DWORD*)(a1 + 1552) = -1;
	}
	sub_14086BEB0(a1 + 4664);
	sub_140838890(a1 + 4712);
	return 1i64;
}
// 1408389ED: conditional instruction was optimized away because rbp.8==0
// 140838A68: conditional instruction was optimized away because rbx.8==0
// 140838ABD: conditional instruction was optimized away because rbp.8==0
// 140C10F20: using guessed type int dword_140C10F20;

