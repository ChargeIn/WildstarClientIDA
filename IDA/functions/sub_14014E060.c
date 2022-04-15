//----- (000000014014E060) ----------------------------------------------------
__int64 __fastcall sub_14014E060(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	_DWORD* v4; // rdx
	__int64 result; // rax

	*a3 += 8i64;
	v4 = *(_DWORD**)(*a3 - 8i64);
	if (v4)
		return sub_14014D640(a2, v4);
	result = a2[2];
	*(_DWORD*)(result + 8) = 0;
	a2[2] += 16i64;
	return result;
}

