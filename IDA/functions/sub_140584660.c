//----- (0000000140584660) ----------------------------------------------------
__int64 sub_140584660()
{
	__int64 v0; // rax

	v0 = 0i64;
	if (!qword_140C7DE20)
		return 0i64;
	while (*(_DWORD*)(*(_QWORD*)(qword_140C7DE18 + 8 * v0) + 16i64) != 1)
	{
		if (++v0 >= (unsigned __int64)qword_140C7DE20)
			return 0i64;
	}
	return *(_QWORD*)(qword_140C7DE18 + 8 * v0);
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

