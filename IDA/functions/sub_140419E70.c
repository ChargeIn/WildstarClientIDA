//----- (0000000140419E70) ----------------------------------------------------
__int64 __fastcall sub_140419E70(__int64 a1)
{
	__int64** v2; // rax
	int v3; // r8d
	__int64 v4; // rcx
	_DWORD* v5; // rdx
	__int64 result; // rax
	bool v7; // zf
	_DWORD* v8; // rax

	v2 = (__int64**)sub_140417660(a1, 1);
	v3 = 0;
	if (v2 && (!*v2 ? (v4 = 0i64) : (v4 = **v2), v4))
	{
		v5 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		v7 = *(_DWORD*)(*(_QWORD*)(v4 + 64) + 456i64) == 0;
		v5[2] = 1;
		LOBYTE(v3) = !v7;
		*v5 = v3;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v8 = *(_DWORD**)(a1 + 16);
		*v8 = 0;
		v8[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}

