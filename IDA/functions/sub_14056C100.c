//----- (000000014056C100) ----------------------------------------------------
_BOOL8 __fastcall sub_14056C100(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // r8d
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v6; // [rsp+10h] [rbp+10h]

	if (!qword_140C65970)
		return 0i64;
	v1 = *(_QWORD*)(qword_140C65970 + 104);
	v2 = *(_DWORD*)(**(_QWORD**)(a1 + 48) + 20i64);
	v3 = *(_QWORD*)(v1 + 8);
	v4 = v1;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < v2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v1 || (v6 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(qword_140C65970 + 104);
	return v6 != v1;
}
// 140C65970: using guessed type __int64 qword_140C65970;

