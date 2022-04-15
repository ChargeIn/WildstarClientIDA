//----- (00000001405A3BE0) ----------------------------------------------------
float sub_1405A3BE0()
{
	__int64 v0; // rax
	float result; // xmm0_4

	if (dword_140C7DF84)
		return *(float*)&dword_140C7DF80;
	dword_140C7DF84 = 1;
	v0 = sub_140200220(0x4E9u);
	if (v0)
	{
		result = *(float*)(v0 + 24);
		dword_140C7DF80 = LODWORD(result);
	}
	else
	{
		result = 0.0;
		dword_140C7DF80 = 0;
	}
	return result;
}
// 140C7DF80: using guessed type int dword_140C7DF80;
// 140C7DF84: using guessed type int dword_140C7DF84;

