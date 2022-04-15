//----- (00000001406FBF90) ----------------------------------------------------
__int64 __fastcall sub_1406FBF90(_QWORD* a1)
{
	__int64 v2; // rax

	if ((dword_140DC4C18 & 1) == 0)
	{
		dword_140DC4C18 |= 1u;
		v2 = sub_140200220(0x457u);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
		dword_140DC4C1C = v2;
	}
	sub_1403D3470(a1, &dword_140DC4C1C);
	return 1i64;
}
// 140DC4C18: using guessed type int dword_140DC4C18;
// 140DC4C1C: using guessed type int dword_140DC4C1C;

