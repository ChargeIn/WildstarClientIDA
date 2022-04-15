//----- (00000001404BFD70) ----------------------------------------------------
__int64 __fastcall sub_1404BFD70(__int64 a1)
{
	unsigned __int64 i; // rbx
	__int64 result; // rax
	__int64 v4; // rcx

	for (i = 0i64; i < *(_QWORD*)(a1 + 312); ++i)
	{
		result = *(_QWORD*)(a1 + 304);
		v4 = *(_QWORD*)(result + 8 * i);
		if (v4)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 104i64))(v4);
	}
	return result;
}

