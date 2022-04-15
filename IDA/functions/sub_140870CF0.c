//----- (0000000140870CF0) ----------------------------------------------------
__int64 __fastcall sub_140870CF0(__int64 a1, int a2, __int64 a3)
{
	__int64 result; // rax
	int v5; // r10d
	unsigned int i; // edx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx

	result = *(_WORD*)(a1 + 54) & 7;
	v5 = a2 * (*(_WORD*)(a1 + 54) & 7);
	for (i = 0; i < (unsigned int)result; result = *(_WORD*)(a1 + 54) & 7)
	{
		v7 = i + v5;
		v8 = i++;
		v8 <<= 6;
		v9 = (v7 + 1) << 6;
		*(_OWORD*)(v8 + a3) = *(_OWORD*)(v9 + a1);
		*(_OWORD*)(v8 + a3 + 16) = *(_OWORD*)(v9 + a1 + 16);
		*(_OWORD*)(v8 + a3 + 32) = *(_OWORD*)(v9 + a1 + 32);
		*(_OWORD*)(v8 + a3 + 48) = *(_OWORD*)(v9 + a1 + 48);
	}
	return result;
}

