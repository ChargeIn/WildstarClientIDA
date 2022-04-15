//----- (0000000140591D80) ----------------------------------------------------
float __fastcall sub_140591D80(__int64 a1)
{
	int v2; // xmm6_4
	__int64 v3; // rax
	float v4; // xmm7_4
	__int64 v5; // rax

	v2 = 0;
	if (dword_140C7DF44)
	{
		v4 = *(float*)&dword_140C7DF40;
	}
	else
	{
		dword_140C7DF44 = 1;
		v3 = sub_140200220(0x4DEu);
		if (v3)
		{
			v4 = *(float*)(v3 + 24);
			dword_140C7DF40 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140C7DF40 = 0;
		}
	}
	if (dword_140C7DF5C)
	{
		v2 = dword_140C7DF58;
	}
	else
	{
		dword_140C7DF5C = 1;
		v5 = sub_140200220(0x4DEu);
		if (v5)
			v2 = *(_DWORD*)(v5 + 36);
		dword_140C7DF58 = v2;
	}
	return fmaxf(*(float*)&v2, v4 - *(float*)(a1 + 424));
}
// 140C7DF40: using guessed type int dword_140C7DF40;
// 140C7DF44: using guessed type int dword_140C7DF44;
// 140C7DF58: using guessed type int dword_140C7DF58;
// 140C7DF5C: using guessed type int dword_140C7DF5C;

