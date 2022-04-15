//----- (000000014041F840) ----------------------------------------------------
__int64 sub_14041F840()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A9DC)
		return (unsigned int)dword_140C8A9D8;
	dword_140C8A9DC = 1;
	v0 = sub_140200220(0x506u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A9D8 = result;
	}
	else
	{
		dword_140C8A9D8 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A9D8: using guessed type int dword_140C8A9D8;
// 140C8A9DC: using guessed type int dword_140C8A9DC;

