//----- (00000001406197B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406197B0(__int64 a1, __int64 a2)
{
	int v2; // eax

	v2 = *(_DWORD*)(a2 + 340);
	return (v2 & 0x8000) != 0
		&& (*(_BYTE*)(a2 + 336) & 8) == 0
		&& (*(_BYTE*)(a2 + 332) & 0xC0) == 0
		&& !*(_DWORD*)(a2 + 424)
		&& (v2 & 0x80) != 0;
}

