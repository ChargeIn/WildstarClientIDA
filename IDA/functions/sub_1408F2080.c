//----- (00000001408F2080) ----------------------------------------------------
__int64 __fastcall sub_1408F2080(__int64 a1, __int64* a2)
{
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // rax
	unsigned int i; // edx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax

	if (*(_QWORD*)(a1 + 56))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	v4 = *a2 + 4;
	*a2 = v4;
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(v4 - 4);
	v5 = *(unsigned __int16*)*a2;
	*a2 += 2i64;
	*(_DWORD*)(a1 + 64) = v5;
	if (v5)
	{
		v6 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 8i64))(*(_QWORD*)(a1 + 8), 16i64 * v5);
		*(_QWORD*)(a1 + 56) = v6;
		if (!v6)
			return 52i64;
		for (i = 0; i < *(_DWORD*)(a1 + 64); *(_DWORD*)(*(_QWORD*)(a1 + 56) + 8 * v9 + 12) = 0)
		{
			v9 = i++;
			v10 = *a2 + 4;
			v9 *= 2i64;
			*a2 = v10;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 8 * v9) = *(_DWORD*)(v10 - 4);
			v11 = *a2 + 4;
			*a2 = v11;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 8 * v9 + 4) = *(_DWORD*)(v11 - 4);
			v12 = *a2 + 4;
			*a2 = v12;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 8 * v9 + 8) = *(_DWORD*)(v12 - 4);
		}
	}
	return 1i64;
}

