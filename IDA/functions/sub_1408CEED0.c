//----- (00000001408CEED0) ----------------------------------------------------
__int64 __fastcall sub_1408CEED0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, int* a5)
{
	int v7; // eax
	int v8; // edx

	*(_QWORD*)(a1 + 8) = a4;
	*(_DWORD*)(a1 + 24) = a4[2];
	*(_DWORD*)(a1 + 28) = a4[3];
	*(_DWORD*)(a1 + 32) = a4[4];
	*(_DWORD*)(a1 + 36) = a4[5];
	*(_DWORD*)(a1 + 40) = a4[6];
	*(_DWORD*)(a1 + 44) = a4[7];
	*(_DWORD*)(a1 + 48) = a4[8];
	*(_DWORD*)(a1 + 52) = a4[9];
	*(_DWORD*)(a1 + 56) = a4[10];
	*(_DWORD*)(a1 + 60) = a4[11];
	*(_DWORD*)(a1 + 64) = a4[12];
	sub_1408D1800((__int64)a4, 0);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a1 + 28);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a1 + 36);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 52);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a1 + 60);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a1 + 64);
	v7 = *a5;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 112) = v7;
	v8 = a5[1] & 0x3FFFF;
	if (!*(_BYTE*)(a1 + 64) && (a5[1] & 7) == 7)
		v8 = a5[1] & 0x3FFFB;
	if (!*(_BYTE*)(a1 + 65))
		v8 &= ~8u;
	sub_1408D1290(a1 + 116, v8, *(_DWORD*)(a1 + 112), (float*)(a1 + 28));
	return 1i64;
}

