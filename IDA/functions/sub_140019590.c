//----- (0000000140019590) ----------------------------------------------------
__int64 __fastcall sub_140019590(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 16))
	{
		sub_140019A80(a1, *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		result = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(result + 24) = result;
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return result;
}

