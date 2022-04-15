#include "../winhttp.h"

//----- (00000001408EDCC0) ----------------------------------------------------
__int64 __fastcall sub_1408EDCC0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int v8; // esi
	int v9; // eax
	unsigned __int64 v10; // r8
	unsigned int v11; // ecx
	unsigned int v12; // edx
	int* v13; // rbp
	int i; // ebp
	unsigned int v15; // eax
	int v16; // eax
	unsigned int v17; // ecx
	unsigned int v18; // edx
	unsigned int v19; // r8d
	int* v20; // rbp
	int v21; // ebp
	int v22; // eax
	unsigned int v23; // ecx
	unsigned int v24; // r8d
	__int64 v25; // rdx
	int v26; // ebp
	int v27; // eax
	unsigned int v28; // ecx
	unsigned int v29; // r8d
	__int64 v30; // rdx
	int v31; // ebp
	int v32; // eax
	unsigned int v33; // ecx
	unsigned int v34; // r8d
	__int64 v35; // rdx
	__int64 j; // rdi
	int v38; // [rsp+30h] [rbp-38h] BYREF
	__int64 v39; // [rsp+38h] [rbp-30h]
	int v40; // [rsp+40h] [rbp-28h]

	v8 = 0;
	v9 = sub_1408EC1C0(a3, 8) + 1;
	*(_DWORD*)(a1 + 24) = v9;
	v10 = (unsigned int)(72 * v9);
	if ((_DWORD)v10 && (v11 = (v10 + 3) & 0xFFFFFFFC, v12 = v11 + *(_DWORD*)(a4 + 16), v12 <= *(_DWORD*)(a4 + 20)))
	{
		v13 = *(int**)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v12;
		*(_QWORD*)(a4 + 8) = (char*)v13 + v11;
		if (v13)
			sub_1407E4830(v13, 0i64, v10);
	}
	else
	{
		v13 = 0i64;
	}
	*(_QWORD*)(a1 + 64) = v13;
	for (i = 0; i < *(_DWORD*)(a1 + 24); ++i)
	{
		v15 = sub_1408EC1C0(a3, 10);
		v38 = 0;
		v40 = 874;
		v39 = (__int64)*(&off_140C19230 + v15);
		sub_1408F01B0((__int64)&v38, (unsigned int*)(*(_QWORD*)(a1 + 64) + 72i64 * i), a4);
	}
	v16 = sub_1408EC1C0(a3, 6);
	*(_DWORD*)(a1 + 16) = v16 + 1;
	v17 = (v16 + 1) << 6;
	if (v17 && (v18 = (v17 + 3) & 0xFFFFFFFC, v19 = v18 + *(_DWORD*)(a4 + 16), v19 <= *(_DWORD*)(a4 + 20)))
	{
		v20 = *(int**)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v19;
		*(_QWORD*)(a4 + 8) = (char*)v20 + v18;
		if (v20)
			sub_1407E4830(v20, 0i64, v17);
	}
	else
	{
		v20 = 0i64;
	}
	*(_QWORD*)(a1 + 48) = v20;
	v21 = 0;
	if (*(int*)(a1 + 16) <= 0)
	{
	LABEL_16:
		v22 = sub_1408EC1C0(a3, 6) + 1;
		*(_DWORD*)(a1 + 20) = v22;
		if (40 * v22 && (v23 = (40 * v22 + 3) & 0xFFFFFFFC, v24 = v23 + *(_DWORD*)(a4 + 16), v24 <= *(_DWORD*)(a4 + 20)))
		{
			v25 = *(_QWORD*)(a4 + 8);
			*(_DWORD*)(a4 + 16) = v24;
			*(_QWORD*)(a4 + 8) = v25 + v23;
		}
		else
		{
			v25 = 0i64;
		}
		*(_QWORD*)(a1 + 56) = v25;
		v26 = 0;
		if (*(int*)(a1 + 20) <= 0)
		{
		LABEL_23:
			v27 = sub_1408EC1C0(a3, 6) + 1;
			*(_DWORD*)(a1 + 12) = v27;
			if (40 * v27
				&& (v28 = (40 * v27 + 3) & 0xFFFFFFFC, v29 = v28 + *(_DWORD*)(a4 + 16), v29 <= *(_DWORD*)(a4 + 20)))
			{
				v30 = *(_QWORD*)(a4 + 8);
				*(_DWORD*)(a4 + 16) = v29;
				*(_QWORD*)(a4 + 8) = v30 + v28;
			}
			else
			{
				v30 = 0i64;
			}
			*(_QWORD*)(a1 + 40) = v30;
			v31 = 0;
			if (*(int*)(a1 + 12) <= 0)
			{
			LABEL_30:
				v32 = sub_1408EC1C0(a3, 6) + 1;
				*(_DWORD*)(a1 + 8) = v32;
				if (2 * v32
					&& (v33 = (2 * v32 + 3) & 0xFFFFFFFC, v34 = v33 + *(_DWORD*)(a4 + 16), v34 <= *(_DWORD*)(a4 + 20)))
				{
					v35 = *(_QWORD*)(a4 + 8);
					*(_DWORD*)(a4 + 16) = v34;
					*(_QWORD*)(a4 + 8) = v35 + v33;
				}
				else
				{
					v35 = 0i64;
				}
				*(_QWORD*)(a1 + 32) = v35;
				if (*(int*)(a1 + 8) <= 0)
					return 0i64;
				for (j = 0i64; ; j += 2i64)
				{
					*(_BYTE*)(j + *(_QWORD*)(a1 + 32)) = sub_1408EC1C0(a3, 1);
					*(_BYTE*)(j + *(_QWORD*)(a1 + 32) + 1) = sub_1408EC1C0(a3, 8);
					if (*(unsigned __int8*)(j + *(_QWORD*)(a1 + 32) + 1) >= *(int*)(a1 + 12))
						break;
					if (++v8 >= *(_DWORD*)(a1 + 8))
						return 0i64;
				}
			}
			else
			{
				while (!(unsigned int)sub_1408ED5E0((_QWORD*)(*(_QWORD*)(a1 + 40) + 40i64 * v31), a1, a2, a3, a4))
				{
					if (++v31 >= *(_DWORD*)(a1 + 12))
						goto LABEL_30;
				}
			}
		}
		else
		{
			while (!sub_1408EF290(*(_QWORD*)(a1 + 56) + 40i64 * v26, a1, a3, a4))
			{
				if (++v26 >= *(_DWORD*)(a1 + 20))
					goto LABEL_23;
			}
		}
	}
	else
	{
		while (!(unsigned int)sub_1408EDFF0(*(_QWORD*)(a1 + 48) + ((__int64)v21 << 6), a1, a3, a4))
		{
			if (++v21 >= *(_DWORD*)(a1 + 16))
				goto LABEL_16;
		}
	}
	return 4294967163i64;
}
// 140C19230: using guessed type void *off_140C19230;

