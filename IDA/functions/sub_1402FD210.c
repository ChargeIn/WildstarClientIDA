//----- (00000001402FD210) ----------------------------------------------------
_OWORD* __fastcall sub_1402FD210(__int64* a1, _OWORD* a2, int a3)
{
	unsigned int v5; // eax
	__int64 v6; // rsi
	__int128 v7; // xmm0
	_OWORD* result; // rax

	v5 = sub_1402FD120(a1, a3);
	v6 = v5;
	if (v5 == -1)
	{
		v7 = 0i64;
	}
	else
	{
		sub_140300DD0((__int64)a1, 0x80u);
		v7 = *(_OWORD*)((v6 << 7) + a1[208] + 32);
	}
	result = a2;
	*a2 = v7;
	return result;
}

