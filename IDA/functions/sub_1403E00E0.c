//----- (00000001403E00E0) ----------------------------------------------------
__int64 __fastcall sub_1403E00E0(int a1)
{
	unsigned __int64 v1; // rdi
	__int64 v2; // rax
	int v3; // ebx
	int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rax

	v1 = a1;
	if ((dword_140DC2370 & 1) == 0)
	{
		dword_140DC2370 |= 1u;
		v2 = sub_140200220(0x32Fu);
		v3 = 1;
		if (v2)
			v4 = *(_DWORD*)(v2 + 4);
		else
			v4 = 1;
		dword_140C8A7A0[0] = v4;
		v5 = sub_140200220(0x32Fu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 1;
		dword_140C8A7A4 = v6;
		v7 = sub_140200220(0x32Fu);
		if (v7)
			v8 = *(_DWORD*)(v7 + 4);
		else
			v8 = 1;
		dword_140C8A7A8 = v8;
		v9 = sub_140200220(0x32Fu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 4);
		else
			v10 = 1;
		dword_140C8A7AC = v10;
		v11 = sub_140200220(0x32Fu);
		if (v11)
			v3 = *(_DWORD*)(v11 + 8);
		dword_140C8A7B0 = v3;
	}
	if (v1 < 5)
		return (unsigned int)dword_140C8A7A0[v1];
	else
		return 0i64;
}
// 140C8A7A0: using guessed type int dword_140C8A7A0[];
// 140C8A7A4: using guessed type int dword_140C8A7A4;
// 140C8A7A8: using guessed type int dword_140C8A7A8;
// 140C8A7AC: using guessed type int dword_140C8A7AC;
// 140C8A7B0: using guessed type int dword_140C8A7B0;
// 140DC2370: using guessed type int dword_140DC2370;

