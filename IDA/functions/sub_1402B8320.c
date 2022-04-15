//----- (00000001402B8320) ----------------------------------------------------
__int64 __fastcall sub_1402B8320(__int64 a1)
{
	unsigned int v2; // [rsp+30h] [rbp+8h]

	v2 = *(_DWORD*)(a1 + 12);
	return *(unsigned int*)(a1 + 16)
		+ 2860486313u * (v2 + 2860486313i64 * *(unsigned int*)(a1 + 8))
		+ 0x3F7B69F4E4E9F0B9i64 * sub_1400564A0(*(unsigned __int16**)a1);
}

