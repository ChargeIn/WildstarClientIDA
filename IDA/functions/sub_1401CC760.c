//----- (00000001401CC760) ----------------------------------------------------
__int64 __fastcall sub_1401CC760(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // rax
	__int64 result; // rax

	sub_1401CC110((_WORD*)a1, a1 + 188, *(_DWORD*)(a1 + 2888));
	sub_1401CC110((_WORD*)a1, a1 + 2480, *(_DWORD*)(a1 + 2912));
	sub_1401CBEC0((int*)a1, a1 + 2928);
	v2 = 18;
	v3 = 18i64;
	while (!*(_WORD*)(a1 + 4i64 * byte_140A480E8[v3] + 2726))
	{
		if (*(_WORD*)(a1 + 4i64 * byte_140A480E8[v3 - 1] + 2726))
		{
			--v2;
			break;
		}
		if (*(_WORD*)(a1 + 4i64 * byte_140A480E8[v3 - 2] + 2726))
		{
			v2 -= 2;
			break;
		}
		if (*(_WORD*)(a1 + 4i64 * byte_140A480E8[v3 - 3] + 2726))
		{
			v2 -= 3;
			break;
		}
		v3 -= 4i64;
		v2 -= 4;
		if (v3 < 3)
			break;
	}
	result = v2;
	*(_DWORD*)(a1 + 5888) += v2 + 2 * v2 + 17;
	return result;
}
// 140A480E8: using guessed type unsigned __int8 byte_140A480E8[24];

