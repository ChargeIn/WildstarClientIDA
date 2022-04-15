//----- (00000001403A1230) ----------------------------------------------------
_BOOL8 sub_1403A1230()
{
	__int64 v0; // rcx
	unsigned int v2; // ecx
	__int64 v3; // rax
	__int64 v4; // rax

	v0 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v0 && *(_DWORD*)(v0 + 684))
		return 0i64;
	v2 = *(_DWORD*)(qword_140C65B98 + 264);
	return !v2
		|| (v3 = sub_140215240(v2)) == 0
		|| (v4 = sub_140214E00(*(_DWORD*)(v3 + 16))) == 0
		|| (*(_DWORD*)(v4 + 16) & 0x10) == 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

