//----- (00000001404174F0) ----------------------------------------------------
__int64 __fastcall sub_1404174F0(__int64 a1)
{
	__int64* v2; // rax
	int v3; // r8d
	_DWORD* v4; // rdx
	__int64 result; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	_DWORD* v8; // rax

	v2 = (__int64*)sub_140417660(a1, 1);
	v3 = 0;
	if (v2)
	{
		v6 = *v2;
		if (!v6 || (v7 = v6 + 32, !*(_DWORD*)(v6 + 1176)))
			v7 = 0i64;
		v8 = *(_DWORD**)(a1 + 16);
		LOBYTE(v3) = v7 != 0;
		v8[2] = 1;
		*v8 = v3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v4 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}

