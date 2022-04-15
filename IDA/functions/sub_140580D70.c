//----- (0000000140580D70) ----------------------------------------------------
int* __fastcall sub_140580D70(__int64 a1, __int64 a2)
{
	int v4; // r9d
	int v5; // edx
	int v6; // r10d
	int v7; // r8d
	int v8; // r9d
	float v9; // xmm1_4
	int* v10; // rax
	unsigned __int64 v11; // rbp
	int* v12; // rsi
	int* v13; // r12
	__int64 v14; // r13
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	int* v19; // r12
	__int64 v20; // r13
	__int64 v21; // rbx
	int* v22; // rax
	int* v23; // rdi
	unsigned __int64 v24; // rbx
	float v25; // xmm1_4
	unsigned __int64 v26; // r10
	__int64 v27; // r9
	unsigned __int64 v28; // rdx
	unsigned int v29; // r8d
	unsigned __int64 v30; // rbx
	__int64 v31; // rcx
	unsigned __int64 v32; // rbp
	__int64 v33; // rbx
	int* v34; // rax
	int* v35; // rdi
	int* v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rdi
	__int64 v39; // rcx
	unsigned __int64 v40; // r15
	int* v41; // rbp
	int* v42; // rdx
	__int64 v43; // rcx

	if (*(_DWORD*)a2 == *(_DWORD*)(a1 + 792) && *(_QWORD*)(a2 + 8) == *(_QWORD*)(a1 + 800))
	{
		v4 = *(_DWORD*)(a1 + 512) + *(_DWORD*)(a1 + 516);
		*(_DWORD*)(a1 + 772) = *(_DWORD*)(a2 + 16);
		*(_DWORD*)(a1 + 892) = *(_DWORD*)(a2 + 72) & 2;
		v5 = *(_DWORD*)(a2 + 52);
		*(_DWORD*)(a1 + 780) = v5;
		v6 = *(_DWORD*)(a2 + 56);
		*(_DWORD*)(a1 + 776) = v6;
		v7 = *(_DWORD*)(a2 + 60);
		*(_DWORD*)(a1 + 784) = v7;
		v8 = *(_DWORD*)(a1 + 508) + v4;
		if (v8)
			v9 = (float)(v5 + v7 + v6) / (float)v8;
		else
			v9 = 0.0;
		*(float*)(a1 + 788) = v9;
	}
	v10 = sub_14018B280(88i64, 0);
	v11 = 0i64;
	v12 = v10;
	if (v10)
	{
		*v10 = 0;
		*((_QWORD*)v10 + 1) = 0i64;
		*((_QWORD*)v10 + 2) = 0i64;
		*((_QWORD*)v10 + 9) = 0i64;
	}
	else
	{
		v12 = 0i64;
	}
	*(_QWORD*)v12 = *(_QWORD*)a2;
	*((_QWORD*)v12 + 1) = *(_QWORD*)(a2 + 8);
	v12[6] = *(_DWORD*)(a2 + 16);
	v13 = *(int**)(a2 + 24);
	v14 = *((_QWORD*)v12 + 2);
	if (v13)
	{
		v15 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v15;
			while (*((_WORD*)v13 + v15));
		}
		v16 = sub_14018B280(2 * v15 + 18, 0);
		if (v16)
		{
			*(_QWORD*)v16 = off_140B55060;
			*((_QWORD*)v16 + 1) = v15;
		}
		else
		{
			v16 = 0i64;
		}
		v17 = v16 + 4;
		v18 = 2 * v15;
		sub_1407DB590(v16 + 4, v13, v18);
		*(_WORD*)((char*)v17 + v18) = 0;
		*((_QWORD*)v12 + 2) = v17;
	}
	else
	{
		*((_QWORD*)v12 + 2) = 0i64;
	}
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	v12[8] = *(_DWORD*)(a2 + 32);
	v12[7] = *(_DWORD*)(a2 + 36);
	v12[9] = *(_DWORD*)(a2 + 40);
	v12[10] = *(_DWORD*)(a2 + 44);
	v12[14] = *(_DWORD*)(a2 + 52);
	v12[15] = *(_DWORD*)(a2 + 56);
	v12[16] = *(_DWORD*)(a2 + 60);
	v19 = *(int**)(a2 + 64);
	v20 = *((_QWORD*)v12 + 9);
	if (v19)
	{
		v21 = 0i64;
		if (*(_WORD*)v19)
		{
			do
				++v21;
			while (*((_WORD*)v19 + v21));
		}
		v22 = sub_14018B280(2 * v21 + 18, 0);
		if (v22)
		{
			*(_QWORD*)v22 = off_140B55060;
			*((_QWORD*)v22 + 1) = v21;
		}
		else
		{
			v22 = 0i64;
		}
		v23 = v22 + 4;
		v24 = 2 * v21;
		sub_1407DB590(v22 + 4, v19, v24);
		*(_WORD*)((char*)v23 + v24) = 0;
		*((_QWORD*)v12 + 9) = v23;
	}
	else
	{
		*((_QWORD*)v12 + 9) = 0i64;
	}
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
	v12[20] = *(_DWORD*)(a2 + 76);
	v25 = *(float*)(a2 + 48);
	if (v25 == 0.0)
	{
		*((_QWORD*)v12 + 6) = 0i64;
	}
	else if (v12 != (int*)-48i64)
	{
		sub_1401E82F0((__int64*)v12 + 6, v25);
	}
	v26 = *(_QWORD*)(a1 + 816);
	v27 = *(_QWORD*)(a1 + 808);
	v28 = v26;
	if (v26)
	{
		v29 = *v12;
		while (1)
		{
			v30 = v11 + ((v28 - v11) >> 1);
			v31 = *(_QWORD*)(v27 + 8 * v30);
			if (v29 == *(_DWORD*)v31 && *((_QWORD*)v12 + 1) == *(_QWORD*)(v31 + 8))
				break;
			if (v29 < *(_DWORD*)v31 || v29 <= *(_DWORD*)v31 && *((_QWORD*)v12 + 1) < *(_QWORD*)(v31 + 8))
				v28 = v11 + ((v28 - v11) >> 1);
			else
				v11 = v30 + 1;
			if (v11 >= v28)
				goto LABEL_44;
		}
	}
	else
	{
	LABEL_44:
		v30 = v11;
	}
	if (v30 < v26)
	{
		v38 = 2 * v30;
		v39 = *(_QWORD*)(8 * v30 + v27);
		if (*(_DWORD*)v39 == *v12 && *(_QWORD*)(v39 + 8) == *((_QWORD*)v12 + 1))
		{
			if (v39)
				sub_14057B7F0(v39);
			*(_QWORD*)(v38 * 4 + *(_QWORD*)(a1 + 808)) = v12;
		}
		else
		{
			v40 = v26 + 1;
			v41 = sub_14018DB00(*(_QWORD*)(a1 + 808), v26 + 1, 8i64);
			sub_1407DB590(&v41[v38 + 2], (int*)(v38 * 4 + *(_QWORD*)(a1 + 808)), 8 * (*(_QWORD*)(a1 + 816) - v30));
			*(_QWORD*)&v41[v38] = v12;
			v42 = *(int**)(a1 + 808);
			if (v42 != v41)
			{
				sub_1407DB590(v41, v42, 8 * v30);
				v43 = *(_QWORD*)(a1 + 808);
				if (v43)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v43 - 16) + 8i64))(v43 - 16);
				*(_QWORD*)(a1 + 808) = v41;
			}
			*(_QWORD*)(a1 + 816) = v40;
		}
	}
	else
	{
		v32 = v26 + 1;
		v33 = *(_QWORD*)(a1 + 816);
		v34 = sub_14018DB00(*(_QWORD*)(a1 + 808), v26 + 1, 8i64);
		v35 = v34;
		*(_QWORD*)&v34[2 * v33] = v12;
		v36 = *(int**)(a1 + 808);
		if (v36 != v34)
		{
			sub_1407DB590(v34, v36, 8i64 * *(_QWORD*)(a1 + 816));
			v37 = *(_QWORD*)(a1 + 808);
			if (v37)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
			*(_QWORD*)(a1 + 808) = v35;
		}
		*(_QWORD*)(a1 + 816) = v32;
	}
	return v12;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

