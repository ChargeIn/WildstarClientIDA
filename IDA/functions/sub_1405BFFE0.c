//----- (00000001405BFFE0) ----------------------------------------------------
__int64 __fastcall sub_1405BFFE0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rax
	__int64 result; // rax

	v3 = sub_1405BFE80(a1, a2, a3);
	if (v3)
		return *(unsigned int*)(v3 + 4);
	if (dword_140C7E0AC)
		return (unsigned int)dword_140C7E0A8;
	dword_140C7E0AC = 1;
	result = sub_140200220(0x330u);
	if (result)
	{
		result = *(unsigned int*)(result + 4);
		dword_140C7E0A8 = result;
	}
	else
	{
		dword_140C7E0A8 = 0;
	}
	return result;
}
// 140C7E0A8: using guessed type int dword_140C7E0A8;
// 140C7E0AC: using guessed type int dword_140C7E0AC;

