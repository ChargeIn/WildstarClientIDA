//----- (000000014041F9D0) ----------------------------------------------------
__int64 sub_14041F9D0()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A8B4)
		return (unsigned int)dword_140C8A8B0;
	dword_140C8A8B4 = 1;
	v0 = sub_140200220(0x956u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A8B0 = result;
	}
	else
	{
		dword_140C8A8B0 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A8B0: using guessed type int dword_140C8A8B0;
// 140C8A8B4: using guessed type int dword_140C8A8B4;

