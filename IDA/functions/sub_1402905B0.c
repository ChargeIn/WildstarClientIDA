//----- (00000001402905B0) ----------------------------------------------------
__int64 __fastcall sub_1402905B0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 112);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
		if (!(_DWORD)result)
			return result;
		sub_14028FF30(a1);
		v4 = *(_QWORD*)(a1 + 112);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 112) = 0i64;
		}
	}
	return 1i64;
}

