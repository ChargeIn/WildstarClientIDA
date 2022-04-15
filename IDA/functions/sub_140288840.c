//----- (0000000140288840) ----------------------------------------------------
__int64 __fastcall sub_140288840(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rcx
	__int64 v8; // [rsp+60h] [rbp+8h] BYREF
	unsigned int v9; // [rsp+68h] [rbp+10h]

	if (a2 >= *(_DWORD*)(a1 + 76))
		return 2147942487i64;
	++* (_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * a2);
	if (a2 >= *(_DWORD*)(a1 + 88))
		return 0i64;
	v5 = *(_DWORD*)(a1 + 64);
	if (v5)
	{
		v6 = v5 - 1;
		if (v6)
		{
			if (v6 == 1)
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 112i64))(
					*(_QWORD*)(a1 + 16),
					*(_QWORD*)(a1 + 40),
					a2,
					1i64,
					*(_DWORD*)(a1 + 24),
					*(_DWORD*)(a1 + 28),
					*(_DWORD*)(a1 + 32),
					&v8);
			else
				result = v9;
		}
		else
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 96i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(a1 + 40),
				a2,
				1i64,
				*(_DWORD*)(a1 + 24),
				*(_DWORD*)(a1 + 28),
				*(_DWORD*)(a1 + 32),
				&v8);
		}
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 16) + 80i64))(
			*(_QWORD*)(a1 + 16),
			*(_QWORD*)(a1 + 40),
			a2,
			1i64,
			*(_DWORD*)(a1 + 24),
			*(_DWORD*)(a1 + 28),
			*(_DWORD*)(a1 + 32),
			*(_DWORD*)(a1 + 48),
			&v8);
	}
	if ((int)result >= 0)
	{
		v7 = *(_QWORD*)(a1 + 96);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		*(_QWORD*)(a1 + 96) = v8;
		*(_DWORD*)(a1 + 88) = a2;
		return 0i64;
	}
	return result;
}

