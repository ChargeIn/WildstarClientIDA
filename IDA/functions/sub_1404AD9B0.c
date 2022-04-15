//----- (00000001404AD9B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404AD9B0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // [rsp+40h] [rbp+18h]

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 272);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v9 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v9 = v4;
	if (v9 != v4)
		return 1i64;
	v7 = sub_1402413C0(a2);
	if (v7)
	{
		if (*(_DWORD*)(v7 + 8) <= 1u && (*(_DWORD*)(v7 + 12) & 1) != 0)
			return 1i64;
	}
	v8 = *(_QWORD*)(qword_140C65898 + 120);
	if (v8)
		return sub_1404AF6B0(v8, a2, *(_DWORD*)(v8 + 56), 1);
	else
		return sub_1404AF6B0(0i64, a2, 0, 1);
}
// 140C65898: using guessed type __int64 qword_140C65898;

