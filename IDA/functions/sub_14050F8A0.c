//----- (000000014050F8A0) ----------------------------------------------------
__int64 __fastcall sub_14050F8A0(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rax

	v1 = dword_140C7DC68;
	if (!dword_140C7DC68)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C7DC68: using guessed type int dword_140C7DC68;

