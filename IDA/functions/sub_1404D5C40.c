//----- (00000001404D5C40) ----------------------------------------------------
__int64 __fastcall sub_1404D5C40(__int64 a1)
{
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 76))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 200) + 1536i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 200) + 1536i64));
		if (!(_DWORD)result)
			return result;
		*(_DWORD*)(a1 + 76) = 1;
	}
	return 1i64;
}

