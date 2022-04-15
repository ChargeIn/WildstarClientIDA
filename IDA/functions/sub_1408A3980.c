//----- (00000001408A3980) ----------------------------------------------------
__int64 __fastcall sub_1408A3980(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, int* a5)
{
	int v8; // edx
	int v9; // eax
	int v10; // edi
	int i; // ecx
	int v12; // eax
	__int64 result; // rax
	unsigned int v14; // eax
	unsigned int v15; // ecx

	*(_QWORD*)(a1 + 24) = a4;
	*(_DWORD*)(a1 + 48) = a4[2];
	*(_DWORD*)(a1 + 52) = a4[3];
	*(_DWORD*)(a1 + 56) = a4[4];
	*(_DWORD*)(a1 + 60) = a4[5];
	*(_DWORD*)(a1 + 64) = a4[6];
	*(_DWORD*)(a1 + 68) = a4[7];
	*(_DWORD*)(a1 + 72) = a4[8];
	*(_DWORD*)(a1 + 76) = a4[9];
	*(_DWORD*)(a1 + 80) = a4[10];
	*(_DWORD*)(a1 + 84) = a4[11];
	*(_DWORD*)(a1 + 88) = a4[12];
	*(_DWORD*)(a1 + 92) = a4[13];
	*(_DWORD*)(a1 + 96) = a4[14];
	*(_DWORD*)(a1 + 100) = a4[15];
	*(_DWORD*)(a1 + 104) = a4[16];
	*(_DWORD*)(a1 + 108) = a4[17];
	sub_1408A5970((__int64)a4, 0);
	v8 = 0;
	if (!*(_BYTE*)(a1 + 108))
		*(_DWORD*)(a1 + 60) = 0;
	v9 = *(_DWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 40) = a3;
	*(_DWORD*)(a1 + 112) = v9;
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 52);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a1 + 60);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 64);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 68);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a1 + 72);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a1 + 76);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a1 + 80);
	*(_DWORD*)(a1 + 148) = *(_DWORD*)(a1 + 84);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a1 + 88);
	*(_DWORD*)(a1 + 156) = *(_DWORD*)(a1 + 92);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 100);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a1 + 104);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a1 + 108);
	v10 = a5[1] & 0x3FFFF;
	if (!*(_BYTE*)(a1 + 110))
		v10 = a5[1] & 0x3FFF7;
	if ((v10 & 7) == 7 && !*(_BYTE*)(a1 + 109))
		v10 &= ~4u;
	for (i = v10; i; i &= i - 1)
		++v8;
	*(_DWORD*)(a1 + 184) = v8;
	v12 = *a5;
	*(_QWORD*)(a1 + 32) = a2;
	*(_DWORD*)(a1 + 188) = v12;
	result = sub_1408A4180(a1, v10);
	if ((_DWORD)result == 1)
	{
		v14 = sub_1408A4390(a1, v10);
		v15 = 1;
		if (v14 != 1)
			return v14;
		return v15;
	}
	return result;
}

