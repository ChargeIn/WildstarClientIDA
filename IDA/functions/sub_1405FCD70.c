//----- (00000001405FCD70) ----------------------------------------------------
__int64* __fastcall sub_1405FCD70(__int64 a1, __int64* a2)
{
	_QWORD* v2; // rax
	__int64* v3; // r14
	__int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 v6; // r15
	__int64 v7; // rsi
	__int64 v8; // r13
	unsigned int* v9; // rcx
	__int64 v10; // rax
	int v11; // r14d
	int v12; // esi
	int v13; // ebp
	__int64 v14; // rdi
	int* v15; // rax
	__int64 v16; // rcx
	int* v17; // rdi
	int* v18; // r12
	__int64 v19; // rbp
	unsigned int v20; // ecx
	__int64 v21; // rsi
	__int64 v22; // rdi
	__int64 v23; // r8
	unsigned int v24; // edx
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned int v27; // edi
	int v28; // eax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	int v32; // edx
	__int64 v33; // rax
	int v34; // eax
	unsigned int v35; // ecx
	int v36; // r14d
	__int64 v37; // rax
	int v38; // esi
	__int64 v39; // rdi
	__int64 v40; // r13
	int* v41; // rax
	__int64 v42; // rcx
	int* v43; // r12
	int* v44; // rdi
	_QWORD* v45; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64* v49; // [rsp+20h] [rbp-68h]
	__int64 v50; // [rsp+28h] [rbp-60h]
	__int64 v51; // [rsp+30h] [rbp-58h] BYREF
	__int64 v52; // [rsp+38h] [rbp-50h] BYREF
	__int64 v55; // [rsp+A0h] [rbp+18h]
	int v56; // [rsp+A0h] [rbp+18h]
	_QWORD* v57; // [rsp+A8h] [rbp+20h]

	v2 = *(_QWORD**)(a1 + 8);
	v3 = a2;
	v4 = a1;
	v5 = (_QWORD*)v2[2];
	a2[1] = 0i64;
	*a2 = 0i64;
	v57 = v5;
	if (v5 == v2)
		return v3;
	do
	{
		v49 = v5 + 5;
		v6 = sub_1405A8A40(*(_QWORD*)(v5[5] + 8i64), **(_DWORD**)(v5[5] + 8i64));
		if (!v6)
			goto LABEL_59;
		v7 = 4i64;
		v8 = 368i64;
		v55 = 4i64;
		do
		{
			v9 = *(unsigned int**)(v6 + 8);
			if (v9[(unsigned __int64)v8 / 4 - 4] && v9[(unsigned __int64)v8 / 4])
			{
				if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v9) == 2)
				{
					if ((*(_BYTE*)(*(_QWORD*)(v6 + 8) + v8 + 16) & 0x40) == 0)
						goto LABEL_13;
				}
				else
				{
					v27 = 0;
					if (!*(_DWORD*)(v6 + 16))
						goto LABEL_13;
					while (1)
					{
						v28 = *(_DWORD*)(v8 + *(_QWORD*)(v6 + 8) + 16);
						if (_bittest(&v28, v27))
						{
							if (!(unsigned int)sub_1405510D0(v6, v27) && (unsigned int)sub_140553790(v6, v27))
								break;
						}
						if (++v27 >= *(_DWORD*)(v6 + 16))
							goto LABEL_13;
					}
				}
				v10 = *(_QWORD*)(v6 + 8);
				v11 = *(_DWORD*)(v10 + v8);
				v12 = *(_DWORD*)(v10 + v8 - 16);
				v13 = **(_DWORD**)(*v49 + 8);
				v14 = a2[1];
				v50 = v14 + 1;
				v15 = sub_14018DB00(*a2, v14 + 1, 12i64);
				v16 = 3 * v14;
				v15[v16] = v12;
				v15[v16 + 1] = v11;
				v3 = a2;
				v17 = (int*)*a2;
				v18 = v15;
				v15[v16 + 2] = v13;
				if (v17 != v15)
				{
					sub_1407DB590(v15, v17, 12 * a2[1]);
					if (v17)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
					*a2 = (__int64)v18;
				}
				v7 = v55;
				a2[1] = v50;
			}
		LABEL_13:
			v8 += 4i64;
			v55 = --v7;
		} while (v7);
		v5 = v57;
		v19 = *(unsigned int*)(v6 + 16) - 1i64;
		if (v19 < 0)
			goto LABEL_58;
		while (2)
		{
			v20 = *(_DWORD*)(v6 + 16);
			if ((unsigned int)v19 > v20 || (v21 = v6 + 8i64 * (unsigned int)v19, (v22 = *(_QWORD*)(v21 + 24)) == 0))
			{
			LABEL_56:
				if (--v19 < 0)
					goto LABEL_57;
				continue;
			}
			break;
		}
		if ((_DWORD)v19 == v20)
			goto LABEL_72;
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v6 + 8)) != 3)
		{
			v23 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
			v24 = **(_DWORD**)(v6 + 8);
			v25 = *(_QWORD*)(v23 + 8);
			v26 = v23;
			while (v25)
			{
				if (*(_DWORD*)(v25 + 32) < v24)
				{
					v25 = *(_QWORD*)(v25 + 24);
				}
				else
				{
					v26 = v25;
					v25 = *(_QWORD*)(v25 + 16);
				}
			}
			if (v26 == v23 || v24 < *(_DWORD*)(v26 + 32))
			{
				v52 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
				v29 = &v52;
			}
			else
			{
				v51 = v26;
				v29 = &v51;
			}
			v30 = *v29;
			if (v30 == v23)
				goto LABEL_72;
			v31 = v30 + 40;
			if (!v31)
				goto LABEL_72;
			if ((unsigned int)v19 >= 6)
				goto LABEL_72;
			v32 = 1 << (v19 + 2);
			if (!v32 || (v32 & *(_DWORD*)(v31 + 68)) == 0)
				goto LABEL_72;
		}
		if ((*(_DWORD*)(v22 + 8) & 0x800) == 0)
		{
		LABEL_72:
			if ((unsigned int)v19 < *(_DWORD*)(v6 + 16))
			{
				v33 = *(_QWORD*)(v21 + 24);
				if (v33)
				{
					if (*(_DWORD*)(v33 + 4) == 32 && (unsigned int)sub_140550F70(v6, v19, (*(_DWORD*)(v22 + 8) & 0x100) == 0))
					{
						v34 = sub_1406113B0(v49, v19);
						v35 = *(_DWORD*)(v6 + 16);
						v56 = v34;
						if ((_DWORD)v19 == v35)
						{
							v36 = 0;
						}
						else if ((unsigned int)v19 <= v35)
						{
							v37 = *(_QWORD*)(v21 + 24);
							if (v37)
								v36 = *(_DWORD*)(v37 + 12);
							else
								v36 = 0;
						}
						else
						{
							v36 = 0;
						}
						v38 = **(_DWORD**)(*v49 + 8);
						v39 = a2[1];
						v40 = v39 + 1;
						v41 = sub_14018DB00(*a2, v39 + 1, 12i64);
						v42 = 3 * v39;
						v41[v42] = v36;
						v3 = a2;
						v43 = v41;
						v44 = (int*)*a2;
						v41[v42 + 1] = v56;
						v41[v42 + 2] = v38;
						if (v44 != v41)
						{
							sub_1407DB590(v41, v44, 12 * a2[1]);
							if (v44)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
							*a2 = (__int64)v43;
						}
						a2[1] = v40;
					}
				}
			}
			goto LABEL_56;
		}
	LABEL_57:
		v5 = v57;
	LABEL_58:
		v4 = a1;
	LABEL_59:
		v45 = (_QWORD*)v5[3];
		if (v45)
		{
			v5 = (_QWORD*)v5[3];
			v57 = v45;
			for (i = (_QWORD*)v45[2]; i; i = (_QWORD*)i[2])
			{
				v5 = i;
				v57 = i;
			}
		}
		else
		{
			for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v5 = (_QWORD*)j;
			if (v5[3] != j)
				v5 = (_QWORD*)j;
			v57 = v5;
		}
	} while (v5 != *(_QWORD**)(v4 + 8));
	return v3;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

