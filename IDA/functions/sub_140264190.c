//----- (0000000140264190) ----------------------------------------------------
__int64 __fastcall sub_140264190(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 i; // r9
	unsigned int v5; // edx
	__int64 result; // rax

	for (i = 0i64;
		i < a3;
		*(_DWORD*)(a1 + 4 * i - 4) = (v5 << 8) & 0xFFF80000 | (((unsigned int)result | (v5 >> 1) & 0xE) >> 1) | (8 * (v5 & 0xE01F | (4 * (v5 & 0x7E0)))) | 0xFF000000)
	{
		v5 = *(unsigned __int16*)(a2 + 2 * i++);
		result = v5 & 0x600;
	}
	return result;
}

