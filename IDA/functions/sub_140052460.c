//----- (0000000140052460) ----------------------------------------------------
unsigned __int64 __fastcall sub_140052460(__int64 a1)
{
	return *(unsigned __int8*)(a1 + 8) | (unsigned __int64)((*(_DWORD*)(a1 + 4) & 0xFFFu | (*(_DWORD*)a1 << 12)) << 8);
}

