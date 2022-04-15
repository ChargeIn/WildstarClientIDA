//----- (00000001405846C0) ----------------------------------------------------
__int64 __fastcall sub_1405846C0(__int64 a1, int a2)
{
	__int64 v2; // rax

	v2 = 0i64;
	if (!qword_140C7DE20)
		return 0i64;
	while (*(_DWORD*)(*(_QWORD*)(qword_140C7DE18 + 8 * v2) + 16i64) != a2)
	{
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			return 0i64;
	}
	return *(_QWORD*)(qword_140C7DE18 + 8 * v2);
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

