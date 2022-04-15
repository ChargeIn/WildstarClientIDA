//----- (00000001405A3CF0) ----------------------------------------------------
float sub_1405A3CF0()
{
	__int64 v0; // rax
	float result; // xmm0_4

	if (dword_140DC346C)
		return *(float*)&dword_140DC3468;
	dword_140DC346C = 1;
	v0 = sub_140200220(0x3C2u);
	if (v0)
	{
		result = *(float*)(v0 + 24);
		dword_140DC3468 = LODWORD(result);
	}
	else
	{
		result = 0.0;
		dword_140DC3468 = 0;
	}
	return result;
}
// 140DC3468: using guessed type int dword_140DC3468;
// 140DC346C: using guessed type int dword_140DC346C;

