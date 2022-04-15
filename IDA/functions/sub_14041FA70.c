//----- (000000014041FA70) ----------------------------------------------------
__int64 sub_14041FA70()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A84C)
		return (unsigned int)dword_140C8A848;
	dword_140C8A84C = 1;
	v0 = sub_140200220(0xFDu);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A848 = result;
	}
	else
	{
		dword_140C8A848 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A848: using guessed type int dword_140C8A848;
// 140C8A84C: using guessed type int dword_140C8A84C;

