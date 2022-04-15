#include "../winhttp.h"

//----- (00000001405A6580) ----------------------------------------------------
__int64 __fastcall sub_1405A6580(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // ecx
	__int64 result; // rax
	__int64 v5; // r15
	__int64 v6; // r10
	__int64 v7; // r14
	unsigned int* v8; // rbx
	BOOL v9; // ebp
	__int64 v10; // rdi
	unsigned int v11; // edx
	__int64 v12; // rcx
	BOOL v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int* v16; // rbx
	unsigned int v17; // edx
	__int64 v18; // rax
	BOOL v19; // ecx
	__int64 v20; // r8
	__int64 v21; // r9
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	unsigned int v27; // edx
	__int64 v28; // r8
	__int64 v29; // r9
	__int64 v30; // rcx
	__int64 v31; // rax
	__int128 v32; // [rsp+20h] [rbp-58h]
	__int128 v33; // [rsp+30h] [rbp-48h] BYREF
	__int64 v34; // [rsp+80h] [rbp+8h] BYREF
	__int64 v35; // [rsp+88h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 120);
	if (v1)
		v3 = *(_DWORD*)(v1 + 220);
	else
		v3 = 23;
	result = sub_1401F31E0(v3);
	v5 = result;
	if (result)
	{
		v6 = qword_140C65898;
		v7 = 2i64;
		v8 = (unsigned int*)(result + 68);
		v9 = 1;
		v10 = 2i64;
		do
		{
			v11 = *v8;
			v12 = *(_QWORD*)(a1 + 120);
			if (*v8)
			{
				if (v12)
				{
					v13 = *(_QWORD*)(v6 + 120) == v12 || *(_QWORD*)(v6 + 25744) == *(_QWORD*)(a1 + 120);
					v14 = 0i64;
					if (v13)
						v14 = v6;
					if (v14)
					{
						v15 = sub_1405A5B90(v14, v11);
						if (v15)
							goto LABEL_16;
					}
				}
				v15 = sub_1407A0FD0(qword_140C65B70, v11);
				v6 = qword_140C65898;
				if (v15)
				{
				LABEL_16:
					*(_QWORD*)&v32 = sub_1405A5C90;
					DWORD2(v32) = 0;
					v33 = v32;
					sub_1405A5FE0(a1, v15, (__int64)&v33);
					v6 = qword_140C65898;
				}
			}
			++v8;
			--v10;
		} while (v10);
		v16 = (unsigned int*)(v5 + 76);
		do
		{
			v17 = *v16;
			v18 = *(_QWORD*)(a1 + 120);
			if (*v16)
			{
				if (v18)
				{
					v19 = *(_QWORD*)(v6 + 120) == v18 || *(_QWORD*)(v6 + 25744) == *(_QWORD*)(a1 + 120);
					v20 = 0i64;
					if (v19)
						v20 = v6;
					if (v20)
					{
						v21 = *(_QWORD*)(v20 + 32024);
						v22 = v21;
						v23 = *(_QWORD*)(v21 + 8);
						while (v23)
						{
							if (*(_DWORD*)(v23 + 32) < v17)
							{
								v23 = *(_QWORD*)(v23 + 24);
							}
							else
							{
								v22 = v23;
								v23 = *(_QWORD*)(v23 + 16);
							}
						}
						if (v22 == v21 || v17 < *(_DWORD*)(v22 + 32))
						{
							v35 = *(_QWORD*)(v20 + 32024);
							v24 = &v35;
						}
						else
						{
							v34 = v22;
							v24 = &v34;
						}
						v25 = *v24;
						if (v25 != v21)
						{
							v26 = *(_QWORD*)(v25 + 40);
							if (v26)
								goto LABEL_39;
						}
					}
				}
				v26 = sub_1407A0FD0(qword_140C65B70, v17);
				v6 = qword_140C65898;
				if (v26)
				{
				LABEL_39:
					*(_QWORD*)&v32 = sub_1405A5C90;
					DWORD2(v32) = 0;
					v33 = v32;
					sub_1405A5FE0(a1, v26, (__int64)&v33);
					v6 = qword_140C65898;
				}
			}
			++v16;
			--v7;
		} while (v7);
		v27 = *(_DWORD*)(v5 + 84);
		result = *(_QWORD*)(a1 + 120);
		if (v27)
		{
			if (result)
			{
				if (*(_QWORD*)(v6 + 120) != result)
					v9 = *(_QWORD*)(v6 + 25744) == *(_QWORD*)(a1 + 120);
				v28 = 0i64;
				if (v9)
					v28 = v6;
				if (v28)
				{
					v29 = *(_QWORD*)(v28 + 32024);
					v30 = v29;
					v31 = *(_QWORD*)(v29 + 8);
					while (v31)
					{
						if (*(_DWORD*)(v31 + 32) < v27)
						{
							v31 = *(_QWORD*)(v31 + 24);
						}
						else
						{
							v30 = v31;
							v31 = *(_QWORD*)(v31 + 16);
						}
					}
					if (v30 == v29 || (v34 = v30, v27 < *(_DWORD*)(v30 + 32)))
						v34 = v29;
					if (v34 != v29)
					{
						result = *(_QWORD*)(v34 + 40);
						if (result)
							goto LABEL_59;
					}
				}
			}
			result = sub_1407A0FD0(qword_140C65B70, v27);
			if (result)
			{
			LABEL_59:
				*(_QWORD*)&v32 = sub_1405A5C90;
				DWORD2(v32) = 0;
				v33 = v32;
				return sub_1405A5FE0(a1, result, (__int64)&v33);
			}
		}
	}
	return result;
}
// 1405A663A: variable 'v11' is possibly undefined
// 1405A6665: variable 'v32' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

