//----- (000000014011C830) ----------------------------------------------------
__int64 __fastcall sub_14011C830(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 result; // rax
	__int64 v8; // rcx
	char v9; // al
	_DWORD* v10; // rcx
	bool v11; // zf

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (!v3)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C63650 + 760);
	v6 = 0i64;
	while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
	{
		v6 = ++v4;
		if (v4 >= v3)
			return 0i64;
	}
	v8 = *(_QWORD*)(v5 + 8i64 * v4);
	if (!v8)
		return 0i64;
	v9 = sub_1400ED670(v8);
	v10 = *(_DWORD**)(a1 + 16);
	v10[2] = 1;
	v11 = v9 == 0;
	result = 1i64;
	LOBYTE(v1) = !v11;
	*v10 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

