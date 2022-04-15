//----- (000000014053D1F0) ----------------------------------------------------
__int64 __fastcall sub_14053D1F0(__int64 a1, _DWORD* a2, _QWORD* a3, int a4)
{
	__int64 v5; // rcx
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rax
	unsigned __int64 v14; // rcx
	int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rdi
	int v18; // eax
	int v19; // r8d
	_DWORD* v20; // rax
	int v21; // eax
	int v22; // ecx
	_WORD* v23; // rax
	_QWORD* v24; // r9
	_DWORD* v25; // rdx
	unsigned int v26; // r8d
	int v27; // ecx
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // r8
	__int64* v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rax
	int v37; // [rsp+20h] [rbp-28h] BYREF
	__int64 v38; // [rsp+28h] [rbp-20h]
	void(__fastcall * v39)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v40; // [rsp+38h] [rbp-10h]

	v5 = a1 + 104;
	*(_DWORD*)(v5 - 12) = a2[6];
	*(_DWORD*)(v5 + 236) = a2[7];
	*(_DWORD*)(v5 + 240) = a2[9];
	sub_14053D550(v5, (__int64)a2);
	v9 = *(_DWORD*)a3[14];
	v10 = dword_140C636A8;
	*(_QWORD*)(a1 + 312) = a3;
	*(_DWORD*)(a1 + 404) = v10;
	*(_DWORD*)(a1 + 304) = v9;
	*(_DWORD*)(a1 + 320) = a4;
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a3[14] + 28i64);
	v11 = a3[10];
	if (v11)
	{
		*(_DWORD*)(a1 + 80) = *(_DWORD*)(v11 + 4);
	}
	else
	{
		v12 = a3[14];
		if (*(_DWORD*)(v12 + 24) == 8)
		{
			v13 = (_QWORD*)a3[11];
			if (v13)
			{
				if (!*(_DWORD*)(v12 + 28))
				{
					v14 = 0i64;
					if (v13[1])
					{
						v15 = *(_DWORD*)(a1 + 80);
						do
						{
							++v14;
							v15 += *(_DWORD*)(*v13 + 4 * v14 - 4);
							*(_DWORD*)(a1 + 80) = v15;
							v13 = (_QWORD*)a3[11];
						} while (v14 < v13[1]);
					}
				}
			}
		}
	}
	v16 = sub_1403D90D0(qword_140C65898, a2[9]);
	v17 = v16;
	if (v16)
	{
		if (*(_QWORD*)(v16 + 24))
		{
			if (a2[21])
			{
				v18 = sub_14054E340(a3[14], *(_DWORD*)a3[14], v16);
				v19 = *(_DWORD*)(a1 + 304);
				*(_DWORD*)(a1 + 80) = v18;
				*(_QWORD*)(a1 + 408) = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 312i64);
				v20 = (_DWORD*)sub_1407A1680(qword_140C65B70, **(_DWORD**)(v17 + 24), v19);
				if (v20)
				{
					if (*v20)
					{
						v21 = v20[10];
						if (v21)
							*(_DWORD*)(a1 + 840) = v21;
					}
				}
			}
		}
	}
	if (!*(_DWORD*)(a1 + 840))
	{
		v22 = *(_DWORD*)(a3[1] + 28i64);
		if (v22)
			*(_DWORD*)(a1 + 840) = v22;
	}
	v23 = *(_WORD**)(a1 + 408);
	if (!v23 || !*v23)
		*(_QWORD*)(a1 + 408) = sub_14034BDD0(
			*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8i64),
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8i64) + 16i64));
	v24 = *(_QWORD**)(a1 + 312);
	*(_DWORD*)(a1 + 416) = 1;
	v25 = (_DWORD*)v24[10];
	if (v25)
	{
		*(_DWORD*)(a1 + 416) = (unsigned int)(v25[2] + v25[1] - *v25) / v25[2];
	}
	else if (*(_DWORD*)(v24[14] + 24i64) == 8)
	{
		*(_DWORD*)(a1 + 328) = 1;
		v26 = 0;
		v27 = *(_DWORD*)(v24[11] + 8i64);
		*(_DWORD*)(a1 + 416) = v27;
		if (v27)
		{
			do
			{
				if ((*(_DWORD*)(*(_QWORD*)(v24[11] + 16i64) + 4i64 * v26) & 0x200) != 0)
					*(_DWORD*)(a1 + 328) = 0;
				++v26;
			} while (v26 < *(_DWORD*)(a1 + 416));
		}
	}
	v28 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v29 = qword_140C65898;
	v30 = v28;
	if (v28)
	{
		v31 = (__int64*)(v28 + 5568);
		if (!*(_QWORD*)(a1 + 8))
		{
			*(_QWORD*)(a1 + 8) = v31;
			*(_QWORD*)(a1 + 16) = *v31;
			*v31 = a1;
			v32 = *(_QWORD*)(a1 + 16);
			if (v32)
				*(_QWORD*)(v32 + 8) = a1 + 16;
		}
		*(_DWORD*)(v30 + 6312) = 1;
		v33 = *(_QWORD*)(v29 + 120);
		if (v33 && *(_DWORD*)(v30 + 8) == *(_DWORD*)(v33 + 8))
			*(_DWORD*)(v29 + 28568) = 1;
	}
	if (v17)
	{
		*(_DWORD*)(v17 + 6312) = 1;
		v34 = *(_QWORD*)(v29 + 120);
		if (v34)
		{
			if (*(_DWORD*)(v17 + 8) == *(_DWORD*)(v34 + 8))
				*(_DWORD*)(v29 + 28568) = 1;
		}
	}
	sub_140540430(a1);
	if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 264i64) & 0x4000) != 0)
	{
		v35 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v35)
		{
			if (*(_DWORD*)(a1 + 340) == *(_DWORD*)(v35 + 8))
				sub_14039DAF0(qword_140C65898);
		}
	}
	v37 = 0;
	v39 = sub_140546E60;
	v38 = a1;
	v40 = 0i64;
	sub_140195960(a1 + 768, 0, (__int64)&v37, 4);
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

