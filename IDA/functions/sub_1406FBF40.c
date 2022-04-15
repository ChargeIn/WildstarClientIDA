//----- (00000001406FBF40) ----------------------------------------------------
__int64 __fastcall sub_1406FBF40(_QWORD* a1)
{
	__int64 v2; // rax

	if ((dword_140DC4C10 & 1) == 0)
	{
		dword_140DC4C10 |= 1u;
		v2 = sub_140200220(0x458u);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
		dword_140DC4C14 = v2;
	}
	sub_1403D3470(a1, &dword_140DC4C14);
	return 1i64;
}
// 140DC4C10: using guessed type int dword_140DC4C10;
// 140DC4C14: using guessed type int dword_140DC4C14;

