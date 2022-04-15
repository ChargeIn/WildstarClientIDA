//----- (0000000140049900) ----------------------------------------------------
__int64 __fastcall sub_140049900(__int64 a1, _OWORD* a2, __int64* a3, int a4, int a5)
{
	__int64 v9; // rax
	__int64 result; // rax
	__int64* v11; // r14
	__int64 v12; // rcx
	__int64* v13; // rcx
	__int64* v14; // rdi
	__int64 v15; // rcx
	__int64* v16; // rsi

	if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24)))
	{
		v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 936i64))(v9);
	}
	*(_DWORD*)(a1 + 5080) = a5;
	result = a3 && a4 && !a5;
	v11 = (__int64*)(a1 + 5040);
	*(_DWORD*)(a1 + 5076) = result;
	v12 = *(_QWORD*)(a1 + 5040);
	if (v12)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*v11 = 0i64;
	}
	v13 = *(__int64**)(a1 + 5056);
	if (v13)
	{
		result = *(_QWORD*)(a1 + 5064);
		*v13 = result;
	}
	v14 = (__int64*)(a1 + 5064);
	v15 = *(_QWORD*)(a1 + 5064);
	if (v15)
	{
		result = *(_QWORD*)(a1 + 5056);
		*(_QWORD*)(v15 + 5056) = result;
	}
	*(_QWORD*)(a1 + 5056) = 0i64;
	*v14 = 0i64;
	if (a3)
	{
		if (a1 != -5040)
		{
			result = *a3;
			*v11 = *a3;
			if (*a3)
				result = (**(__int64(__fastcall***)(__int64)) * a3)(*a3);
		}
		v16 = a3 + 631;
		if (!*(_QWORD*)(a1 + 5056))
		{
			*(_QWORD*)(a1 + 5056) = v16;
			*v14 = *v16;
			*v16 = a1;
			result = *v14;
			if (*v14)
				*(_QWORD*)(result + 5056) = v14;
		}
	}
	*(_OWORD*)(a1 + 4944) = *a2;
	*(_OWORD*)(a1 + 4960) = a2[1];
	*(_OWORD*)(a1 + 4976) = a2[2];
	*(_OWORD*)(a1 + 4992) = a2[3];
	*(_DWORD*)(a1 + 5084) = a4;
	return result;
}

