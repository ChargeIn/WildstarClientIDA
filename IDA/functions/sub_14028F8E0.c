//----- (000000014028F8E0) ----------------------------------------------------
__int64 __fastcall sub_14028F8E0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	__int64 v10; // rdx
	__int64 result; // rax
	int v13; // eax
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned int v16; // edi
	__int64 v17; // rax
	bool v18; // cf
	__int64 v19; // rax
	int* v20; // rax
	int v21; // ecx
	int* v22; // rdx
	_QWORD* i; // rax
	__int64* v24; // rcx
	__int64 v25; // rax

	*(_DWORD*)(a1 + 28) = a2;
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 44) = a5;
	*(_DWORD*)(a1 + 48) = a6;
	*(_DWORD*)(a1 + 52) = a7;
	*(_DWORD*)(a1 + 24) = 1;
	*(_DWORD*)(a1 + 56) = a8;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 60) = a9;
	*(_DWORD*)(a1 + 36) = a4;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 64) = a10;
	result = sub_140263970((int*)(a1 + 24), v10 + 136);
	if ((int)result >= 0)
	{
		v13 = sub_140263E70((_DWORD*)(a1 + 24));
		v14 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 128) = v13;
		v15 = 4i64 * *(int*)(a1 + 52);
		if (!*(_DWORD*)(v15 + *(_QWORD*)(v14 + 7040)) && !*(_DWORD*)(v15 + *(_QWORD*)(v14 + 7032)))
		{
			v16 = *(_DWORD*)(a1 + 44);
			v17 = 16i64 * v16;
			if (!is_mul_ok(v16, 0x10ui64))
				v17 = -1i64;
			v18 = __CFADD__(v17, 8i64);
			v19 = v17 + 8;
			if (v18)
				v19 = -1i64;
			v20 = sub_14018B280(v19, 0);
			if (v20)
			{
				v21 = v16 - 1;
				v22 = v20 + 2;
				*v20 = v16;
				for (i = v20 + 2; v21 >= 0; i += 2)
				{
					--v21;
					*i = 0i64;
				}
			}
			else
			{
				v22 = 0i64;
			}
			*(_QWORD*)(a1 + 136) = v22;
		}
		result = sub_14028FCD0(a1, 2);
		if ((int)result >= 0)
		{
			v24 = (__int64*)(*(_QWORD*)(a1 + 16) + 7224i64);
			if (!*(_QWORD*)(a1 + 224))
			{
				*(_QWORD*)(a1 + 224) = v24;
				*(_QWORD*)(a1 + 232) = *v24;
				*v24 = a1;
				v25 = *(_QWORD*)(a1 + 232);
				if (v25)
					*(_QWORD*)(v25 + 224) = a1 + 232;
			}
			return 0i64;
		}
	}
	return result;
}

