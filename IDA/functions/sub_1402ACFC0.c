//----- (00000001402ACFC0) ----------------------------------------------------
__int64 __fastcall sub_1402ACFC0(_QWORD* a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax
	_QWORD* v4; // rbx
	int v5; // edi
	__int64 v6; // rcx

	*(_DWORD*)(*a1 + 7176i64) |= 0x18u;
	v1 = (_QWORD*)a1[21];
	if (v1)
		*v1 = a1[22];
	v2 = a1[22];
	if (v2)
		*(_QWORD*)(v2 + 168) = a1[21];
	result = 0i64;
	v4 = a1 + 17;
	v5 = 3;
	a1[21] = 0i64;
	a1[22] = 0i64;
	do
	{
		v6 = *--v4;
		if (v6)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		--v5;
	} while (v5 >= 0);
	return result;
}

