//----- (000000014054CEB0) ----------------------------------------------------
float __fastcall sub_14054CEB0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // xmm0_4
	__int64 v4; // rax
	int v5; // xmm0_4
	__int64 v6; // rax
	int v7; // xmm0_4
	unsigned int v8; // ecx

	if ((dword_140DC33B0 & 1) == 0)
	{
		dword_140DC33B0 |= 1u;
		v2 = sub_140200220(0x381u);
		if (v2)
			v3 = *(_DWORD*)(v2 + 24);
		else
			v3 = 1061158912;
		dword_140C8AF00[0] = v3;
		v4 = sub_140200220(0x381u);
		if (v4)
			v5 = *(_DWORD*)(v4 + 28);
		else
			v5 = 1056964608;
		dword_140C8AF04 = v5;
		v6 = sub_140200220(0x381u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 32);
		else
			v7 = 1048576000;
		dword_140C8AF08 = v7;
	}
	v8 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 92i64);
	if (v8 >= 3)
		return 1.0;
	else
		return *(float*)&dword_140C8AF00[v8];
}
// 140C8AF00: using guessed type int dword_140C8AF00[];
// 140C8AF04: using guessed type int dword_140C8AF04;
// 140C8AF08: using guessed type int dword_140C8AF08;
// 140DC33B0: using guessed type int dword_140DC33B0;

