//----- (00000001402E5B90) ----------------------------------------------------
__int64 __fastcall sub_1402E5B90(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rdx
	void(__fastcall * v5)(__int64, _QWORD); // rax

	if (!*(_DWORD*)(a1 + 144))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
		if (!(_DWORD)result)
			return result;
		sub_1402E4EC0(a1);
		v3 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 144) = 1;
		v4 = *(_QWORD*)(v3 + 16);
		v5 = *(void(__fastcall**)(__int64, _QWORD))(v4 + 1912);
		if (v5)
			v5(a1, *(_QWORD*)(v4 + 1928));
	}
	return 1i64;
}

