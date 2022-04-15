//----- (000000014084C5C0) ----------------------------------------------------
__int64 __fastcall sub_14084C5C0(__int64 a1, int* a2, unsigned __int16 a3, char a4)
{
	__int64 result; // rax

	result = sub_14084C510(a1 + 8, a2, a3);
	*(_BYTE*)(a1 + 19) &= 0xF8u;
	*(_BYTE*)(a1 + 19) |= a4 & 7;
	*(_DWORD*)(a1 + 136) |= 0x40000000u;
	return result;
}

