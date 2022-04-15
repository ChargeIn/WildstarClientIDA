//----- (00000001402A3430) ----------------------------------------------------
__int64 __fastcall sub_1402A3430(__int64* a1)
{
	unsigned __int64 i; // rbx
	__int64 result; // rax
	__int64 v4; // rcx

	for (i = 0i64; i < a1[1]; ++i)
	{
		result = *a1;
		v4 = *(_QWORD*)(*a1 + 8 * i);
		if (v4)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

