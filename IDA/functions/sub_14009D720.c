//----- (000000014009D720) ----------------------------------------------------
__int64 __fastcall sub_14009D720(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	unsigned int i; // eax
	__int64 result; // rax

	*a2 += 35i64;
	*a3 += 104i64 * *(unsigned int*)(a1 + 4);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		*a2 += 700i64;
	*a2 += *(unsigned int*)(a1 + 4);
	result = 4i64 * *(unsigned int*)(a1 + 4);
	*a3 += result;
	return result;
}

