//----- (00000001405A3B90) ----------------------------------------------------
__int64 sub_1405A3B90()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C7DF6C)
		return (unsigned int)dword_140C7DF68;
	dword_140C7DF6C = 1;
	v0 = sub_140200220(0x4DFu);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C7DF68 = result;
	}
	else
	{
		dword_140C7DF68 = 0;
		return 0i64;
	}
	return result;
}
// 140C7DF68: using guessed type int dword_140C7DF68;
// 140C7DF6C: using guessed type int dword_140C7DF6C;

