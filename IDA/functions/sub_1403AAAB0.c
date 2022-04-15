//----- (00000001403AAAB0) ----------------------------------------------------
__int16* __fastcall sub_1403AAAB0(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	int v7; // ecx
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v12; // eax

	v1 = dword_140DC2258;
	if ((dword_140DC2258 & 1) == 0)
	{
		dword_140DC2258 |= 1u;
		v3 = sub_140200220(0x4B6u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 180;
		dword_140DC225C = 60 * v4;
		v1 = dword_140DC2258;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2258 = v1 | 2;
		v5 = sub_140200220(0x4B8u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 60;
		dword_140DC2260 = 60 * v6;
	}
	v7 = *(_DWORD*)(a1 + 32644);
	v8 = 0;
	if (v7)
	{
		v9 = (unsigned int)(v7 - 1);
		if (!(_DWORD)v9)
			return sub_14034BDD0(v9, 680084);
		v10 = (unsigned int)(v9 - 1);
		if (!(_DWORD)v10)
			return sub_14034BDD0(v10, 680085);
		return sub_14034BDD0(v10, v8);
	}
	v12 = (unsigned int)sub_1403B4F80(a1) / dword_140DC2260;
	if (v12 == 1)
		return sub_14034BDD0(v10, 680082);
	if (v12 == 2)
	{
		v8 = 680083;
		return sub_14034BDD0(v10, v8);
	}
	return (__int16*)&unk_1409E799C;
}
// 1403AAB74: variable 'v10' is possibly undefined
// 140DC2258: using guessed type int dword_140DC2258;
// 140DC225C: using guessed type int dword_140DC225C;
// 140DC2260: using guessed type int dword_140DC2260;

