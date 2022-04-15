//----- (0000000140289330) ----------------------------------------------------
__int64 __fastcall sub_140289330(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rax

	if (!*(_DWORD*)(a1 + 56))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
		if (!(_DWORD)result)
			return result;
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 24i64))(*(_QWORD*)(a1 + 16));
		*(_DWORD*)(a1 + 24) = *(_DWORD*)(v3 + 32);
		*(_DWORD*)(a1 + 28) = *(_DWORD*)(v3 + 36);
		*(_DWORD*)(a1 + 32) = *(_DWORD*)(v3 + 40);
		v4 = *(_QWORD*)(v3 + 48);
		*(_DWORD*)(a1 + 56) = 1;
		*(_QWORD*)(a1 + 40) = v4;
	}
	return 1i64;
}

