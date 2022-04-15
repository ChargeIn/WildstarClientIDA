//----- (00000001407A4570) ----------------------------------------------------
_BOOL8 __fastcall sub_1407A4570(__int64 a1, __int64 a2)
{
	int v4; // ebx
	int v5; // ebx
	_BOOL8 result; // rax

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	result = 0;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) == v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1) == v5)
			return 1;
	}
	return result;
}

