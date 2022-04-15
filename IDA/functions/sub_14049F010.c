//----- (000000014049F010) ----------------------------------------------------
__int64 __fastcall sub_14049F010(__int64 a1, int a2, int a3)
{
	__int64 v5; // rax
	int v6; // eax
	unsigned int v7; // ecx
	int v8; // ebx

	if ((dword_140DC30B0 & 1) != 0)
	{
		v6 = dword_140DC30B4;
	}
	else
	{
		dword_140DC30B0 |= 1u;
		v5 = sub_140200220(0x3AEu);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 4);
			dword_140DC30B4 = v6;
		}
		else
		{
			v6 = 6;
			dword_140DC30B4 = 6;
		}
	}
	v7 = 0;
	v8 = a2 - 1;
	if (!v8)
		return a3 >= v6;
	if (v8 == 1)
		LOBYTE(v7) = a3 < v6;
	return v7;
}
// 140DC30B0: using guessed type int dword_140DC30B0;
// 140DC30B4: using guessed type int dword_140DC30B4;

