#include "../winhttp.h"

//----- (0000000140772C80) ----------------------------------------------------
void __fastcall sub_140772C80(__int64 a1, __int64* a2, _DWORD* a3)
{
	__int64* v3; // rsi
	__int64 v4; // rbx
	int* v6; // rax
	unsigned __int64 v7; // rcx
	unsigned int v8; // r9d
	__int64 v9; // r11
	unsigned int v10; // r10d
	unsigned int* v11; // r13
	unsigned int v12; // esi
	unsigned int v13; // r15d
	unsigned __int64 v14; // r12
	__int64 v15; // rbx
	__int64 v16; // r14
	__int64 v17; // rax
	unsigned int v18; // r8d
	unsigned int v19; // r10d
	__int64 v20; // rcx
	__int64 v21; // r9
	__int64 v22; // rax
	unsigned int v23; // edx
	unsigned int v24; // eax
	__int64* v25; // rax
	__int64 v26; // rax
	int* v27; // rax
	unsigned int v28; // edx
	unsigned int v29; // ecx
	__int64 v30; // rax
	__int64 v31; // r8
	int v32; // ecx
	unsigned int v33; // edx
	__int64 v34; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v37; // rdi
	__int64 v38; // rbx
	char v39[8]; // [rsp+28h] [rbp-59h] BYREF
	int* v40; // [rsp+30h] [rbp-51h]
	__int64 v41; // [rsp+38h] [rbp-49h]
	unsigned __int64 v42; // [rsp+48h] [rbp-39h]
	unsigned __int64 v43; // [rsp+50h] [rbp-31h]
	__int64 v44; // [rsp+58h] [rbp-29h]
	__int64 v45; // [rsp+60h] [rbp-21h]
	__int64 v46; // [rsp+68h] [rbp-19h] BYREF
	int* v47; // [rsp+70h] [rbp-11h] BYREF
	__int64 v48; // [rsp+78h] [rbp-9h] BYREF
	int* v49; // [rsp+80h] [rbp-1h] BYREF
	__int64 v50[2]; // [rsp+88h] [rbp+7h] BYREF
	unsigned int v53; // [rsp+100h] [rbp+7Fh]

	v3 = a2;
	v4 = a1;
	v6 = sub_14018B280(48i64, 0);
	v41 = 0i64;
	v7 = 0i64;
	v40 = v6;
	*(_BYTE*)v6 = 0;
	*((_QWORD*)v40 + 1) = 0i64;
	v8 = 0;
	*((_QWORD*)v40 + 2) = v40;
	*((_QWORD*)v40 + 3) = v40;
	v9 = (__int64)v40;
	v10 = (a3[2] - *a3) * (a3[3] - a3[1]);
	v43 = 0i64;
	v53 = v10;
	if (*(_QWORD*)(v4 + 808))
	{
		do
		{
			v11 = *(unsigned int**)(*(_QWORD*)(v4 + 800) + 8 * v7);
			if (v11[54])
			{
				if (v11[55])
				{
					v12 = v11[1];
					v13 = *v11;
					v14 = 0i64;
					if (*((_QWORD*)v11 + 7))
					{
						do
						{
							v15 = 0i64;
							v16 = *(_QWORD*)(*((_QWORD*)v11 + 6) + 8 * v14);
							if (*(_QWORD*)(v16 + 40))
							{
								while (1)
								{
									v17 = *(_QWORD*)(v16 + 32);
									v18 = *(_DWORD*)(v17 + 8 * v15);
									v19 = *(_DWORD*)(v17 + 8 * v15 + 4);
									if ((signed int)v18 < *a3
										|| (signed int)v18 >= a3[2]
										|| (signed int)v19 < a3[1]
										|| (signed int)v19 >= a3[3])
									{
										goto LABEL_40;
									}
									v20 = *(_QWORD*)(v9 + 8);
									LODWORD(v45) = *(_DWORD*)(v17 + 8 * v15);
									HIDWORD(v45) = v19;
									v21 = v9;
									v22 = v20;
									if (!v20)
										goto LABEL_22;
									do
									{
										v23 = *(_DWORD*)(v22 + 32);
										if (v23 < v18 || v18 >= v23 && *(_DWORD*)(v22 + 36) < v19)
										{
											v22 = *(_QWORD*)(v22 + 24);
										}
										else
										{
											v21 = v22;
											v22 = *(_QWORD*)(v22 + 16);
										}
									} while (v22);
									if (v21 == v9
										|| (v24 = *(_DWORD*)(v21 + 32), v18 < v24)
										|| v24 >= v18 && v19 < *(_DWORD*)(v21 + 36))
									{
									LABEL_22:
										v48 = v9;
										v25 = &v48;
									}
									else
									{
										v46 = v21;
										v25 = &v46;
									}
									v26 = *v25;
									if (v26 == v9)
										break;
									if (*(_DWORD*)(v26 + 40) >= v12)
									{
										*(_DWORD*)(v26 + 40) = v12;
										*(_DWORD*)(v26 + 44) = v13;
									LABEL_39:
										v9 = (__int64)v40;
									}
								LABEL_40:
									if ((unsigned __int64)++v15 >= *(_QWORD*)(v16 + 40))
										goto LABEL_41;
								}
								v42 = __PAIR64__(v13, v12);
								v27 = (int*)v9;
								while (v20)
								{
									v28 = *(_DWORD*)(v20 + 32);
									if (v28 < v18 || v18 >= v28 && *(_DWORD*)(v20 + 36) < v19)
									{
										v20 = *(_QWORD*)(v20 + 24);
									}
									else
									{
										v27 = (int*)v20;
										v20 = *(_QWORD*)(v20 + 16);
									}
								}
								if (v27 == (int*)v9 || (v29 = v27[8], v18 < v29) || v29 >= v18 && v19 < v27[9])
								{
									v44 = 0i64;
									v50[0] = v45;
									v49 = v27;
									v50[1] = 0i64;
									sub_140776900((__int64)v39, &v47, (__int64*)&v49, (int*)v50);
									v27 = v47;
								}
								*((_QWORD*)v27 + 5) = v42;
								goto LABEL_39;
							}
						LABEL_41:
							++v14;
						} while (v14 < *((_QWORD*)v11 + 7));
						v7 = v43;
						v4 = a1;
					}
				}
			}
			v43 = ++v7;
		} while (v7 < *(_QWORD*)(v4 + 808));
		v8 = 0;
		v10 = v53;
		v3 = a2;
	}
	v30 = *(_QWORD*)(v9 + 16);
	if (v30 != v9)
	{
		while (1)
		{
			v31 = *v3;
			++v8;
			v32 = *(_DWORD*)(v30 + 36) - a3[1];
			*(float*)v31 = (float)(*(_DWORD*)(v30 + 32) - *a3);
			*(float*)(v31 + 4) = (float)v32;
			*(_DWORD*)(v31 + 8) = 0;
			*(_DWORD*)(v31 + 12) = 1065353216;
			v33 = (*(unsigned __int8*)(v30 + 44) | ((*(_DWORD*)(v30 + 40) | 0xFFFFFF00) << 8)) << 8;
			*v3 = v31 + 28;
			*(_DWORD*)(v31 + 16) = v33;
			if (v8 >= v10)
				break;
			v34 = *(_QWORD*)(v30 + 24);
			if (v34)
			{
				v30 = *(_QWORD*)(v30 + 24);
				for (i = *(_QWORD*)(v34 + 16); i; i = *(_QWORD*)(i + 16))
					v30 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v30 + 8); v30 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v30 = j;
				if (*(_QWORD*)(v30 + 24) != j)
					v30 = j;
			}
			v9 = (__int64)v40;
			if ((int*)v30 == v40)
				goto LABEL_58;
		}
		v9 = (__int64)v40;
	}
LABEL_58:
	if (v41)
	{
		v37 = *(_QWORD*)(v9 + 8);
		if (v37)
		{
			do
			{
				sub_1400083B0((__int64)v39, *(_QWORD*)(v37 + 24));
				v38 = *(_QWORD*)(v37 + 16);
				sub_14018B900(v37, 0);
				v37 = v38;
			} while (v38);
			v9 = (__int64)v40;
		}
		*(_QWORD*)(v9 + 16) = v9;
		*((_QWORD*)v40 + 1) = 0i64;
		*((_QWORD*)v40 + 3) = v40;
		v9 = (__int64)v40;
		v41 = 0i64;
	}
	sub_14018B900(v9, 0);
}
// 140772C80: using guessed type char var_B0[8];

