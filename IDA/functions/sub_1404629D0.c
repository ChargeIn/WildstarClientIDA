//----- (00000001404629D0) ----------------------------------------------------
float __fastcall sub_1404629D0(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rax
	int v4; // xmm0_4
	__int64 v5; // rax
	float v6; // xmm1_4
	int v7; // eax

	v1 = dword_140DC2B78;
	if ((dword_140DC2B78 & 1) == 0)
	{
		dword_140DC2B78 |= 1u;
		v3 = sub_140200220(0x2C8u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 24);
		else
			v4 = 1116471296;
		v1 = dword_140DC2B78;
		dword_140DC2B7C = v4;
	}
	if ((v1 & 2) != 0)
	{
		v6 = *(float*)&dword_140DC2B80;
	}
	else
	{
		dword_140DC2B78 = v1 | 2;
		v5 = sub_140200220(0x2C8u);
		if (v5)
		{
			v6 = *(float*)(v5 + 28);
			dword_140DC2B80 = LODWORD(v6);
		}
		else
		{
			v6 = 100.0;
			dword_140DC2B80 = 1120403456;
		}
	}
	v7 = *(_DWORD*)(a1 + 60);
	if (!v7)
		v7 = *(_DWORD*)(a1 + 56);
	return (float)((float)v7 * *(float*)&dword_140DC2B7C) + v6;
}
// 140DC2B78: using guessed type int dword_140DC2B78;
// 140DC2B7C: using guessed type int dword_140DC2B7C;
// 140DC2B80: using guessed type int dword_140DC2B80;

