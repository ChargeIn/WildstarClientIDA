#include "../winhttp.h"

//----- (00000001408EDFF0) ----------------------------------------------------
__int64 __fastcall sub_1408EDFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v6; // esi
	int v7; // r14d
	int v10; // eax
	unsigned int v11; // ecx
	unsigned int v12; // r8d
	__int64 v13; // rdx
	int v14; // ebp
	int v15; // eax
	unsigned int v16; // ecx
	unsigned int v17; // r8d
	__int64 v18; // rdx
	int v19; // ebp
	__int64 v20; // r14
	int v21; // esi
	__int64 v22; // rbx
	int v23; // eax
	int v24; // eax
	__int64 v25; // rdx
	int v26; // r10d
	char* v27; // rcx
	__int64 v28; // rax
	int v29; // ecx
	unsigned int v30; // ecx
	unsigned int v31; // r9d
	__int64 v32; // r8
	unsigned int v33; // ecx
	unsigned int v34; // r8d
	__int64 v35; // rdx
	unsigned int v36; // ecx
	unsigned int v37; // r8d
	__int64 v38; // rdx
	unsigned int v39; // ecx
	unsigned int v40; // r8d
	__int64 v41; // rdx
	bool v42; // cc
	int v43; // r8d
	int v44; // r15d
	int v45; // ebp
	__int64 v46; // rbx
	int v47; // r12d
	__int64 v48; // r14
	__int64 v49; // rsi
	unsigned __int16 v50; // ax
	int v52; // edx
	int i; // ebp
	unsigned __int16* v54; // rdx
	__int64 v55; // r14
	int v56; // r9d
	int v57; // r10d
	char v58; // bl
	char v59; // si
	int v60; // r8d
	int j; // ecx
	int v62; // eax
	int v63; // [rsp+20h] [rbp-38h]
	int v64; // [rsp+60h] [rbp+8h]
	int v65; // [rsp+60h] [rbp+8h]

	v6 = -1;
	v7 = 0;
	v10 = sub_1408EC1C0(a3, 5);
	*(_DWORD*)(a1 + 48) = v10;
	if (v10 && (v11 = (v10 + 3) & 0xFFFFFFFC, v12 = v11 + *(_DWORD*)(a4 + 16), v12 <= *(_DWORD*)(a4 + 20)))
	{
		v13 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v12;
		*(_QWORD*)(a4 + 8) = v13 + v11;
	}
	else
	{
		v13 = 0i64;
	}
	v14 = 0;
	for (*(_QWORD*)(a1 + 8) = v13; v14 < *(_DWORD*)(a1 + 48); ++v14)
	{
		*(_BYTE*)(v14 + *(_QWORD*)(a1 + 8)) = sub_1408EC1C0(a3, 4);
		if (v6 < *(char*)(*(_QWORD*)(a1 + 8) + v14))
			v6 = *(char*)(*(_QWORD*)(a1 + 8) + v14);
	}
	v64 = v6 + 1;
	v15 = 11 * (v6 + 1);
	if (v15 && (v16 = (v15 + 3) & 0xFFFFFFFC, v17 = v16 + *(_DWORD*)(a4 + 16), v17 <= *(_DWORD*)(a4 + 20)))
	{
		v18 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v17;
		*(_QWORD*)(a4 + 8) = v18 + v16;
	}
	else
	{
		v18 = 0i64;
	}
	v19 = 0;
	*(_QWORD*)a1 = v18;
	if (v6 + 1 > 0)
	{
		while (1)
		{
			v20 = 11i64 * v19;
			*(_BYTE*)(v20 + *(_QWORD*)a1) = sub_1408EC1C0(a3, 3) + 1;
			*(_BYTE*)(v20 + *(_QWORD*)a1 + 1) = sub_1408EC1C0(a3, 2);
			if (*(int*)(a3 + 16) < 0)
				return 0xFFFFFFFFi64;
			if (*(_BYTE*)(*(_QWORD*)a1 + v20 + 1))
			{
				*(_BYTE*)(v20 + *(_QWORD*)a1 + 2) = sub_1408EC1C0(a3, 8);
				if (*(unsigned __int8*)(v20 + *(_QWORD*)a1 + 2) >= *(int*)(a2 + 24))
					return 0xFFFFFFFFi64;
			}
			else
			{
				*(_BYTE*)(*(_QWORD*)a1 + v20 + 2) = 0;
			}
			if (*(unsigned __int8*)(*(_QWORD*)a1 + v20 + 2) >= *(int*)(a2 + 24))
				return 0xFFFFFFFFi64;
			v21 = 0;
			if (1 << *(_BYTE*)(*(_QWORD*)a1 + v20 + 1) > 0)
			{
				v22 = 11i64 * v19;
				do
				{
					*(_BYTE*)(*(_QWORD*)a1 + v22 + 3) = sub_1408EC1C0(a3, 8) - 1;
					v23 = *(unsigned __int8*)(*(_QWORD*)a1 + v22 + 3);
					if (v23 >= *(_DWORD*)(a2 + 24) && (_BYTE)v23 != 0xFF)
						return 0xFFFFFFFFi64;
					++v21;
					++v22;
				} while (v21 < 1 << *(_BYTE*)(*(_QWORD*)a1 + v20 + 1));
			}
			if (++v19 >= v64)
			{
				v7 = 0;
				break;
			}
		}
	}
	*(_DWORD*)(a1 + 56) = sub_1408EC1C0(a3, 2) + 1;
	v24 = sub_1408EC1C0(a3, 4);
	v25 = *(unsigned int*)(a1 + 48);
	v26 = v24;
	v65 = v24;
	if ((int)v25 > 0)
	{
		v27 = *(char**)(a1 + 8);
		do
		{
			v28 = *v27++;
			v7 += *(char*)(11 * v28 + *(_QWORD*)a1);
			--v25;
		} while (v25);
	}
	v29 = 2 * (v7 + 2);
	if (v29 && (v30 = (v29 + 3) & 0xFFFFFFFC, v31 = v30 + *(_DWORD*)(a4 + 16), v31 <= *(_DWORD*)(a4 + 20)))
	{
		v32 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v31;
		*(_QWORD*)(a4 + 8) = v32 + v30;
	}
	else
	{
		v32 = 0i64;
	}
	*(_QWORD*)(a1 + 16) = v32;
	if (v7 == -2 || (v33 = (v7 + 5) & 0xFFFFFFFC, v34 = v33 + *(_DWORD*)(a4 + 16), v34 > *(_DWORD*)(a4 + 20)))
	{
		v35 = 0i64;
	}
	else
	{
		v35 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v34;
		*(_QWORD*)(a4 + 8) = v35 + v33;
	}
	*(_QWORD*)(a1 + 24) = v35;
	if (v7 && (v36 = (v7 + 3) & 0xFFFFFFFC, v37 = v36 + *(_DWORD*)(a4 + 16), v37 <= *(_DWORD*)(a4 + 20)))
	{
		v38 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v37;
		*(_QWORD*)(a4 + 8) = v38 + v36;
	}
	else
	{
		v38 = 0i64;
	}
	*(_QWORD*)(a1 + 40) = v38;
	if (v7 && (v39 = (v7 + 3) & 0xFFFFFFFC, v40 = v39 + *(_DWORD*)(a4 + 16), v40 <= *(_DWORD*)(a4 + 20)))
	{
		v41 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v40;
		*(_QWORD*)(a4 + 8) = v41 + v39;
	}
	else
	{
		v41 = 0i64;
	}
	v42 = *(_DWORD*)(a1 + 48) <= 0;
	*(_QWORD*)(a1 + 32) = v41;
	v43 = 0;
	v44 = 0;
	v45 = 0;
	v46 = 0i64;
	if (!v42)
	{
		v47 = __ROL4__(1, v26);
		while (1)
		{
			v43 += *(char*)(11i64 * *(char*)(v44 + *(_QWORD*)(a1 + 8)) + *(_QWORD*)a1);
			v48 = v43;
			v63 = v43;
			if (v46 < v43)
				break;
		LABEL_53:
			if (++v44 >= *(_DWORD*)(a1 + 48))
				goto LABEL_54;
		}
		v49 = 2 * v46 + 4;
		while (1)
		{
			v50 = sub_1408EC1C0(a3, v26);
			*(_WORD*)(v49 + *(_QWORD*)(a1 + 16)) = v50;
			if (v50 >= v47)
				return 0xFFFFFFFFi64;
			v26 = v65;
			++v46;
			++v45;
			v49 += 2i64;
			if (v46 >= v48)
			{
				v43 = v63;
				goto LABEL_53;
			}
		}
	}
