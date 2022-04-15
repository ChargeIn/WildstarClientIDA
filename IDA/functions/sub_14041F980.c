//----- (000000014041F980) ----------------------------------------------------
__int64 sub_14041F980()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A8E4)
		return (unsigned int)dword_140C8A8E0;
	dword_140C8A8E4 = 1;
	v0 = sub_140200220(0x954u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A8E0 = result;
	}
	else
	{
		dword_140C8A8E0 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A8E0: using guessed type int dword_140C8A8E0;
// 140C8A8E4: using guessed type int dword_140C8A8E4;

