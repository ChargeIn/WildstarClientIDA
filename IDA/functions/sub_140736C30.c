//----- (0000000140736C30) ----------------------------------------------------
__int64 __fastcall sub_140736C30(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	BOOL v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // edx

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	v3 = v2 && (v2 != 1 || *v1);
	v4 = sub_1405B1510(&qword_140C7DFB0);
	if (v4 && *(_DWORD*)(v4 + 192) != 4)
	{
		v6 = *(_DWORD*)(qword_140C659F8 + 208);
		if (v3)
		{
			sub_1404C98F0(v5, v6 | 0x70);
			return 0i64;
		}
		sub_1404C98F0(v5, v6 & 0xFFFFFF8F);
	}
	return 0i64;
}
// 140736C91: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

