//----- (0000000140877260) ----------------------------------------------------
__int64 __fastcall sub_140877260(__int64 a1, __int64 a2, int a3, int a4, int a5, __int16 a6)
{
	unsigned int v6; // r11d

	*(_WORD*)(a1 + 22) = a3;
	*(_WORD*)(a1 + 20) = a6;
	*(_DWORD*)a1 = 1179011410;
	*(_DWORD*)(a1 + 4) = -1;
	*(_DWORD*)(a1 + 8) = 1163280727;
	v6 = (unsigned int)(a5 * a3) >> 3;
	*(_DWORD*)(a1 + 12) = 544501094;
	*(_DWORD*)(a1 + 16) = 18;
	*(_DWORD*)(a1 + 24) = a4;
	*(_WORD*)(a1 + 34) = a5;
	*(_WORD*)(a1 + 32) = v6;
	*(_DWORD*)(a1 + 38) = 1635017060;
	*(_DWORD*)(a1 + 42) = -1;
	*(_DWORD*)(a1 + 28) = a4 * v6;
	*(_WORD*)(a1 + 36) = 0;
	return (***(__int64(__fastcall****)(_QWORD, __int64, __int64))(a1 + 56))(*(_QWORD*)(a1 + 56), a2, a1);
}

