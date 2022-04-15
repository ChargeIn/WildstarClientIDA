//----- (0000000140451450) ----------------------------------------------------
__int64 __fastcall sub_140451450(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rbp
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			v5 = *(_QWORD*)(*a1 + v3 + 24);
			if (v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			v7 = *(_QWORD*)(v4 + v3 + 8);
			if (v7)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			++v1;
			v3 += 40i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

