//----- (000000014041CAD0) ----------------------------------------------------
__int64 __fastcall sub_14041CAD0(__int64 a1)
{
	__int64** v2; // rax
	int v3; // edi
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rcx

	v2 = (__int64**)sub_140417660(a1, 1);
	v3 = 0;
	if (v2 && (!*v2 ? (v4 = 0i64) : (v4 = **v2), v4))
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 96i64))(v4);
		v6 = *(_DWORD**)(a1 + 16);
		v6[2] = 1;
		LOBYTE(v3) = v5 != 0;
		*v6 = v3;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

