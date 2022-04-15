//----- (000000014088E810) ----------------------------------------------------
__int64 __fastcall sub_14088E810(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	v3 = *(_QWORD*)(a1 + 16);
	result = *(_QWORD*)(v3 + 48);
	if (result)
	{
		*(_QWORD*)(a1 + 8) = result;
		*(_QWORD*)(v3 + 48) = a1;
	}
	else
	{
		*(_QWORD*)(v3 + 48) = a1;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	++* (_DWORD*)(v3 + 80);
	return result;
}

