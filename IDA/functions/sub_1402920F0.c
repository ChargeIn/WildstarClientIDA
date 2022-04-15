//----- (00000001402920F0) ----------------------------------------------------
__int64 __fastcall sub_1402920F0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	__int64 v9; // rdx
	__int64 result; // rax
	int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rdx
	int v14; // esi
	unsigned int v15; // edi
	__int64 v16; // rax
	bool v17; // cf
	__int64 v18; // rax
	int* v19; // rax
	int v20; // ecx
	int* v21; // rdx
	_QWORD* i; // rax
	__int64 v23; // rax
	__int64* v24; // rcx
	__int64 v25; // rax

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_DWORD*)(a1 + 28) = a2;
	*(_DWORD*)(a1 + 52) = a5;
	*(_DWORD*)(a1 + 32) = a2;
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 56) = a6;
	*(_DWORD*)(a1 + 60) = a7;
	*(_DWORD*)(a1 + 24) = 2;
	*(_QWORD*)(a1 + 36) = 1i64;
	*(_DWORD*)(a1 + 44) = a3;
	*(_DWORD*)(a1 + 48) = a4;
	*(_DWORD*)(a1 + 64) = a8;
	*(_QWORD*)(a1 + 72) = 0i64;
	result = sub_140263970((int*)(a1 + 24), v9 + 136);
	if ((int)result >= 0)
	{
		v11 = sub_140263E70((_DWORD*)(a1 + 24));
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 136) = v11;
		v13 = 4i64 * *(int*)(a1 + 52);
		v14 = *(_DWORD*)(v13 + *(_QWORD*)(v12 + 7032));
		if (!*(_DWORD*)(v13 + *(_QWORD*)(v12 + 7040)) && !v14)
		{
			v15 = 6 * *(_DWORD*)(a1 + 44);
			v16 = 16i64 * v15;
			if (!is_mul_ok(v15, 0x10ui64))
				v16 = -1i64;
			v17 = __CFADD__(v16, 8i64);
			v18 = v16 + 8;
			if (v17)
				v18 = -1i64;
			v19 = sub_14018B280(v18, 0);
			if (v19)
			{
				v20 = v15 - 1;
				v21 = v19 + 2;
				*v19 = v15;
				for (i = v19 + 2; v20 >= 0; i += 2)
				{
					--v20;
					*i = 0i64;
				}
			}
			else
			{
				v21 = 0i64;
			}
			*(_QWORD*)(a1 + 144) = v21;
		}
		if ((v14 & 1) != 0)
		{
			v23 = 4i64 * (unsigned int)(6 * *(_DWORD*)(a1 + 44));
			if (!is_mul_ok((unsigned int)(6 * *(_DWORD*)(a1 + 44)), 4ui64))
				v23 = -1i64;
			*(_QWORD*)(a1 + 152) = sub_14018B280(v23, 0);
		}
		result = sub_140292530(a1, 2);
		if ((int)result >= 0)
		{
			v24 = (__int64*)(*(_QWORD*)(a1 + 16) + 7232i64);
			if (!*(_QWORD*)(a1 + 360))
			{
				*(_QWORD*)(a1 + 360) = v24;
				*(_QWORD*)(a1 + 368) = *v24;
				*v24 = a1;
				v25 = *(_QWORD*)(a1 + 368);
				if (v25)
					*(_QWORD*)(v25 + 360) = a1 + 368;
			}
			return 0i64;
		}
	}
	return result;
}

