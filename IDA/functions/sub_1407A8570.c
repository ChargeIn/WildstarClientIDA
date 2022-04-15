//----- (00000001407A8570) ----------------------------------------------------
void __fastcall sub_1407A8570(__int64 a1, unsigned int a2, __int64 a3)
{
	unsigned int v3; // r13d
	__int64* v4; // rsi
	unsigned __int64 v6; // rbx
	unsigned int v7; // r11d
	int v8; // r15d
	unsigned int v9; // edi
	__int64 v10; // r10
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rdx
	_DWORD* v13; // rax
	int* v14; // rax
	int* v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // r8
	char* v18; // r9
	char* v19; // rdx
	signed __int64 v20; // rcx
	__int16 v21; // ax
	int* v22; // rax
	int* v23; // rcx
	int* v24; // rdx
	int* v25; // rcx
	__int64 v26; // rax
	__int128 v27; // xmm0
	int* v28; // rax
	int* v29; // rcx
	int* v30; // rcx
	int* v31; // rdx
	__int64 v32; // rax
	__int128 v33; // xmm0
	unsigned __int64 v34; // rbx
	int* v35; // rax
	int* v36; // rdi
	int* v37; // rax
	int* v38; // rdx
	int* v39; // rdi
	__int64 v40; // rcx
	int* v41; // rax
	int* v42; // rdx
	int* v43; // rdi
	__int64 v44; // rcx
	unsigned int v45; // [rsp+60h] [rbp+8h]

	v3 = *(_DWORD*)(a1 + 144);
	v4 = (__int64*)(a1 + 136);
	v45 = v3;
	v6 = a2 + v3;
	sub_14004EED0((__int64*)(a1 + 136), v6);
	sub_14004EED0((__int64*)(a1 + 104), (unsigned int)v6);
	sub_14004EED0((__int64*)(a1 + 120), (unsigned int)v6);
	v7 = a2;
	*(_DWORD*)(a1 + 152) = 0;
	v8 = 0;
	v9 = 0;
	if (a2)
	{
		v10 = a3;
		do
		{
			v11 = *(_QWORD*)(a1 + 436152);
			v12 = 0i64;
			if (v11)
			{
				v13 = *(_DWORD**)(a1 + 436144);
				while (*v13 != *(_DWORD*)(156i64 * (v9 + v8) + v10))
				{
					++v12;
					++v13;
					if (v12 >= v11)
						goto LABEL_7;
				}
				++v8;
				--v9;
				--v3;
			}
			else
			{
			LABEL_7:
				v14 = sub_14018B280(392i64, 0);
				v15 = v14;
				if (v14)
					v14[36] = 1;
				else
					v15 = 0i64;
				v16 = 8i64 * v3;
				v17 = 32i64;
				*(_QWORD*)(v16 + *v4) = v15;
				v18 = (char*)(a3 + 156i64 * (v9 + v8));
				v19 = (char*)(*(_QWORD*)(*v4 + v16) + 68i64);
				v20 = v18 - v19;
				while (v17 != -2147483614)
				{
					v21 = *(_WORD*)&v19[v20 + 68];
					if (!v21)
						break;
					*(_WORD*)v19 = v21;
					v19 += 2;
					if (!--v17)
					{
						v19 -= 2;
						break;
					}
				}
				*(_WORD*)v19 = 0;
				**(_DWORD**)(v16 + *v4) = *(_DWORD*)v18;
				*(_DWORD*)(*(_QWORD*)(*v4 + 8i64 * v3) + 132i64) = *((_DWORD*)v18 + 33);
				if (*((_DWORD*)v18 + 33) != 1 && *(_DWORD*)(156i64 * v9 + a3 + 132) != 9)
					++* (_DWORD*)(a1 + 152);
				sub_1407E4830((int*)(*(_QWORD*)(*v4 + 8i64 * v3) + 156i64), 0i64, 0xE0ui64);
				*(_DWORD*)(*(_QWORD*)(*v4 + 8i64 * v3) + 380i64) = 0;
				*(_DWORD*)(*(_QWORD*)(*v4 + 8i64 * v3) + 384i64) = 0;
				*(_DWORD*)(*(_QWORD*)(*v4 + 8i64 * v3) + 388i64) = 0;
				v22 = sub_14018B280(392i64, 0);
				v23 = v22;
				if (v22)
					v22[36] = 1;
				else
					v23 = 0i64;
				*(_QWORD*)(v16 + *(_QWORD*)(a1 + 104)) = v23;
				v24 = *(int**)(v16 + *v4);
				v25 = *(int**)(v16 + *(_QWORD*)(a1 + 104));
				if ((((unsigned __int8)v25 | (unsigned __int8)v24) & 0xF) != 0)
				{
					sub_1407DB590(v25, v24, 0x188ui64);
				}
				else
				{
					v26 = 3i64;
					do
					{
						v27 = *(_OWORD*)v24;
						v25 += 32;
						v24 += 32;
						*((_OWORD*)v25 - 8) = v27;
						*((_OWORD*)v25 - 7) = *((_OWORD*)v24 - 7);
						*((_OWORD*)v25 - 6) = *((_OWORD*)v24 - 6);
						*((_OWORD*)v25 - 5) = *((_OWORD*)v24 - 5);
						*((_OWORD*)v25 - 4) = *((_OWORD*)v24 - 4);
						*((_OWORD*)v25 - 3) = *((_OWORD*)v24 - 3);
						*((_OWORD*)v25 - 2) = *((_OWORD*)v24 - 2);
						*((_OWORD*)v25 - 1) = *((_OWORD*)v24 - 1);
						--v26;
					} while (v26);
					*(_QWORD*)v25 = *(_QWORD*)v24;
				}
				sub_1407E4830((int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64 * v3) + 156i64), 0i64, 0xE0ui64);
				v28 = sub_14018B280(392i64, 0);
				v29 = v28;
				if (v28)
					v28[36] = 1;
				else
					v29 = 0i64;
				*(_QWORD*)(v16 + *(_QWORD*)(a1 + 120)) = v29;
				v30 = *(int**)(v16 + *(_QWORD*)(a1 + 120));
				v31 = *(int**)(v16 + *v4);
				if ((((unsigned __int8)v30 | (unsigned __int8)v31) & 0xF) != 0)
				{
					sub_1407DB590(v30, v31, 0x188ui64);
				}
				else
				{
					v32 = 3i64;
					do
					{
						v33 = *(_OWORD*)v31;
						v30 += 32;
						v31 += 32;
						*((_OWORD*)v30 - 8) = v33;
						*((_OWORD*)v30 - 7) = *((_OWORD*)v31 - 7);
						*((_OWORD*)v30 - 6) = *((_OWORD*)v31 - 6);
						*((_OWORD*)v30 - 5) = *((_OWORD*)v31 - 5);
						*((_OWORD*)v30 - 4) = *((_OWORD*)v31 - 4);
						*((_OWORD*)v30 - 3) = *((_OWORD*)v31 - 3);
						*((_OWORD*)v30 - 2) = *((_OWORD*)v31 - 2);
						*((_OWORD*)v30 - 1) = *((_OWORD*)v31 - 1);
						--v32;
					} while (v32);
					*(_QWORD*)v30 = *(_QWORD*)v31;
				}
				sub_1407E4830((int*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64 * v3) + 156i64), 0i64, 0xE0ui64);
				v10 = a3;
				v7 = a2;
			}
			++v9;
			++v3;
		} while (v9 + v8 < v7);
		v3 = v45;
	}
	v34 = v7 + v3 - v8;
	if (v4[1] <= v34)
	{
		v35 = sub_14018DB00(*v4, (unsigned int)v34, 8i64);
		v36 = v35;
		if ((int*)*v4 != v35)
		{
			sub_1407DB590(v35, (int*)*v4, 8 * v4[1]);
			if (*v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v4 - 16) + 8i64))(*v4 - 16);
			*v4 = (__int64)v36;
		}
	}
	v4[1] = v34;
	if (*(_QWORD*)(a1 + 112) <= v34)
	{
		v37 = sub_14018DB00(*(_QWORD*)(a1 + 104), v34, 8i64);
		v38 = *(int**)(a1 + 104);
		v39 = v37;
		if (v38 != v37)
		{
			sub_1407DB590(v37, v38, 8i64 * *(_QWORD*)(a1 + 112));
			v40 = *(_QWORD*)(a1 + 104);
			if (v40)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
			*(_QWORD*)(a1 + 104) = v39;
		}
	}
	*(_QWORD*)(a1 + 112) = v34;
	if (*(_QWORD*)(a1 + 128) <= v34)
	{
		v41 = sub_14018DB00(*(_QWORD*)(a1 + 120), v34, 8i64);
		v42 = *(int**)(a1 + 120);
		v43 = v41;
		if (v42 != v41)
		{
			sub_1407DB590(v41, v42, 8i64 * *(_QWORD*)(a1 + 128));
			v44 = *(_QWORD*)(a1 + 120);
			if (v44)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
			*(_QWORD*)(a1 + 120) = v43;
		}
	}
	*(_QWORD*)(a1 + 128) = v34;
}
// 1407A86B9: conditional instruction was optimized away because r8.8!=0

