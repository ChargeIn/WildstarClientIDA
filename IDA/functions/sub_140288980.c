//----- (0000000140288980) ----------------------------------------------------
__int64 __fastcall sub_140288980(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	int* v5; // rdx
	int v6; // eax
	unsigned int v7; // ecx
	__int64 v8; // rbx
	int v9; // ecx
	int v10; // ecx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // [rsp+60h] [rbp+8h] BYREF
	unsigned int v16; // [rsp+68h] [rbp+10h]

	if (a2 >= *(_DWORD*)(a1 + 76))
		return 2147942487i64;
	v5 = (int*)(*(_QWORD*)(a1 + 80) + 4i64 * a2);
	if (!*v5)
		return 2147500037i64;
	v6 = *v5 - 1;
	*v5 = v6;
	if (v6 || a2 > *(_DWORD*)(a1 + 88))
		return 0i64;
	v7 = *(_DWORD*)(a1 + 76);
	v8 = a2 + 1;
	if ((unsigned int)v8 >= v7)
		goto LABEL_22;
	do
	{
		if (*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v8))
			break;
		v8 = (unsigned int)(v8 + 1);
	} while ((unsigned int)v8 < v7);
	if ((unsigned int)v8 >= v7)
	{
	LABEL_22:
		v13 = *(_QWORD*)(a1 + 96);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		*(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 76);
		v14 = *(_QWORD*)(a1 + 104);
		if (v14)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			*(_QWORD*)(a1 + 104) = 0i64;
		}
		*(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 76);
		return 0i64;
	}
	v9 = *(_DWORD*)(a1 + 64);
	if (v9)
	{
		v10 = v9 - 1;
		if (v10)
		{
			if (v10 == 1)
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 112i64))(
					*(_QWORD*)(a1 + 16),
					*(_QWORD*)(a1 + 40),
					(unsigned int)v8,
					1i64,
					*(_DWORD*)(a1 + 24),
					*(_DWORD*)(a1 + 28),
					*(_DWORD*)(a1 + 32),
					&v15);
			else
				result = v16;
		}
		else
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 96i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(a1 + 40),
				(unsigned int)v8,
				1i64,
				*(_DWORD*)(a1 + 24),
				*(_DWORD*)(a1 + 28),
				*(_DWORD*)(a1 + 32),
				&v15);
		}
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 80i64))(
			*(_QWORD*)(a1 + 16),
			*(_QWORD*)(a1 + 40),
			(unsigned int)v8,
			1i64,
			*(_DWORD*)(a1 + 24),
			*(_DWORD*)(a1 + 28),
			*(_DWORD*)(a1 + 32),
			*(_DWORD*)(a1 + 48),
			&v15);
	}
	if ((int)result >= 0)
	{
		v11 = *(_QWORD*)(a1 + 96);
		if (v11)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		v12 = v15;
		*(_DWORD*)(a1 + 88) = v8;
		*(_QWORD*)(a1 + 96) = v12;
		return 0i64;
	}
	return result;
}

