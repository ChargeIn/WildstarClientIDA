//----- (00000001407819A0) ----------------------------------------------------
__int64 __fastcall sub_1407819A0(__int64 a1, int a2, unsigned int* a3, __int64 a4)
{
	unsigned int v4; // eax
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	unsigned int v9; // eax
	int* v11; // rbx
	unsigned __int64 v12; // rdi
	unsigned int v13; // r14d
	int v14; // r15d
	__int64 v15; // r15
	__int64 v16; // r13
	int* v17; // rax
	__int64 v18; // rbp
	float v19; // xmm0_4
	unsigned int v20; // edx
	__int64 v21; // r8
	int v22; // r8d
	unsigned int v23; // r9d
	float* v24; // rdx
	float* v25; // rcx
	bool v26; // zf
	int v27; // eax
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rax
	unsigned int v32; // r14d
	__int64 v33; // rbp
	__int64 v34; // rcx
	float v35; // xmm1_4
	float v36; // xmm0_4
	unsigned int v37; // ebp
	__int64 v38; // rsi
	__int64 v39; // rcx
	int v40; // eax
	__m128i v41; // [rsp+40h] [rbp-98h] BYREF
	_DWORD v42[8]; // [rsp+50h] [rbp-88h] BYREF
	char v43[4]; // [rsp+70h] [rbp-68h] BYREF
	int v44; // [rsp+74h] [rbp-64h]
	float* v45; // [rsp+E0h] [rbp+8h] BYREF
	float* v46; // [rsp+F0h] [rbp+18h] BYREF

	v4 = a3[13];
	*(_DWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = a4;
	*(_DWORD*)(a1 + 12) = v4;
	if (a4)
	{
		v7 = (_QWORD*)(a4 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v7;
			v8 = a1 + 32;
			*(_QWORD*)v8 = *v7;
			*v7 = a1;
			if (*(_QWORD*)v8)
				*(_QWORD*)(*(_QWORD*)v8 + 24i64) = v8;
		}
	}
	v9 = *a3;
	if (!*a3)
		return 2147500037i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0;
	v41 = 0ui64;
	if (v9)
	{
		while (1)
		{
			v14 = sub_140633CB0(v13, *(_DWORD*)(*((_QWORD*)a3 + 1) + 4i64 * v13), &v45);
			if (v14 < 0)
				break;
			v15 = (__int64)v45;
			if ((unsigned __int64)(*(__int64(__fastcall**)(float*))(*(_QWORD*)v45 + 32i64))(v45) < 2)
			{
				v14 = -2147467259;
				goto LABEL_41;
			}
			v16 = v12 + 1;
			v17 = sub_14018DB00((__int64)v11, v12 + 1, 8i64);
			*(_QWORD*)&v17[2 * v12] = v15;
			v18 = (__int64)v17;
			if (v11 != v17)
			{
				sub_1407DB590(v17, v11, 8 * v12);
				if (v11)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
				v11 = (int*)v18;
				v41.m128i_i64[0] = v18;
			}
			++v13;
			++v12;
			v41.m128i_i64[1] = v16;
			if (v13 >= *a3)
				goto LABEL_15;
		}
		v37 = 0;
		if (v12)
		{
			v38 = 0i64;
			do
			{
				v39 = *(_QWORD*)&v11[2 * v38];
				if (v39)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
					*(_QWORD*)&v11[2 * v38] = 0i64;
				}
				v38 = ++v37;
			} while (v37 < v12);
		}
	}
	else
	{
	LABEL_15:
		v19 = sub_1401C9770((unsigned __int16*)a3 + 8);
		v45 = 0i64;
		v46 = 0i64;
		*(float*)(a1 + 64) = v19;
		v20 = a3[12];
		*(_DWORD*)(a1 + 100) = v20;
		*(_DWORD*)(a1 + 72) = a3[6];
		*(_DWORD*)(a1 + 76) = a3[7];
		sub_1407A6E40((__int64**)&v41, v20, v21, (__int64)v43, v42, &v45, &v46);
		v24 = v45;
		v25 = v46;
		v26 = v46 == 0i64;
		*(_DWORD*)(a1 + 116) = v45 != 0i64;
		*(_DWORD*)(a1 + 120) = !v26;
		if (v24)
			v44 = *(_DWORD*)(a1 + 72);
		if (v25)
			v42[1] = *(_DWORD*)(a1 + 76);
		v27 = sub_1407A5BA0((__int64**)(a1 + 56), &v41, v22, v23, v24, v25);
		v28 = *(_QWORD*)(a1 + 56);
		v14 = v27;
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_QWORD*)(a1 + 136) = 0i64;
		v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 32i64))(v28);
		v30 = *(_QWORD*)(a1 + 56);
		*(_QWORD*)(a1 + 144) = v29 - 1;
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 32i64))(v30);
		v26 = *(_DWORD*)(a1 + 116) == 0;
		*(_QWORD*)(a1 + 152) = v31 - 1;
		if (!v26)
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 56) + 72i64))(
				*(_QWORD*)(a1 + 56),
				101i64,
				a1 + 136);
		if (*(_DWORD*)(a1 + 120))
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 56) + 72i64))(
				*(_QWORD*)(a1 + 56),
				102i64,
				a1 + 144);
		v32 = 0;
		*(_QWORD*)(a1 + 160) = 0i64;
		if (v12)
		{
			v33 = 0i64;
			do
			{
				v34 = *(_QWORD*)&v11[2 * v33];
				if (v34)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
					*(_QWORD*)&v11[2 * v33] = 0i64;
				}
				v33 = ++v32;
			} while (v32 < v12);
		}
		if (v14 >= 0)
		{
			*(_DWORD*)(a1 + 64) = -1082130432;
			*(_DWORD*)(a1 + 68) = a3[5];
			sub_1401ADB90(&v41, (unsigned __int16*)a3 + 16);
			*(__m128i*)(a1 + 80) = v41;
			*(_DWORD*)(a1 + 96) = a3[10];
			v35 = *(float*)(a1 + 64);
			*(_DWORD*)(a1 + 104) = a3[11];
			if (v35 == -1.0 || v35 > 0.0000099999997)
				v36 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 112i64))(*(_QWORD*)(a1 + 56));
			else
				v36 = 0.0;
			v40 = *(_DWORD*)(a1 + 8);
			*(float*)(a1 + 108) = v36;
			v14 = 0;
			*(_DWORD*)(a1 + 112) = v40;
		}
	}
LABEL_41:
	if (v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return (unsigned int)v14;
}
// 140781B6A: variable 'v21' is possibly undefined
// 140781BD5: variable 'v22' is possibly undefined
// 140781BD5: variable 'v23' is possibly undefined
// 1407819A0: using guessed type char var_68[4];

