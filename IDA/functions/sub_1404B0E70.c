//----- (00000001404B0E70) ----------------------------------------------------
__int64 __fastcall sub_1404B0E70(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v2; // rdx
	__int64 v4; // r9
	__int64 v5; // rcx
	_QWORD* v6; // rax
	unsigned __int64 v7; // rax
	__int64 v8; // r12
	int v9; // eax
	int* v10; // r15
	__int64 v11; // r14
	__int64 v12; // r13
	__int64 v13; // rbx
	__int64 v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rcx
	unsigned int* v17; // rdi
	unsigned int v18; // r8d
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64* v22; // rcx
	__int64 v23; // rax
	__int64 i; // rax
	__int64 j; // rax
	char v26[24]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v27; // [rsp+80h] [rbp+8h] BYREF
	int v28; // [rsp+88h] [rbp+10h] BYREF
	int v29; // [rsp+8Ch] [rbp+14h]
	__int64 v30; // [rsp+90h] [rbp+18h] BYREF
	__int64 v31; // [rsp+98h] [rbp+20h] BYREF

	v27 = a1;
	v1 = qword_140C659D8;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(qword_140C659D8 + 136);
	v5 = v4;
	v6 = *(_QWORD**)(v4 + 8);
	while (v6)
	{
		if (v6[4] < *(_QWORD*)(v2 + 424))
		{
			v6 = (_QWORD*)v6[3];
		}
		else
		{
			v5 = (__int64)v6;
			v6 = (_QWORD*)v6[2];
		}
	}
	if (v5 == v4 || (v7 = *(_QWORD*)(v5 + 32), v27 = v5, *(_QWORD*)(v2 + 424) < v7))
		v27 = v4;
	if (v27 == v4)
		return 0i64;
	v8 = *(_QWORD*)(v27 + 40);
	v9 = 0;
	v28 = *(_DWORD*)(v2 + 56);
	if (qword_140C65970)
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65970 + 16i64))(qword_140C65970);
	v29 = v9;
	v10 = &v28;
	v11 = v1 + 8;
	v12 = 2i64;
	do
	{
		v13 = *(_QWORD*)v11;
		v14 = *(_QWORD*)v11;
		v15 = *(_QWORD*)(*(_QWORD*)v11 + 8i64);
		v16 = v15;
		if (v15)
		{
			do
			{
				if ((unsigned int)*v10 >= *(_DWORD*)(v16 + 32))
				{
					v16 = *(_QWORD*)(v16 + 24);
				}
				else
				{
					v14 = v16;
					v16 = *(_QWORD*)(v16 + 16);
				}
			} while (v16);
			do
			{
				if (*(_DWORD*)(v15 + 32))
				{
					v13 = v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
				else
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
			} while (v15);
		}
		while (v13 != v14)
		{
			v17 = *(unsigned int**)(v13 + 40);
			if (v17)
			{
				v18 = *v17;
				if (!*v17)
					goto LABEL_52;
				v19 = *(_QWORD*)(v1 + 104);
				v20 = v19;
				v21 = *(_QWORD*)(v19 + 8);
				while (v21)
				{
					if (*(_DWORD*)(v21 + 32) < v18)
					{
						v21 = *(_QWORD*)(v21 + 24);
					}
					else
					{
						v20 = v21;
						v21 = *(_QWORD*)(v21 + 16);
					}
				}
				if (v20 == v19 || v18 < *(_DWORD*)(v20 + 32))
				{
					v31 = *(_QWORD*)(v1 + 104);
					v22 = &v31;
				}
				else
				{
					v30 = v20;
					v22 = &v30;
				}
				if (*v22 == v19)
				{
				LABEL_52:
					if ((unsigned int)sub_1404AF7D0(v17, *(_DWORD*)(v13 + 32)))
					{
						LODWORD(v27) = *v17;
						sub_1400293C0(v8, (__int64)v26, (int*)&v27);
					}
				}
			}
			v23 = *(_QWORD*)(v13 + 24);
			if (v23)
			{
				v13 = *(_QWORD*)(v13 + 24);
				for (i = *(_QWORD*)(v23 + 16); i; i = *(_QWORD*)(i + 16))
					v13 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v13 = j;
				if (*(_QWORD*)(v13 + 24) != j)
					v13 = j;
			}
		}
		++v10;
		v11 += 32i64;
		--v12;
	} while (v12);
	return v8;
}
// 1404B0F29: conditional instruction was optimized away because rdx.8!=0
// 1404B0F9F: conditional instruction was optimized away because rax.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659D8: using guessed type __int64 qword_140C659D8;
// 1404B0E70: using guessed type char var_58[24];

