//----- (0000000140151F60) ----------------------------------------------------
__int64 __fastcall sub_140151F60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	return result;
}

