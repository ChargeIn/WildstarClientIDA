//----- (0000000140911290) ----------------------------------------------------
_WORD* __fastcall sub_140911290(__int64 a1, _WORD* a2, int a3, __int64 a4, int a5)
{
	unsigned int v5; // r11d
	_WORD* v6; // r10
	unsigned __int64 v8; // rax

	v5 = (unsigned __int16)*a2;
	if (v5 > 0xFF)
	{
		v5 = 255;
		a3 = 0;
	}
	*(_BYTE*)(((unsigned __int64)v5 >> 3) + a1) |= 1 << (v5 & 7);
	if (a5 && v5 > 0x7F)
	{
		v6 = a2 + 1;
		if ((*a2 & 0xFC00) == 55296)
			return a2 + 2;
		return v6;
	}
	else
	{
		if (a3 && (*(_BYTE*)(v5 + *(_QWORD*)(a4 + 24)) & 2) != 0)
		{
			v8 = *(unsigned __int8*)(v5 + *(_QWORD*)(a4 + 8));
			*(_BYTE*)((v8 >> 3) + a1) |= 1 << (v8 & 7);
		}
		return a2 + 1;
	}
}

