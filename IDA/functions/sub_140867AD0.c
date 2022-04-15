//----- (0000000140867AD0) ----------------------------------------------------
__int64 __fastcall sub_140867AD0(__int64 a1, int a2)
{
	int v2; // edx
	__int64 result; // rax

	v2 = a2 - *(_DWORD*)(a1 + 96);
	*(_DWORD*)a1 = 1;
	*(_DWORD*)(a1 + 76) += v2;
	result = *(unsigned int*)(a1 + 76);
	*(_DWORD*)(a1 + 80) += v2;
	*(float*)(a1 + 92) = -(float)((float)(int)result * *(float*)(a1 + 88));
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

