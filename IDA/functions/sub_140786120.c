#include "../winhttp.h"

//----- (0000000140786120) ----------------------------------------------------
__int64 __fastcall sub_140786120(__int64 a1, unsigned int a2, int* a3, int* a4, int a5, int a6, int a7, __int64 a8)
{
	int v8; // ebp
	int* v10; // r12
	unsigned __int64 v12; // rsi
	__int64 v13; // rax
	int* v14; // rax
	unsigned int v15; // ebp
	__int64 v16; // rax
	unsigned int v17; // eax
	int* v18; // r11
	__int64 v19; // r12
	__int64 v20; // rdx
	int v21; // eax
	char* v22; // r8
	__int64 v23; // r8
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // eax
	__int64 v27; // rax
	int* v28; // rax
	__int64 result; // rax
	__int64 v30; // rax
	int* v31; // rax
	unsigned int v32; // ebp
	__int64 v33; // rax
	unsigned int v34; // eax
	_DWORD* v35; // r11
	__int64 v36; // r12
	char* v37; // r8
	int v38; // edx
	char* v39; // rcx
	__int64 v40; // r8
	__int64 v41; // r10
	__int64 v42; // rdx
	int v43; // eax
	__int64 v44; // rax
	int* v45; // rax
	__int64 v46; // [rsp+20h] [rbp-38h]

	v8 = a5;
	v10 = a4;
	v12 = a2;
	if (!a5)
	{
		if (a2)
		{
			if (a3)
			{
				v30 = 4i64 * a2;
				if (!is_mul_ok(a2, 4ui64))
					v30 = -1i64;
				v31 = sub_14018B280(v30, 8u);
				*(_QWORD*)(a1 + 16) = v31;
				if (a8)
				{
					v32 = 0;
					v33 = 0i64;
					if ((int)v12 >= 4)
					{
						v34 = ((unsigned int)(v12 - 4) >> 2) + 1;
						v35 = a3 + 2;
						v32 = 4 * v34;
						v36 = v34;
						do
						{
							v37 = (char*)v35 - 8i64 - (_QWORD)a3;
							*(_DWORD*)&v37[*(_QWORD*)(a1 + 16)] = *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 20)
								+ (int)(float)((float)((float)(*(v35 - 2)
									- *(_DWORD*)(a8
										+ 8i64
										* *(unsigned int*)(a8 + 4)
										+ 16))
									* *(float*)(a8 + 8))
									+ *(float*)(a8 + 12));
							*(_DWORD*)&v37[*(_QWORD*)(a1 + 16) + 4] = *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 20)
								+ (int)(float)((float)((float)(*(v35 - 1)
									- *(_DWORD*)(a8
										+ 8i64
										* *(unsigned int*)(a8 + 4)
										+ 16))
									* *(float*)(a8 + 8))
									+ *(float*)(a8 + 12));
							*(_DWORD*)((char*)v35 + *(_QWORD*)(a1 + 16) - (char*)a3) = *(_DWORD*)(a8
								+ 8i64
								* *(unsigned int*)(a8 + 4)
								+ 20)
								+ (int)(float)((float)((float)(*v35 - *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 16))
									* *(float*)(a8 + 8))
									+ *(float*)(a8 + 12));
							v38 = *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 20)
								+ (int)(float)((float)((float)(v35[1] - *(_DWORD*)(a8 + 8i64 * *(unsigned int*)(a8 + 4) + 16))
									* *(float*)(a8 + 8))
									+ *(float*)(a8 + 12));
							v39 = (char*)v35 + *(_QWORD*)(a1 + 16);
							v35 += 4;
							*(_DWORD*)&v39[4i64 - (_QWORD)a3] = v38;
							--v36;
						} while (v36);
						v10 = a4;
						v33 = 4i64 * v34;
					}
					if (v32 < (unsigned int)v12)
					{
						v40 = v33;
						v41 = (unsigned int)v12 - v32;
						do
						{
							v42 = *(unsigned int*)(a8 + 4);
							v43 = a3[v40++] - *(_DWORD*)(a8 + 8 * v42 + 16);
							*(_DWORD*)(v40 * 4 + *(_QWORD*)(a1 + 16) - 4) = *(_DWORD*)(a8 + 8 * v42 + 20)
								+ (int)(float)((float)((float)v43 * *(float*)(a8 + 8))
									+ *(float*)(a8 + 12));
							--v41;
						} while (v41);
					}
				}
				else
				{
					sub_1407DB590(v31, a3, 4 * v12);
				}
				v8 = 0;
				*(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 16);
			}
			if (v10)
			{
				v44 = 2 * v12;
				if (!is_mul_ok(v12, 2ui64))
					v44 = -1i64;
				v45 = sub_14018B280(v44, 8u);
				*(_QWORD*)(a1 + 32) = v45;
				sub_1407DB590(v45, v10, 2 * v12);
				*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 32);
			}
			*(_DWORD*)a1 = v12;
			goto LABEL_44;
		}
		return 2147942487i64;
	}
	if (a5 != 1 || a2 < 3)
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
			if ((int)v12 >= 4)
			{
				v17 = ((unsigned int)(v12 - 4) >> 2) + 1;
				v18 = a3 + 2;
				v15 = 4 * v17;
				v19 = v17;
				v46 = 4i64 * v17;
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
				v10 = a4;
				v16 = v46;
			}
			if (v15 < (unsigned int)v12)
			{
				v23 = v16;
				v24 = (unsigned int)v12 - v15;
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
			sub_1407DB590(v14, a3, 4 * v12);
		}
		v8 = a5;
		*(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 16) + 4i64;
	}
	if (v10)
	{
		v27 = 2 * v12;
		if (!is_mul_ok(v12, 2ui64))
			v27 = -1i64;
		v28 = sub_14018B280(v27, 8u);
		*(_QWORD*)(a1 + 32) = v28;
		*(_QWORD*)(a1 + 24) = v28;
		sub_1407DB590(v28, v10, 2 * v12);
		*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 32) + 2i64;
	}
	*(_DWORD*)a1 = v12 - 2;
LABEL_44:
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(a1 + 40) = v8;
	*(_DWORD*)(a1 + 48) = a7;
	result = 0i64;
	*(_DWORD*)(a1 + 44) = 0;
	return result;
}

