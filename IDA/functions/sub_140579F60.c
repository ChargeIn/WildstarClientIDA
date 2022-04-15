//----- (0000000140579F60) ----------------------------------------------------
int* __fastcall sub_140579F60(__int64 a1, __int64 a2, __int64 a3)
{
	int* result; // rax

	result = sub_1407E4830((int*)a1, 0i64, 0x98ui64);
	if (a2)
	{
		*(_DWORD*)a1 = *(_DWORD*)(a2 + 8);
		if (!a3)
			a3 = a2;
		*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 12);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 148);
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 4);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)a2;
		*(_DWORD*)(a1 + 44) = *(_DWORD*)a3;
		if ((*(_BYTE*)(a2 + 88) & 4) != 0 || *(_DWORD*)(a2 + 12) == -1)
			*(_DWORD*)(a1 + 12) = 1;
		if ((*(_BYTE*)(a3 + 88) & 8) != 0)
			*(_DWORD*)(a1 + 24) = 1;
		if ((*(_DWORD*)(a3 + 88) & 0x2000) != 0)
			*(_DWORD*)(a1 + 28) = 1;
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 88) & 0x10;
		*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 88) & 0x20;
		*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 88) & 0x40;
		*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 88) & 0x80;
		*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 88) & 0x100;
		*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 88) & 0x200;
		*(_DWORD*)(a1 + 108) = *(_DWORD*)(a3 + 116);
		*(_DWORD*)(a1 + 84) = *(_DWORD*)(a3 + 92);
		*(_DWORD*)(a1 + 112) = *(_DWORD*)(a3 + 120);
		*(_DWORD*)(a1 + 88) = *(_DWORD*)(a3 + 96);
		*(_DWORD*)(a1 + 116) = *(_DWORD*)(a3 + 124);
		*(_DWORD*)(a1 + 92) = *(_DWORD*)(a3 + 100);
		*(_DWORD*)(a1 + 120) = *(_DWORD*)(a3 + 128);
		*(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 104);
		*(_DWORD*)(a1 + 124) = *(_DWORD*)(a3 + 132);
		*(_DWORD*)(a1 + 100) = *(_DWORD*)(a3 + 108);
		*(_DWORD*)(a1 + 128) = *(_DWORD*)(a3 + 136);
		*(_DWORD*)(a1 + 104) = *(_DWORD*)(a3 + 112);
		result = (int*)*(unsigned int*)(a3 + 140);
		*(_QWORD*)(a1 + 132) = (unsigned int)result;
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	return result;
}
// 140579FB9: conditional instruction was optimized away because rdi.8!=0

