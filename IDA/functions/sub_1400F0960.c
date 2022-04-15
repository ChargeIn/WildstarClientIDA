//----- (00000001400F0960) ----------------------------------------------------
char __fastcall sub_1400F0960(_QWORD* a1, unsigned int a2, float* a3)
{
	_DWORD* v6; // rax
	char result; // al
	__int128 v8; // xmm0

	v6 = sub_1400580E0((__int64)a1, a2);
	if (v6 == dword_140A12138 || v6[2] != 5)
	{
		v8 = *(_OWORD*)sub_140056AB0(a1, a2);
		result = 1;
		*(_OWORD*)a3 = v8;
	}
	else
	{
		sub_1400F0A10((__int64)a1, a2, (__int64)"x", a3);
		sub_1400F0A10((__int64)a1, a2, (__int64)"y", a3 + 1);
		sub_1400F0A10((__int64)a1, a2, (__int64)&unk_1409D3FA4, a3 + 2);
		return 1;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

