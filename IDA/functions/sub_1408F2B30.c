//----- (00000001408F2B30) ----------------------------------------------------
__int64 __fastcall sub_1408F2B30(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 24))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (*(_QWORD*)(a1 + 32))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	return result;
}

