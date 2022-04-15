//----- (00000001403946B0) ----------------------------------------------------
__int64 __fastcall sub_1403946B0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	bool v4; // al
	__int64 v5; // rcx
	char v6; // al

	if ((*(_BYTE*)(a1 + 24) & 1) == 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(
			*(_QWORD*)(a1 + 16),
			a2,
			0i64);
		if (!(_DWORD)result)
			return result;
		v4 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 448i64))(
			*(_QWORD*)(a1 + 16),
			169i64)
			&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 448i64))(
				*(_QWORD*)(a1 + 16),
				170i64);
		*(_DWORD*)(a1 + 24) &= ~2u;
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 24) |= 2 * v4;
		v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 448i64))(v5, 171i64);
		*(_DWORD*)(a1 + 24) &= ~4u;
		*(_DWORD*)(a1 + 24) |= (4 * (v6 & 1)) | 1;
	}
	return 1i64;
}

