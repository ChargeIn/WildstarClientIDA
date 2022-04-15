#include "../winhttp.h"

//----- (0000000140355D50) ----------------------------------------------------
__int64 __fastcall sub_140355D50(__int64 a1, __int64 a2)
{
	int v2; // eax
	int* v3; // r10
	int v5; // r9d
	int v6; // r8d
	int* v7; // rbx
	int v8; // edx
	int v9; // eax
	int v10; // eax
	int v11; // ecx
	char* v12; // rax
	char* v13; // r14
	unsigned __int64 v14; // rcx
	int v15; // ebp
	int v16; // r15d
	int v17; // r12d
	int v18; // esi
	int i; // edi
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rbx
	_QWORD* v23; // rcx
	_QWORD* v24; // rcx
	__int64 v25; // rax
	int v26; // r9d
	int v27; // edx
	int v28; // r8d
	int v29; // ecx
	char* v30; // rax
	char* v31; // r14
	unsigned __int64 v32; // rcx
	int v33; // ebp
	int v34; // r15d
	int v35; // r12d
	int v36; // esi
	int j; // edi
	__int64 v38; // rcx
	__int64 v39; // rbx
	_QWORD* v40; // rcx
	_QWORD* v41; // rcx
	__int64 v42; // rax
	int* v43; // rcx
	unsigned __int64 v45; // [rsp+20h] [rbp-D8h] BYREF
	int v46; // [rsp+28h] [rbp-D0h]
	int v47; // [rsp+2Ch] [rbp-CCh]
	int* v48; // [rsp+30h] [rbp-C8h]
	int* v49; // [rsp+38h] [rbp-C0h]
	char v50[12]; // [rsp+40h] [rbp-B8h] BYREF
	char v51[116]; // [rsp+4Ch] [rbp-ACh] BYREF

	v2 = *(_DWORD*)(a1 + 2196);
	v3 = (int*)(a1 + 2496);
	v5 = *(_DWORD*)(a1 + 2504);
	v6 = *(_DWORD*)(a1 + 2496);
	v7 = (int*)a2;
	v48 = (int*)a2;
	v8 = *(_DWORD*)(a1 + 2508);
	if (v2 < v5)
		v5 = v2;
	v9 = *(_DWORD*)(a1 + 2200);
	v49 = (int*)(a1 + 2496);
	if (v9 < v8)
		v8 = v9;
	v10 = *(_DWORD*)(a1 + 2188);
	v11 = *(_DWORD*)(a1 + 2500);
	if (v6 < v10)
		v6 = v10;
	if (v11 < *(_DWORD*)(a1 + 2192))
		v11 = *(_DWORD*)(a1 + 2192);
	if (v6 < v5 && v11 < v8)
	{
		v45 = __PAIR64__(v11, v6);
		v47 = v8;
		v46 = v5;
		v12 = &v50[16 * sub_1401B24C0((int*)&v45, v7, (__int64)v50)];
		v45 = (unsigned __int64)v12;
		if (v50 < v12)
		{
			v13 = v51;
			v14 = (unsigned __int64)v12;
			do
			{
				v15 = *((_DWORD*)v13 - 2);
				v16 = *(_DWORD*)v13;
				if (v15 < *(_DWORD*)v13)
				{
					v17 = *((_DWORD*)v13 - 3);
					v18 = *((_DWORD*)v13 - 1);
					do
					{
						for (i = v17; i < v18; ++i)
						{
							v20 = i % *(_DWORD*)(a1 + 2204)
								+ *(_DWORD*)(a1 + 2204)
								* (v15 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v15 % *(_DWORD*)(a1 + 2208) < 0))
								+ *(_DWORD*)(a1 + 2204) * (unsigned int)(i % *(_DWORD*)(a1 + 2204) < 0);
							v21 = *(_QWORD*)(a1 + 2272);
							v22 = *(_QWORD*)(v21 + 8 * v20);
							if (v22)
							{
								if (*(_DWORD*)(v22 + 784))
								{
									v23 = *(_QWORD**)(v21 + 8 * v20);
									*(_DWORD*)(v22 + 784) = 0;
									sub_140383760(v23);
									*(_DWORD*)(v22 + 44) &= 0xFFFFFFF5;
									if (!*(_QWORD*)(v22 + 1480))
									{
										v24 = (_QWORD*)(*(_QWORD*)v22 + 2312i64);
										*(_QWORD*)(v22 + 1480) = v24;
										*(_QWORD*)(v22 + 1488) = *v24;
										*v24 = v22;
										v25 = *(_QWORD*)(v22 + 1488);
										if (v25)
											*(_QWORD*)(v25 + 1480) = v22 + 1488;
										++* (_DWORD*)(*(_QWORD*)v22 + 2172i64);
									}
								}
							}
						}
						++v15;
					} while (v15 < v16);
					v14 = v45;
				}
				v13 += 16;
			} while ((unsigned __int64)(v13 - 12) < v14);
			v7 = v48;
		}
		v3 = (int*)(a1 + 2496);
	}
	v26 = v7[2];
	v27 = v7[3];
	v28 = *v7;
	v29 = v7[1];
	if (*(_DWORD*)(a1 + 2196) < v26)
		v26 = *(_DWORD*)(a1 + 2196);
	if (*(_DWORD*)(a1 + 2200) < v27)
		v27 = *(_DWORD*)(a1 + 2200);
	if (v28 < *(_DWORD*)(a1 + 2188))
		v28 = *(_DWORD*)(a1 + 2188);
	if (v29 < *(_DWORD*)(a1 + 2192))
		v29 = *(_DWORD*)(a1 + 2192);
	if (v28 < v26 && v29 < v27)
	{
		v45 = __PAIR64__(v29, v28);
		v47 = v27;
		v46 = v26;
		v30 = &v50[16 * sub_1401B24C0((int*)&v45, v3, (__int64)v50)];
		v45 = (unsigned __int64)v30;
		if (v50 < v30)
		{
			v31 = v51;
			v32 = (unsigned __int64)v30;
			do
			{
				v33 = *((_DWORD*)v31 - 2);
				v34 = *(_DWORD*)v31;
				if (v33 < *(_DWORD*)v31)
				{
					v35 = *((_DWORD*)v31 - 3);
					v36 = *((_DWORD*)v31 - 1);
					do
					{
						for (j = v35; j < v36; ++j)
						{
							v38 = j % *(_DWORD*)(a1 + 2204)
								+ *(_DWORD*)(a1 + 2204)
								* (v33 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v33 % *(_DWORD*)(a1 + 2208) < 0))
								+ *(_DWORD*)(a1 + 2204) * (unsigned int)(j % *(_DWORD*)(a1 + 2204) < 0);
							v39 = *(_QWORD*)(*(_QWORD*)(a1 + 2272) + 8 * v38);
							if (v39)
							{
								if (!*(_DWORD*)(v39 + 784))
								{
									v40 = *(_QWORD**)(*(_QWORD*)(a1 + 2272) + 8 * v38);
									*(_DWORD*)(v39 + 784) = 1;
									sub_140383760(v40);
									*(_DWORD*)(v39 + 44) &= 0xFFFFFFF5;
									if (!*(_QWORD*)(v39 + 1480))
									{
										v41 = (_QWORD*)(*(_QWORD*)v39 + 2312i64);
										*(_QWORD*)(v39 + 1480) = v41;
										*(_QWORD*)(v39 + 1488) = *v41;
										*v41 = v39;
										v42 = *(_QWORD*)(v39 + 1488);
										if (v42)
											*(_QWORD*)(v42 + 1480) = v39 + 1488;
										++* (_DWORD*)(*(_QWORD*)v39 + 2172i64);
									}
								}
							}
						}
						++v33;
					} while (v33 < v34);
					v32 = v45;
				}
				v31 += 16;
			} while ((unsigned __int64)(v31 - 12) < v32);
			v7 = v48;
		}
	}
	v43 = v49;
	*v49 = *v7;
	v43[1] = v7[1];
	v43[2] = v7[2];
	v43[3] = v7[3];
	return 0i64;
}

