//----- (000000014027F420) ----------------------------------------------------
__int64 __fastcall sub_14027F420(__int64 a1, int a2)
{
	__int64 result; // rax

	result = dword_140AE8010[a2];
	*(_DWORD*)(a1 + 7176) |= 1u;
	*(_DWORD*)(a1 + 7184) = result;
	return result;
}
// 140AE8010: using guessed type unsigned int dword_140AE8010[4];

