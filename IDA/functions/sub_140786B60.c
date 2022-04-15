//----- (0000000140786B60) ----------------------------------------------------
__int64 __fastcall sub_140786B60(__int64 a1, unsigned int a2, int* a3, int* a4, int a5, int a6, int a7, __int64 a8)
{
	int* v8; // r14
	unsigned __int64 v10; // rsi
	__int64 v13; // rax
	int* v14; // rax
	unsigned int v15; // r11d
	__int64 v16; // r13
	unsigned int v17; // eax
	int* v18; // r10
	__int64 v19; // rbp
	__int64 v20; // rdx
	int v21; // eax
	char* v22; // r8
	__int64 v23; // r8
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // eax
	__int64 v27; // rax
	int* v28; // rax

	v8 = a4;
	v10 = a2;
	if (!a2)
		return 2147942487i64;
	if (a3)
	{
		v13 = 4i64 * a2;
		if (!is_mul_ok(a2, 4ui64))
			v13 = -1i64;
		v14 = sub_14018B280(v13, 8u);
		*(_QWORD*)(a1 + 16) = v14;
		if (a8)
		{
			v15 = 0;
			v16 = 0i64;
			if ((int)v10 >= 4)
			{
				v17 = ((unsigned int)(v10 - 4) >> 2) + 1;
				v18 = a3 + 2;
				v15 = 4 * v17;
				v16 = 4i64 * v17;
				v19 = v17;
				do
				{
					v20 = *(unsigned int*)(a8 + 4);
					v21 = *(v18 - 2) - *(_DWORD*)(a8 + 8 * v20 + 16);
					v22 = (char*)v18 - 8i64 - (_QWORD)a3;
					v18 += 4;
					*(_DWORD*)&v22[*(_QWORD*)(a1 + 16)] = *(_DWORD*)(a8 + 8 * v20 + 20)
						+ (int)(float)((float)((float)v21 * *(float*)(a8 + 8))
							+ *(float*)(a8 + 12));
					*(_DWORD*)&v22[*(_QWORD*)(a1 + 16) + 4] = *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 20)
						+ (int)(float)((float)((float)(*(v18 - 5)
							- *(_DWORD*)(a8
								+ 8i64
								* *(unsigned int*)(a8 + 4)
								+ 16))
							* *(float*)(a8 + 8))
							+ *(float*)(a8 + 12));
					*(int*)((char*)v18 + *(_QWORD*)(a1 + 16) - (_QWORD)a3 - 16) = *(_DWORD*)(a8
						+ 8i64 * *(unsigned int*)(a8 + 4)
						+ 20)
						+ (int)(float)((float)((float)(*(v18 - 4) - *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 16))
							* *(float*)(a8 + 8))
							+ *(float*)(a8 + 12));
					*(int*)((char*)v18 + 4i64 - (_QWORD)a3 + *(_QWORD*)(a1 + 16) - 16) = *(_DWORD*)(a8
						+ 8i64
						* *(unsigned int*)(a8 + 4)
						+ 20)
						+ (int)(float)((float)((float)(*(v18 - 3) - *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 16)) * *(float*)(a8 + 8))
							+ *(float*)(a8 + 12));
					--v19;
				} while (v19);
				v8 = a4;
			}
			if (v15 < (unsigned int)v10)
			{
				v23 = v16;
				v24 = (unsigned int)v10 - v15;
				do
				{
					v25 = *(unsigned int*)(a8 + 4);
					v26 = a3[v23++] - *(_DWORD*)(a8 + 8 * v25 + 16);
					*(_DWORD*)(v23 * 4 + *(_QWORD*)(a1 + 16) - 4) = *(_DWORD*)(a8 + 8 * v25 + 20)
						+ (int)(float)((float)((float)v26 * *(float*)(a8 + 8))
							+ *(float*)(a8 + 12));
					--v24;
				} while (v24);
			}
		}
		else
		{
			sub_1407DB590(v14, a3, 4 * v10);
		}
		*(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 16);
	}
	if (v8)
	{
		v27 = 4 * v10;
		if (!is_mul_ok(v10, 4ui64))
			v27 = -1i64;
		v28 = sub_14018B280(v27, 8u);
		*(_QWORD*)(a1 + 32) = v28;
		sub_1407DB590(v28, v8, 4 * v10);
		*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 32);
	}
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(a1 + 48) = a7;
	*(_DWORD*)a1 = v10;
	*(_QWORD*)(a1 + 40) = 0i64;
	return 0i64;
}

