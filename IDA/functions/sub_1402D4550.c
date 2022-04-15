//----- (00000001402D4550) ----------------------------------------------------
void __fastcall sub_1402D4550(_QWORD* a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
	__int64 v6; // rcx
	int v7; // edi
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	int v20[4]; // [rsp+20h] [rbp-41h] BYREF
	__int64 v21[4]; // [rsp+30h] [rbp-31h] BYREF
	__int64 v22[4]; // [rsp+50h] [rbp-11h] BYREF
	__int64 v23[2]; // [rsp+70h] [rbp+Fh] BYREF
	int v24; // [rsp+80h] [rbp+1Fh]
	__int64 v25; // [rsp+88h] [rbp+27h]
	int v26; // [rsp+90h] [rbp+2Fh]

	v6 = *a1;
	v7 = 0;
	v20[0] = -1;
	if (v6)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v6 + 32i64))(v6, v20))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v11 = a1[2];
	if (*(_DWORD*)(v11 + 56) && *(_DWORD*)(v11 + 88))
	{
		v12 = *a1;
		++* ((_DWORD*)a1 + 42);
		v21[0] = a4;
		v21[1] = a5;
		v20[0] = -1;
		if (v12)
		{
			if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v12 + 32i64))(v12, v20))
			{
				sub_1402D3300(a1);
				if (*a1)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
					*a1 = 0i64;
				}
			}
		}
		v13 = *(_QWORD*)(a1[2] + 96i64);
		v20[0] = -1;
		v21[2] = v13;
		if (*a1)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*a1 + 32i64))(*a1, v20))
			{
				sub_1402D3300(a1);
				if (*a1)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
					*a1 = 0i64;
				}
			}
		}
		v14 = *(_QWORD*)(a1[2] + 64i64);
		v22[0] = a2;
		v21[3] = v14;
		v15 = *a1;
		v22[1] = (__int64)v21;
		v20[0] = -1;
		if (v15)
		{
			if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v15 + 32i64))(v15, v20))
			{
				sub_1402D3300(a1);
				if (*a1)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
					*a1 = 0i64;
				}
			}
		}
		v16 = *(_QWORD*)(a1[2] + 96i64);
		v20[0] = -1;
		v22[2] = v16;
		if (*a1)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*a1 + 32i64))(*a1, v20))
			{
				sub_1402D3300(a1);
				if (*a1)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
					*a1 = 0i64;
				}
			}
		}
		v17 = *(_QWORD*)(a1[2] + 64i64);
		v20[0] = -1;
		v23[0] = (__int64)v22;
		v18 = a1[18];
		v22[3] = v17;
		v19 = *a1;
		v23[1] = v18;
		v24 = *((_DWORD*)a1 + 42);
		if (v19)
		{
			if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v19 + 32i64))(v19, v20))
			{
				sub_1402D3300(a1);
				if (*a1)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
					*a1 = 0i64;
				}
			}
		}
		if ((a3 & 1) != 0)
			v7 = 1;
		v25 = *(_QWORD*)(a1[2] + 112i64);
		v26 = v7;
		if ((a3 & 2) != 0)
		{
			v7 |= 4u;
			v26 = v7;
		}
		if ((a3 & 4) != 0)
		{
			v7 |= 2u;
			v26 = v7;
		}
		if ((a3 & 8) != 0)
			v26 = v7 | 8;
		sub_1402D51C0((__int64)(a1 + 6), a2, (__int64)v23);
	}
}

