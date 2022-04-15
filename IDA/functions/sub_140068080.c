//----- (0000000140068080) ----------------------------------------------------
void __fastcall sub_140068080(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	char v3; // al
	__int64 v4; // [rsp+20h] [rbp-18h] BYREF
	int v5; // [rsp+28h] [rbp-10h]
	char v6; // [rsp+2Ch] [rbp-Ch]
	char v7; // [rsp+2Dh] [rbp-Bh]
	char v8; // [rsp+2Eh] [rbp-Ah]

	v2 = *(_QWORD*)(a1 + 48);
	v5 = -1;
	v8 = 0;
	v3 = *(_BYTE*)(v2 + 74);
	v7 = 0;
	v6 = v3;
	v4 = *(_QWORD*)(v2 + 40);
	*(_QWORD*)(v2 + 40) = &v4;
	sub_140069EC0(a1, a2);
	sub_140065E10(v2);
}
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

