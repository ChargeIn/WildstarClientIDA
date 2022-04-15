//----- (0000000140355800) ----------------------------------------------------
__int64 __fastcall sub_140355800(__int64 a1, int* a2)
{
	__int64 v2; // rax
	int v3; // r14d
	int v4; // r15d
	__int64 v7; // rax
	int* v8; // r12
	int i; // ebp
	int j; // ebx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdi
	int* v14; // rbx
	__int64 v15; // rax
	unsigned __int64 v16; // rcx
	char* v17; // r12
	signed int v18; // r11d
	signed int v19; // eax
	signed int v20; // r15d
	signed int v21; // r10d
	__int64 v22; // rbp
	int* v23; // rax
	__m128* v24; // rbx
	int v25; // edi
	__int64 v27; // rax
	__int64 v28; // rdi
	unsigned __int64 v29; // [rsp+20h] [rbp-D8h] BYREF
	unsigned __int64 v30; // [rsp+28h] [rbp-D0h]
	unsigned __int64 v31; // [rsp+30h] [rbp-C8h]
	int* v32; // [rsp+38h] [rbp-C0h]
	char v33[12]; // [rsp+40h] [rbp-B8h] BYREF
	char v34; // [rsp+4Ch] [rbp-ACh] BYREF

	v2 = *(_QWORD*)(a1 + 2424);
	v3 = a2[2] - *a2;
	v4 = a2[3] - a2[1];
	v29 = __PAIR64__(v4, v3);
	if (v2 != __PAIR64__(v4, v3))
	{
		v7 = 8i64 * (unsigned int)(v3 * v4);
		if (!is_mul_ok((unsigned int)(v3 * v4), 8ui64))
			v7 = -1i64;
		v8 = sub_14018B280(v7, 0);
		sub_1407E4830(v8, 0i64, 8i64 * (unsigned int)(v3 * v4));
		for (i = *(_DWORD*)(a1 + 2412); i < *(_DWORD*)(a1 + 2420); ++i)
		{
			for (j = *(_DWORD*)(a1 + 2408); j < *(_DWORD*)(a1 + 2416); ++j)
			{
				v11 = j % *(_DWORD*)(a1 + 2424)
					+ *(_DWORD*)(a1 + 2424)
					* (i % *(_DWORD*)(a1 + 2428) + *(_DWORD*)(a1 + 2428) * (i % *(_DWORD*)(a1 + 2428) < 0))
					+ *(_DWORD*)(a1 + 2424) * (unsigned int)(j % *(_DWORD*)(a1 + 2424) < 0);
				if (j < *a2 || j >= a2[2] || i < a2[1] || i >= a2[3])
				{
					v12 = *(_QWORD*)(a1 + 2448);
					v13 = *(_QWORD*)(v12 + 8 * v11);
					if (v13)
					{
						sub_14038A230(*(_QWORD**)(v12 + 8 * v11));
						sub_14018B900(v13, 0);
					}
				}
				else
				{
					*(_QWORD*)&v8[2 * (j % v3) + 2 * v3 * (i % v4 + v4 * (i % v4 < 0) + (j % v3 < 0))] = *(_QWORD*)(*(_QWORD*)(a1 + 2448) + 8i64 * (unsigned int)v11);
				}
			}
		}
		sub_14018B900(*(_QWORD*)(a1 + 2448), 0);
		*(_QWORD*)(a1 + 2448) = v8;
		*(_DWORD*)(a1 + 2424) = v3;
		*(_DWORD*)(a1 + 2428) = v4;
	}
	v14 = (int*)(a1 + 2408);
	v32 = (int*)(a1 + 2408);
	v15 = sub_1401B24C0(a2, (int*)(a1 + 2408), (__int64)v33);
	v16 = 0i64;
	v31 = v15;
	v30 = 0i64;
	if (!v15)
		goto LABEL_39;
	v17 = &v34;
LABEL_18:
	v18 = *((_DWORD*)v17 - 2);
	v19 = *(_DWORD*)v17;
	HIDWORD(v29) = v18;
	if (v18 >= v19)
		goto LABEL_37;
	v20 = *((_DWORD*)v17 - 1);
	while (1)
	{
		v21 = *((_DWORD*)v17 - 3);
		LODWORD(v29) = v21;
		if (v21 < v20)
			break;
	LABEL_35:
		HIDWORD(v29) = ++v18;
		if (v18 >= v19)
		{
			v16 = v30;
		LABEL_37:
			++v16;
			v17 += 16;
			v30 = v16;
			if (v16 >= v31)
			{
				v14 = v32;
			LABEL_39:
				*v14 = *a2;
				v14[1] = a2[1];
				v14[2] = a2[2];
				v14[3] = a2[3];
				return 0i64;
			}
			goto LABEL_18;
		}
	}
	while (1)
	{
		v22 = v21 % *(_DWORD*)(a1 + 2424)
			+ *(_DWORD*)(a1 + 2424)
			* (v18 % *(_DWORD*)(a1 + 2428) + *(_DWORD*)(a1 + 2428) * (v18 % *(_DWORD*)(a1 + 2428) < 0))
			+ *(_DWORD*)(a1 + 2424) * (unsigned int)(v21 % *(_DWORD*)(a1 + 2424) < 0);
		if ((unsigned int)v21 < 0x100 && (unsigned int)v18 < 0x100)
			break;
		v24 = 0i64;
	LABEL_31:
		v27 = *(_QWORD*)(a1 + 2448);
		v28 = *(_QWORD*)(8 * v22 + v27);
		if (v28)
		{
			sub_14038A230(*(_QWORD**)(8 * v22 + v27));
			sub_14018B900(v28, 0);
		}
		*(_QWORD*)(8 * v22 + *(_QWORD*)(a1 + 2448)) = v24;
		v18 = HIDWORD(v29);
		v21 = v29 + 1;
		LODWORD(v29) = v21;
		if (v21 >= v20)
		{
			v19 = *(_DWORD*)v17;
			goto LABEL_35;
		}
	}
	v23 = sub_14018B280(160i64, 0);
	v24 = (__m128*)v23;
	if (v23)
	{
		*((_QWORD*)v23 + 14) = 0i64;
		*((_QWORD*)v23 + 15) = 0i64;
		*((_QWORD*)v23 + 16) = 0i64;
		*((_QWORD*)v23 + 17) = 0i64;
		*((_QWORD*)v23 + 18) = 0i64;
		*((_QWORD*)v23 + 19) = 0i64;
		*(_QWORD*)v23 = a1;
		*((_QWORD*)v23 + 2) = 0i64;
		*((_QWORD*)v23 + 4) = 0i64;
	}
	else
	{
		v24 = 0i64;
	}
	v25 = sub_14038A320(v24, (unsigned int*)&v29);
	if (v25 >= 0)
		goto LABEL_31;
	if (v24)
	{
		sub_14038A230(v24);
		sub_14018B900((__int64)v24, 0);
	}
	return (unsigned int)v25;
}
// 140355800: using guessed type char var_B8[12];

