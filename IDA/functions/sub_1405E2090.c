//----- (00000001405E2090) ----------------------------------------------------
__int64 __fastcall sub_1405E2090(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 504))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * (v4 % *(_QWORD*)(a1 + 488)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 512))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	if (v5 == (_QWORD*)-32i64)
		return 0i64;
	else
		return v5[4];
}

