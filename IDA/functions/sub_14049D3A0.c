//----- (000000014049D3A0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049D3A0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	unsigned int v6; // r8d
	__int64 v7; // r9
	int v8; // eax

	v6 = 0;
	if (a4 > 0x12)
	{
		LODWORD(v7) = 0;
	}
	else
	{
		a1 = *(_QWORD*)(qword_140C635F0 + 5584);
		v7 = *(_QWORD*)(a1 + 8i64 * (int)a4 + 208);
	}
	v8 = -1;
	if ((_DWORD)v7 != -1)
		v8 = v7;
	if (v8)
		v6 = v8;
	return sub_1404A2090(a1, a3, v6, a5);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

