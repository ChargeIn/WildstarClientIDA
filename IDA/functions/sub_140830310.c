//----- (0000000140830310) ----------------------------------------------------
__int64 __fastcall sub_140830310(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	__int64 result; // rax
	__int64* v4; // rax

	v2 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0xC1) + 56);
	if (!v2)
		return 0i64;
	while (v2[1] != a2)
	{
		v2 = (_QWORD*)*v2;
		if (!v2)
			return 0i64;
	}
	v4 = v2 + 2;
	if (!v4)
		return 0i64;
	result = *v4;
	*(_DWORD*)(result + 136) ^= (*(_DWORD*)(result + 136) ^ (*(_DWORD*)(result + 136) + 1)) & 0x3FFFFFFF;
	return result;
}

