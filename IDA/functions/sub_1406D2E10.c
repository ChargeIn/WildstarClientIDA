//----- (00000001406D2E10) ----------------------------------------------------
void __fastcall sub_1406D2E10(__int64 a1)
{
	__int64 v1; // rax
	int v2; // ebp
	int v3; // r8d
	int v4; // edi
	int v5; // r15d
	int v7; // edx
	__int64 v8; // rax
	int v9; // ecx
	int v10; // esi
	int v11; // eax
	int v12; // r8d
	__int64 v13; // rcx
	int v14; // edx
	__int64 v15; // rax
	char v16; // al
	int v17; // eax
	bool v18; // cc
	__int64 v19; // rdi
	int v20; // esi
	unsigned int v21; // eax
	int v22; // r14d
	_DWORD* v23; // rax
	__int64 v24; // rax
	int v25; // r12d
	int v26; // eax
	int v27; // ecx
	__int64 v28; // rdx
	int v29; // r12d
	int v30; // r8d
	int v31; // r9d
	int v32; // r13d
	int v33; // edi
	int v34; // ecx
	int v35; // esi
	int v36; // r14d
	int i; // ebp
	int v38; // ecx
	__int64 v39; // rax
	int v40; // ecx
	int v41; // [rsp+20h] [rbp-78h]
	int v42[4]; // [rsp+28h] [rbp-70h] BYREF
	int v43; // [rsp+38h] [rbp-60h] BYREF
	int v44; // [rsp+3Ch] [rbp-5Ch]
	int v45; // [rsp+40h] [rbp-58h]
	int v46; // [rsp+44h] [rbp-54h]
	unsigned int v47; // [rsp+A0h] [rbp+8h]
	int v48; // [rsp+A8h] [rbp+10h]
	int v49; // [rsp+B0h] [rbp+18h]
	int v50; // [rsp+B8h] [rbp+20h]

	v1 = *(_QWORD*)(a1 + 472);
	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 720);
	v4 = *(_DWORD*)(a1 + 724);
	v5 = 0;
	if (v1)
		v7 = *(_DWORD*)(v1 + 1300);
	else
		v7 = 0;
	v8 = *(_QWORD*)(a1 + 464);
	if (v8)
		v9 = *(_DWORD*)(v8 + 1300);
	else
		v9 = 0;
	v10 = v2 - v9;
	v47 = v3 - v7;
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 616i64))(a1);
	v12 = *(_DWORD*)(a1 + 2000);
	if (v11 < v12)
		v12 = v11;
	v13 = *(_QWORD*)(a1 + 16);
	v14 = (v4 - (v12 - 1) * *(_DWORD*)(a1 + 2004) - v12 * *(_DWORD*)(a1 + 2020) - v2) / 2;
	if (v13)
		v15 = sub_1400D40C0(v13);
	else
		v15 = a1;
	v16 = *(_BYTE*)(v15 + 29);
	if (((v16 & 8) != 0 || (v16 & 0x10) != 0 || (v16 & 0x20) != 0 || (v16 & 0x40) != 0)
		&& ((v16 & 8) == 0 || (v16 & 0x10) == 0 || (v16 & 0x20) == 0 || (v16 & 0x40) == 0))
	{
		if (*(_DWORD*)(a1 + 2008) < v14)
			v14 = *(_DWORD*)(a1 + 2008);
	}
	else
	{
		v17 = *(_DWORD*)(a1 + 2008);
		v18 = v14 < v17;
		if (v14 > v17)
		{
			v14 = v17 + 1;
			v18 = v17 + 1 <= v17;
		}
		if (v18)
			v14 = v17 - 1;
	}
	v19 = *(_QWORD*)a1;
	v20 = v14 + v10;
	*(_DWORD*)(a1 + 2008) = v14;
	v21 = (*(__int64(__fastcall**)(__int64))(v19 + 616))(a1);
	v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(v19 + 672))(a1, v21);
	v41 = v22;
	if (*(char*)(a1 + 29) >= 0)
	{
		v23 = sub_1400CB0E0(a1, v42, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v23;
		*(_DWORD*)(a1 + 400) = v23[1];
		*(_DWORD*)(a1 + 404) = v23[2];
		*(_DWORD*)(a1 + 408) = v23[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v24 = a1;
		do
		{
			if (!*(_DWORD*)(v24 + 392))
				break;
			*(_DWORD*)(v24 + 392) = 0;
			v24 = *(_QWORD*)(v24 + 16);
		} while (v24);
	}
	v25 = *(_DWORD*)(a1 + 400);
	v26 = *(_DWORD*)(a1 + 404);
	v27 = *(_DWORD*)(a1 + 408);
	v43 = *(_DWORD*)(a1 + 396);
	v44 = v25;
	v45 = v26;
	v46 = v27;
	v28 = *(unsigned int*)(a1 + 2020);
	v29 = v25 - *(_DWORD*)(a1 + 2024);
	v30 = v26 + v28;
	v31 = v27 + *(_DWORD*)(a1 + 2024);
	v32 = v43 - v28;
	v49 = v26 + v28;
	v50 = v31;
	v33 = 0;
	if (v22 > 0)
	{
		v28 = v47;
		v34 = v20 + 1;
		v48 = v20 + 1;
		do
		{
			v35 = v34;
			v36 = v5 * *(_DWORD*)(a1 + 2028) + v28 + 1;
			if ((int)qword_140C77760 >= v32 && v34 <= v30 && SHIDWORD(qword_140C77760) >= v29 && v36 <= v31)
			{
				for (i = 0; i < (*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 624i64))(a1); ++i)
				{
					if (v33 >= (*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 608i64))(a1))
						break;
					v38 = v35 + *(_DWORD*)(a1 + 2020);
					v42[0] = *(_DWORD*)(a1 + 1100);
					v39 = *(_QWORD*)a1;
					v45 = v38;
					v40 = *(_DWORD*)(a1 + 2024);
					v43 = v35;
					v44 = v36;
					v46 = v36 + v40;
					v42[1] = v33;
					(*(void(__fastcall**)(__int64, int*, int*))(v39 + 648))(a1, v42, &v43);
					v35 += *(_DWORD*)(a1 + 2028);
					++v33;
				}
				v28 = v47;
				v31 = v50;
				v30 = v49;
				v34 = v48;
			}
			++v5;
		} while (v5 < v41);
	}
	if (*(_DWORD*)(a1 + 2080))
	{
		if (*(_DWORD*)(a1 + 2084))
			sub_1406D78F0((__int64*)(a1 + 1112), v28, a1);
		*(_DWORD*)(a1 + 2080) = 0;
	}
}
// 1406D2EFB: variable 'v14' is possibly undefined
// 140C77760: using guessed type __int64 qword_140C77760;

