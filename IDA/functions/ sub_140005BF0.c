//----- (0000000140005BF0) ----------------------------------------------------
void __fastcall sub_140005BF0(__int64* a1, __int64 a2, int a3)
{
	int v5; // ebx
	int* v6; // rax
	unsigned __int64 v7; // rsi
	__int64 v8; // r14
	int* v9; // r12
	__int64 v10; // r13
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	unsigned __int64 v15; // r12
	unsigned __int64 v16; // rbx
	__int64 v17; // r13
	__int64 v18; // rdi
	__int64 v19; // r15
	unsigned __int64* v20; // rcx
	__int64 v21; // r8
	int* v22; // rax
	__int64* v23; // rdi
	__int64 v24; // rcx
	unsigned __int64 v25; // r8
	_QWORD** v26; // rcx
	__int64* v27; // rdi
	__int64 v28; // rbx
	int* v29; // rax
	int* v30; // rsi
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rbx
	int* v34; // rax
	int* v35; // rsi
	__int64 v36; // rbx
	int* v37; // rax
	int* v38; // rsi
	int* v39; // rdx
	__int64 v40; // rcx
	unsigned __int64 v41; // rdx
	_QWORD** v42; // rcx
	__int64 v43; // rsi
	__int64 v44; // rbx
	int* v45; // rax
	int* v46; // rdi
	int* v47; // rdx
	__int64 v48; // rcx
	__int64 v49; // rcx
	__int64 v50; // rcx
	char v51[56]; // [rsp+20h] [rbp-38h] BYREF

	v5 = a3;
	v6 = sub_14018B280(120i64, 0);
	v7 = 0i64;
	v8 = (__int64)v6;
	if (v6)
	{
		v6[6] = 0;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 7) = 0i64;
		*((_QWORD*)v6 + 8) = 0i64;
		v6[24] = 0;
		*((_QWORD*)v6 + 13) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	*(_QWORD*)v8 = *(_QWORD*)a2;
	*(_DWORD*)(v8 + 8) = *(_DWORD*)(a2 + 8);
	*(_QWORD*)(v8 + 16) = *(_QWORD*)(a2 + 16);
	v9 = *(int**)(a2 + 24);
	v10 = *(_QWORD*)(v8 + 56);
	if (v9)
	{
		v11 = 0i64;
		if (*(_WORD*)v9)
		{
			do
				++v11;
			while (*((_WORD*)v9 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 1) = v11;
			*(_QWORD*)v12 = off_140B55060;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		v14 = 2 * v11;
		sub_1407DB590(v12 + 4, v9, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		v5 = a3;
		*(_QWORD*)(v8 + 56) = v13;
	}
	else
	{
		*(_QWORD*)(v8 + 56) = 0i64;
	}
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	*(_QWORD*)(v8 + 24) = *(_QWORD*)(a2 + 40);
	*(_QWORD*)(v8 + 32) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(v8 + 48) = *(_QWORD*)(a2 + 56);
	*(_DWORD*)(v8 + 40) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(v8 + 76) = *(_DWORD*)(a2 + 64);
	*(_QWORD*)(v8 + 88) = *(_QWORD*)(a2 + 72);
	if (!v5)
		sub_140007810((__int64)(a1 + 1), (__int64)v51, (unsigned __int64*)a2);
	if (*(_QWORD*)(*(_QWORD*)(v8 + 56) - 8i64))
	{
		v15 = a1[8];
		v16 = 0i64;
		if (v15)
		{
			v17 = a1[7];
			v18 = *(_QWORD*)(v8 + 56);
			v19 = v17;
			while (1)
			{
				v20 = *(unsigned __int64**)(***(_QWORD***)v19 + 56i64);
				if (v20 == (unsigned __int64*)v18)
					break;
				if (v20)
				{
					if (v18)
					{
						v21 = *(v20 - 1);
						if (v21 == *(_QWORD*)(v18 - 8) && !(unsigned int)sub_1407E6AF0(v20, v18, 2 * v21))
							break;
					}
				}
				++v16;
				v19 += 8i64;
				if (v16 >= v15)
					goto LABEL_25;
			}
			if (*(_QWORD*)v8)
			{
				v24 = *(_QWORD*)(v17 + 8 * v16);
				v25 = *(_QWORD*)(v24 + 8);
				if (v25)
				{
					v26 = *(_QWORD***)v24;
					while (**v26 != *(_QWORD*)v8)
					{
						++v7;
						++v26;
						if (v7 >= v25)
							goto LABEL_32;
					}
					v31 = *(_QWORD*)(v8 + 64);
					if (v31)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
					v32 = *(_QWORD*)(v8 + 56);
					if (v32)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
				LABEL_65:
					sub_14018B900(v8, 0);
					return;
				}
			}
		LABEL_32:
			v27 = *(__int64**)(v17 + 8 * v16);
			v28 = v27[1];
			v29 = sub_14018DB00(*v27, v28 + 1, 8i64);
			v30 = v29;
			*(_QWORD*)&v29[2 * v28] = v8;
			if ((int*)*v27 != v29)
			{
				sub_1407DB590(v29, (int*)*v27, 8 * v27[1]);
				if (*v27)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v27 - 16) + 8i64))(*v27 - 16);
				*v27 = (__int64)v30;
			}
			v27[1] = v28 + 1;
		}
		else
		{
		LABEL_25:
			v22 = sub_14018B280(16i64, 0);
			v23 = (__int64*)v22;
			if (v22)
			{
				*((_QWORD*)v22 + 1) = 0i64;
				*(_QWORD*)v22 = 0i64;
			}
			else
			{
				v23 = 0i64;
			}
			v33 = v23[1];
			v34 = sub_14018DB00(*v23, v33 + 1, 8i64);
			v35 = v34;
			*(_QWORD*)&v34[2 * v33] = v8;
			if ((int*)*v23 != v34)
			{
				sub_1407DB590(v34, (int*)*v23, 8 * v23[1]);
				if (*v23)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v23 - 16) + 8i64))(*v23 - 16);
				*v23 = (__int64)v35;
			}
			v23[1] = v33 + 1;
			v36 = a1[8];
			v37 = sub_14018DB00(a1[7], v36 + 1, 8i64);
			v38 = v37;
			*(_QWORD*)&v37[2 * v36] = v23;
			v39 = (int*)a1[7];
			if (v39 != v37)
			{
				sub_1407DB590(v37, v39, 8 * a1[8]);
				v40 = a1[7];
				if (v40)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
				a1[7] = (__int64)v38;
			}
			a1[8] = v36 + 1;
		}
	}
	else
	{
		v41 = a1[6];
		if (v41)
		{
			v42 = (_QWORD**)a1[5];
			while (**v42 != *(_QWORD*)a2)
			{
				++v7;
				++v42;
				if (v7 >= v41)
					goto LABEL_56;
			}
			v49 = *(_QWORD*)(v8 + 64);
			if (v49)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
			v50 = *(_QWORD*)(v8 + 56);
			if (v50)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50 - 16) + 8i64))(v50 - 16);
			goto LABEL_65;
		}
	LABEL_56:
		v43 = v41 + 1;
		v44 = a1[6];
		v45 = sub_14018DB00(a1[5], v41 + 1, 8i64);
		v46 = v45;
		*(_QWORD*)&v45[2 * v44] = v8;
		v47 = (int*)a1[5];
		if (v47 != v45)
		{
			sub_1407DB590(v45, v47, 8 * a1[6]);
			v48 = a1[5];
			if (v48)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v48 - 16) + 8i64))(v48 - 16);
			a1[5] = (__int64)v46;
		}
		a1[6] = v43;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140005BF0: using guessed type char var_38[56];

