//----- (00000001407695B0) ----------------------------------------------------
__int64 __fastcall sub_1407695B0(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	BOOL v3; // eax
	__int64 v4; // rbx
	BOOL v6; // [rsp+38h] [rbp+10h] BYREF

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	v3 = v2 && (v2 != 1 || *v1);
	v4 = qword_140C65B98;
	if (*(_DWORD*)(qword_140C65B98 + 328))
	{
		v6 = v3;
		sub_1403F4900(qword_140C65898, 0x624u, (__int64)&v6);
		*(_DWORD*)(v4 + 328) = 0;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