LABEL_54:
	if (*(int*)(a3 + 16) < 0)
		return 0xFFFFFFFFi64;
	**(_WORD**)(a1 + 16) = 0;
	*(_WORD*)(*(_QWORD*)(a1 + 16) + 2i64) = 1 << v26;
	v52 = 0;
	for (*(_DWORD*)(a1 + 52) = v43 + 2; v52 < *(_DWORD*)(a1 + 52); ++v52)
		*(_BYTE*)(v52 + *(_QWORD*)(a1 + 24)) = v52;
	sub_1408EE8A0(*(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16), *(_WORD*)(a1 + 52));
	for (i = 0; i < *(_DWORD*)(a1 + 52) - 2; *(_BYTE*)(v55 + *(_QWORD*)(a1 + 32)) = v59)
	{
		v54 = *(unsigned __int16**)(a1 + 16);
		v55 = i;
		v56 = v54[1];
		v57 = v54[i + 2];
		v58 = 0;
		v59 = 1;
		v60 = 0;
		for (j = 0; j < i + 2; ++v54)
		{
			v62 = *v54;
			if (v62 > v60 && v62 < v57)
			{
				v58 = j;
				v60 = *v54;
			}
			if (v62 < v56 && v62 > v57)
			{
				v59 = j;
				v56 = *v54;
			}
			++j;
		}
		++i;
		*(_BYTE*)(v55 + *(_QWORD*)(a1 + 40)) = v58;
	}
	return 0i64;
}

