//----- (0000000140451620) ----------------------------------------------------
__int64 __fastcall sub_140451620(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 result; // rax
	__int64 v5; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			result = *a1;
			v5 = *(_QWORD*)(v3 + *a1 + 16);
			if (v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			++v1;
			v3 += 32i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

