//----- (000000014083B060) ----------------------------------------------------
__int64 __fastcall sub_14083B060(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // r10
	_QWORD* v5; // rdx
	_QWORD* v6; // rcx
	__int64 result; // rax
	bool v8; // zf

	v3 = *(_QWORD**)(a2 + 40);
	v5 = *(_QWORD**)(a2 + 48);
	v6 = v3;
	if (v3 == v5)
		return 29i64;
	while (*v6 != a3)
	{
		if (++v6 == v5)
			return 29i64;
	}
	if ((unsigned int)(v5 - v3) > 1)
		*v6 = *(v5 - 1);
	*(_QWORD*)(a2 + 48) -= 8i64;
	v8 = (*(_BYTE*)(a2 + 73))-- == 1;
	result = 1i64;
	if (v8)
		*(_DWORD*)(a2 + 68) = 6;
	return result;
}

