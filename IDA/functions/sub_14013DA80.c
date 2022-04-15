//----- (000000014013DA80) ----------------------------------------------------
__int64 __fastcall sub_14013DA80(__int64 a1, __int64(__fastcall*** a2)(_QWORD))
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_QWORD*)(a1 + 32) = a2;
	if (a2)
		return (**a2)(a2);
	return result;
}

