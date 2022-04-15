#include "../winhttp.h"

//----- (00000001403FC850) ----------------------------------------------------
void __fastcall sub_1403FC850(__int64 a1)
{
	_QWORD* v1; // rax
	int* v3; // rax
	int v4; // r12d
	int v5; // ebp
	__int64* v6; // rsi
	__int64 v7; // rdi
	int* v8; // rax
	__int64** v9; // rax
	int v10; // r15d
	__int64* v11; // rcx
	__int64* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // r9
	int v15; // ebp
	__int64 v16; // rsi
	__int64* v17; // r11
	__int64* v18; // r8
	__int64* v19; // rax
	float* v20; // rcx
	float* v21; // rdx
	__int64 v22; // r10
	__int64 v23; // rdx
	__int64 v24; // rsi
	__int64 v25; // rax
	char* v26; // rsi
	__int64 v27; // rbp
	__int64* v28; // rbx
	__int64 v29; // rax
	char v30[8]; // [rsp+20h] [rbp-458h] BYREF
	__int64 v31; // [rsp+28h] [rbp-450h]
	__int64 v32; // [rsp+38h] [rbp-440h] BYREF
	char v33; // [rsp+40h] [rbp-438h] BYREF
	__int64 v34; // [rsp+430h] [rbp-48h] BYREF

	v1 = *(_QWORD**)(a1 + 8);
	if ((_QWORD*)*v1 != v1 && *(_QWORD**)*v1 != v1)
	{
		v3 = sub_14018B280(176i64, 0);
		v4 = 63;
		*(_QWORD*)v3 = v3;
		v5 = 63;
		v6 = &v32;
		*((_QWORD*)v3 + 1) = v3;
		v7 = (__int64)v3;
		v31 = (__int64)v3;
		do
		{
			v8 = sub_14018B280(176i64, 0);
			--v5;
			v6 += 2;
			*(_QWORD*)v8 = v8;
			*(v6 - 2) = (__int64)v8;
			*((_QWORD*)v8 + 1) = v8;
		} while (v5 >= 0);
		v9 = *(__int64***)(a1 + 8);
		v10 = 0;
		if (*v9 != (__int64*)v9)
		{
			do
			{
				v11 = *v9;
				v12 = *(__int64**)v7;
				v13 = *v11;
				if (*(__int64**)v7 != v11 && v12 != (__int64*)v13)
				{
					**(_QWORD**)(v13 + 8) = v12;
					*(_QWORD*)v11[1] = v13;
					*(_QWORD*)v12[1] = v11;
					v14 = v12[1];
					v12[1] = *(_QWORD*)(v13 + 8);
					*(_QWORD*)(v13 + 8) = v11[1];
					v11[1] = v14;
				}
				v15 = 0;
				v16 = 0i64;
				if (v10 > 0)
				{
					v17 = &v32;
					do
					{
						v18 = (__int64*)*v17;
						v19 = *(__int64**)*v17;
						if (v19 == (__int64*)*v17)
							break;
						v20 = *(float**)v7;
						while (v20 != (float*)v7)
						{
							if (*((float*)v19 + 18) >= v20[18])
							{
								v19 = (__int64*)*v19;
							}
							else
							{
								v21 = *(float**)v20;
								if (v19 != *(__int64**)v20)
								{
									**((_QWORD**)v21 + 1) = v19;
									**((_QWORD**)v20 + 1) = v21;
									*(_QWORD*)v19[1] = v20;
									v22 = v19[1];
									v19[1] = *((_QWORD*)v21 + 1);
									*((_QWORD*)v21 + 1) = *((_QWORD*)v20 + 1);
									*((_QWORD*)v20 + 1) = v22;
								}
								v20 = v21;
							}
							if (v19 == v18)
							{
								if (v20 != (float*)v7 && v18 != (__int64*)v7)
								{
									**(_QWORD**)(v7 + 8) = v18;
									**((_QWORD**)v20 + 1) = v7;
									*(_QWORD*)v18[1] = v20;
									v23 = v18[1];
									v18[1] = *(_QWORD*)(v7 + 8);
									*(_QWORD*)(v7 + 8) = *((_QWORD*)v20 + 1);
									*((_QWORD*)v20 + 1) = v23;
								}
								break;
							}
						}
						++v16;
						v17 += 2;
						*(v17 - 2) = v7;
						++v15;
						v7 = (__int64)v18;
					} while (v16 < v10);
				}
				v24 = 2 * v16;
				v25 = v7;
				v7 = *(&v32 + v24);
				*(&v32 + v24) = v25;
				if (v15 == v10)
					++v10;
				v9 = *(__int64***)(a1 + 8);
			} while (*v9 != (__int64*)v9);
			v31 = v7;
		}
		if (v10 > 1)
		{
			v26 = &v33;
			v27 = (unsigned int)(v10 - 1);
			do
			{
				sub_1403FE860((__int64)v26, (__int64)(v26 - 16));
				v26 += 16;
				--v27;
			} while (v27);
		}
		v28 = &v34;
		v29 = *(&v32 + 2 * v10 - 2);
		*(&v32 + 2 * v10 - 2) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = v29;
		do
		{
			v28 -= 2;
			sub_1403FE1B0((__int64)v28);
			sub_14018B900(v28[1], 0);
			--v4;
		} while (v4 >= 0);
		sub_1403FE1B0((__int64)v30);
		sub_14018B900(v7, 0);
	}
}
// 1403FC850: using guessed type char var_458[8];

