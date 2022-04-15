//----- (00000001402FD1B0) ----------------------------------------------------
float __fastcall sub_1402FD1B0(__int64* a1, int a2)
{
	unsigned int v3; // eax
	__int64 v4; // rdi

	v3 = sub_1402FD120(a1, a2);
	v4 = v3;
	if (v3 == -1)
		return 0.0;
	sub_140300DD0((__int64)a1, 0x80u);
	return *(float*)((v4 << 7) + a1[208]);
}

