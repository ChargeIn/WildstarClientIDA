//----- (00000001407424D0) ----------------------------------------------------
__int64 __fastcall sub_1407424D0(__int64 a1)
{
	__int64 v2; // rdx
	int v3; // eax
	bool v4; // zf
	int v5; // edx
	_DWORD* v6; // rcx

	v2 = *(_QWORD*)(qword_140C65898 + 27728);
	v3 = 0;
	if (!v2 || (v4 = (*(_BYTE*)(v2 + 8) & 1) == 0, v5 = 1, !v4))
		v5 = 0;
	v6 = *(_DWORD**)(a1 + 16);
	LOBYTE(v3) = v5 != 0;
	v6[2] = 1;
	*v6 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

