//----- (000000014084B3D0) ----------------------------------------------------
__int64 __fastcall sub_14084B3D0(char a1, char a2, char a3)
{
	int v3; // r9d
	int v4; // ecx
	int v5; // eax
	__int64 result; // rax

	v3 = 1 << a1;
	v4 = ~(1 << a1);
	v5 = v4 & dword_140C10F80;
	dword_140C10F80 &= v4;
	if (a2)
		dword_140C10F80 = v3 | v5;
	result = v4 & (unsigned int)dword_140C61FF0;
	dword_140C61FF0 &= v4;
	if (a3)
	{
		result = v3 | (unsigned int)result;
		dword_140C61FF0 = result;
	}
	return result;
}
// 140C10F80: using guessed type int dword_140C10F80;
// 140C61FF0: using guessed type int dword_140C61FF0;

