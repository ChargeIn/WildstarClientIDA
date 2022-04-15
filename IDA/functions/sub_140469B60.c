//----- (0000000140469B60) ----------------------------------------------------
__int64 __fastcall sub_140469B60(__int64 a1, int a2, int a3)
{
	__int64 v3; // rax
	int v5; // r8d
	const void*** v6; // r13
	int v7; // r15d
	const void*** v8; // rdi
	const void** j; // rbx
	_QWORD* v10; // rcx
	_QWORD* v11; // rdx
	const void** v12; // rcx
	const void*** v13; // rdi
	const void** k; // rsi
	_QWORD* v15; // rcx
	_QWORD* v16; // rdx
	const void** v17; // rcx
	const void*** v18; // r14
	const void** m; // rdi
	_QWORD* v20; // rcx
	_QWORD* v21; // rdx
	const void** v22; // rcx
	const void** v23; // rcx
	const void** v24; // rbx
	const void** v26; // [rsp+20h] [rbp-48h] BYREF
	const void** v27; // [rsp+28h] [rbp-40h] BYREF
	__int64 i; // [rsp+30h] [rbp-38h]
	__int64 v29; // [rsp+80h] [rbp+18h]
	const void** v31; // [rsp+98h] [rbp+30h] BYREF

	v29 = a1;
	v3 = *(_QWORD*)(a1 + 5576);
	v5 = a2;
	for (i = v3; v3; i = v3)
	{
		v6 = *(const void****)(v3 + 56);
		if (*((_DWORD*)v6[39][14] + 1) == v5)
		{
			v7 = *(_DWORD*)(a1 + 8);
			if (v7)
			{
				v8 = v6 + 69;
				j = v6[69];
				v6[69] = 0i64;
				v31 = j;
				if (j)
				{
					j[1] = &v31;
					for (j = v31; v31; j = v31)
					{
						v10 = j[1];
						if (v10)
							*v10 = j[2];
						v11 = j[2];
						v12 = j + 2;
						if (v11)
							v11[1] = j[1];
						*v12 = 0i64;
						j[1] = v8;
						*v12 = *v8;
						*v8 = j;
						if (*v12)
							*((_QWORD*)*v12 + 1) = v12;
						if ((*((unsigned int(__fastcall**)(const void**)) * j + 7))(j) == v7
							&& *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * j + 2))(j) + 40) == a3)
						{
							(*((void(__fastcall**)(const void**, _QWORD)) * j + 10))(j, 0i64);
						}
					}
				}
				v13 = v6 + 67;
				k = v6[67];
				v6[67] = 0i64;
				v26 = k;
				if (k)
				{
					k[1] = &v26;
					for (k = v26; v26; k = v26)
					{
						v15 = k[1];
						if (v15)
							*v15 = k[2];
						v16 = k[2];
						v17 = k + 2;
						if (v16)
							v16[1] = k[1];
						*v17 = 0i64;
						k[1] = v13;
						*v17 = *v13;
						*v13 = k;
						if (*v17)
							*((_QWORD*)*v17 + 1) = v17;
						if ((*((unsigned int(__fastcall**)(const void**)) * k + 7))(k) == v7
							&& *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * k + 2))(k) + 40) == a3)
						{
							(*((void(__fastcall**)(const void**, _QWORD)) * k + 10))(k, 0i64);
						}
					}
					j = v31;
				}
				v18 = v6 + 70;
				m = v6[70];
				v6[70] = 0i64;
				v27 = m;
				if (m)
				{
					m[1] = &v27;
					for (m = v27; v27; m = v27)
					{
						v20 = m[1];
						if (v20)
							*v20 = m[2];
						v21 = m[2];
						v22 = m + 2;
						if (v21)
							v21[1] = m[1];
						*v22 = 0i64;
						m[1] = v18;
						*v22 = *v18;
						*v18 = m;
						if (*v22)
							*((_QWORD*)*v22 + 1) = v22;
						if (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * m + 2))(m) + 76)
							&& (*((unsigned int(__fastcall**)(const void**)) * m + 7))(m) == v7
							&& *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * m + 2))(m) + 40) == a3)
						{
							(*((void(__fastcall**)(const void**, _QWORD)) * m + 10))(m, 0i64);
						}
					}
					k = v26;
					j = v31;
				}
				v23 = v6[71];
				if (v23)
				{
					do
					{
						v24 = (const void**)v23[4];
						if (*((_DWORD*)v23 + 11) == v7 && *((_DWORD*)v23 + 12) == a3)
							(*(void(__fastcall**)(const void**, __int64)) * v23)(v23, 1i64);
						v23 = v24;
					} while (v24);
					j = v31;
					k = v26;
					m = v27;
				}
				if (m)
				{
					sub_1401A4A00(&v27);
					j = v31;
					k = v26;
				}
				if (k)
				{
					sub_1401A4A00(&v26);
					j = v31;
				}
				if (j)
					sub_1401A4A00(&v31);
				v5 = a2;
				a1 = v29;
			}
		}
		v3 = *(_QWORD*)(i + 24);
	}
	return 0i64;
}

