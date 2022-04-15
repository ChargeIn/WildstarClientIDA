//----- (00000001404D4EC0) ----------------------------------------------------
__int64 __fastcall sub_1404D4EC0(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rsi
	__int64 v4; // rdi
	__int64 result; // rax
	__int64 v6; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			result = sub_1403FBAC0((__int64*)(v3 + *a1 + 56));
			v6 = *(_QWORD*)(v4 + v3 + 48);
			if (v6)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
			++v1;
			v3 += 72i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

