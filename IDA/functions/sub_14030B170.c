//----- (000000014030B170) ----------------------------------------------------
__int64 __fastcall sub_14030B170(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v6; // rcx
	__int64 v7; // r8
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // r8
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // r8
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 result; // rax
	__int64 v25; // rdx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // r8
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rcx

	v3 = *(_QWORD*)(a3 + 16);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v7 = *(unsigned int*)(a3 + 8);
	if ((unsigned __int64)(a2 + v3 + 4 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0i64;
	v9 = 0i64;
	if ((_DWORD)v7)
		v9 = v6;
	*(_QWORD*)(a3 + 16) = v9;
	v10 = *(_QWORD*)(a3 + 64);
	if ((unsigned __int64)(v10 + a2) < *a1)
		return 2147500037i64;
	v11 = *(unsigned int*)(a3 + 56);
	if ((unsigned __int64)(a2 + v10 + v11) > a1[1])
		return 2147500037i64;
	v12 = 0i64;
	if ((_DWORD)v11)
		v12 = v10 + a2;
	*(_QWORD*)(a3 + 64) = v12;
	v13 = *(_QWORD*)(a3 + 80);
	v14 = v13 + a2;
	if ((unsigned __int64)(v13 + a2) < *a1)
		return 2147500037i64;
	v15 = *(unsigned int*)(a3 + 72);
	if ((unsigned __int64)(a2 + v13 + 4 * v15) > a1[1])
		return 2147500037i64;
	v16 = 0i64;
	if ((_DWORD)v15)
		v16 = v14;
	*(_QWORD*)(a3 + 80) = v16;
	v17 = *(_QWORD*)(a3 + 96);
	v18 = v17 + a2;
	if ((unsigned __int64)(v17 + a2) < *a1)
		return 2147500037i64;
	v19 = *(unsigned int*)(a3 + 88);
	if ((unsigned __int64)(a2 + v17 + 4 * v19) > a1[1])
		return 2147500037i64;
	v20 = 0i64;
	if ((_DWORD)v19)
		v20 = v18;
	*(_QWORD*)(a3 + 96) = v20;
	v21 = *(_QWORD*)(a3 + 120);
	if ((unsigned __int64)(v21 + a2) < *a1)
		return 2147500037i64;
	v22 = *(unsigned int*)(a3 + 112);
	if ((unsigned __int64)(a2 + v21 + v22) > a1[1])
		return 2147500037i64;
	v23 = 0i64;
	if ((_DWORD)v22)
		v23 = v21 + a2;
	*(_QWORD*)(a3 + 120) = v23;
	result = sub_14030ECE0(a1, a2, (unsigned int*)(a3 + 128));
	if ((int)result >= 0)
	{
		v26 = *(_QWORD*)(a3 + 160);
		v27 = v26 + v25;
		if ((unsigned __int64)(v26 + v25) >= *a1)
		{
			v28 = *(unsigned int*)(a3 + 152);
			if ((unsigned __int64)(v25 + v26 + 4 * v28) <= a1[1])
			{
				v29 = 0i64;
				if ((_DWORD)v28)
					v29 = v27;
				*(_QWORD*)(a3 + 160) = v29;
				v30 = *(_QWORD*)(a3 + 176);
				if ((unsigned __int64)(v30 + v25) >= *a1)
				{
					v31 = *(unsigned int*)(a3 + 168);
					if ((unsigned __int64)(v25 + v30 + 2 * v31) <= a1[1])
					{
						if ((_DWORD)v31)
							v8 = v30 + v25;
						*(_QWORD*)(a3 + 176) = v8;
						result = sub_1402CB010(a1, v25, (unsigned int*)(a3 + 184));
						if ((int)result >= 0)
							return 0i64;
						return result;
					}
				}
			}
		}
		return 2147500037i64;
	}
	return result;
}
// 14030B29C: variable 'v25' is possibly undefined

