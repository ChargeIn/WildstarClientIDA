//----- (000000014075C270) ----------------------------------------------------
__int64 __fastcall sub_14075C270(__int64 a1)
{
	_DWORD* v1; // rdx
	bool v2; // zf

	v1 = *(_DWORD**)(a1 + 16);
	v2 = dword_140C7DE28 == 0;
	v1[2] = 1;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C7DE28: using guessed type int dword_140C7DE28;

