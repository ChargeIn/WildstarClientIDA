//----- (00000001405A3C40) ----------------------------------------------------
float sub_1405A3C40()
{
	__int64 v0; // rax
	float result; // xmm0_4

	if (dword_140C7DF8C)
		return *(float*)&dword_140C7DF88;
	dword_140C7DF8C = 1;
	v0 = sub_140200220(0x4E9u);
	if (v0)
	{
		result = *(float*)(v0 + 28);
		dword_140C7DF88 = LODWORD(result);
	}
	else
	{
		result = 0.0;
		dword_140C7DF88 = 0;
	}
	return result;
}
// 140C7DF88: using guessed type int dword_140C7DF88;
// 140C7DF8C: using guessed type int dword_140C7DF8C;

