//----- (0000000140419CB0) ----------------------------------------------------
__int64 __fastcall sub_140419CB0(__int64 a1)
{
	__int64** v2; // rax
	int v3; // edx
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = (__int64**)sub_140417660(a1, 1);
	v3 = 0;
	if (v2 && (!*v2 ? (v4 = 0i64) : (v4 = **v2), v4))
	{
		if ((*(_DWORD*)(*(_QWORD*)(v4 + 64) + 332i64) & 0x40000) != 0 || (v5 = 0, (*(_BYTE*)(v4 + 128) & 0x40) != 0))
			v5 = 1;
		v6 = *(_DWORD**)(a1 + 16);
		v7 = v5 == 0;
		result = 1i64;
		LOBYTE(v3) = !v7;
		v6[2] = 1;
		*v6 = v3;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v9 = *(_DWORD**)(a1 + 16);
		*v9 = 0;
		v9[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}

