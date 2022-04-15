//----- (00000001405A3CA0) ----------------------------------------------------
__int64 sub_1405A3CA0()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C7DF94)
		return (unsigned int)dword_140C7DF90;
	dword_140C7DF94 = 1;
	v0 = sub_140200220(0x1A1u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C7DF90 = result;
	}
	else
	{
		dword_140C7DF90 = 0;
		return 0i64;
	}
	return result;
}
// 140C7DF90: using guessed type int dword_140C7DF90;
// 140C7DF94: using guessed type int dword_140C7DF94;

