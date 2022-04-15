//----- (00000001401CD6D0) ----------------------------------------------------
__int64 __fastcall sub_1401CD6D0(int a1, char* a2, unsigned int a3)
{
	unsigned int v3; // r11d
	unsigned int i; // ecx
	char v6; // dl
	unsigned __int64 v7; // rbx
	unsigned int v8; // r9d
	unsigned int v9; // r9d
	unsigned int v10; // r9d
	unsigned int v11; // r9d
	unsigned int v12; // r9d
	unsigned int v13; // r9d
	__int64 v14; // rdx
	unsigned __int64 v15; // r9
	unsigned int v16; // ecx
	char v17; // dl

	v3 = a3;
	for (i = ~a1; v3; --v3)
	{
		if (((unsigned __int8)a2 & 3) == 0)
			break;
		v6 = *a2++;
		i = (i >> 8) ^ dword_140A487D0[(unsigned __int8)(i ^ v6)];
	}
	if (v3 >= 0x20)
	{
		v7 = (unsigned __int64)v3 >> 5;
		do
		{
			v8 = *((_DWORD*)a2 + 1) ^ dword_140A487D0[(unsigned __int8)(*a2 ^ i) + 768] ^ dword_140A487D0[(unsigned __int64)(*(_DWORD*)a2 ^ i) >> 24] ^ dword_140A487D0[(unsigned __int8)((unsigned __int16)(*(_WORD*)a2 ^ i) >> 8) + 512] ^ dword_140A487D0[(unsigned __int8)((*(_DWORD*)a2 ^ i) >> 16) + 256];
			v9 = *((_DWORD*)a2 + 2) ^ dword_140A487D0[(unsigned __int8)v8 + 768] ^ dword_140A487D0[(unsigned __int64)v8 >> 24] ^ dword_140A487D0[(unsigned __int8)((unsigned __int16)(*((_WORD*)a2 + 2) ^ LOWORD(dword_140A487D0[(unsigned __int8)(*a2 ^ i) + 768]) ^ LOWORD(dword_140A487D0[(unsigned __int64)(*(_DWORD*)a2 ^ i) >> 24]) ^ LOWORD(dword_140A487D0[(unsigned __int8)((unsigned __int16)(*(_WORD*)a2 ^ i) >> 8) + 512]) ^ LOWORD(dword_140A487D0[(unsigned __int8)((*(_DWORD*)a2 ^ i) >> 16) + 256])) >> 8) + 512] ^ dword_140A487D0[BYTE2(v8) + 256];
			v10 = *((_DWORD*)a2 + 3) ^ dword_140A487D0[(unsigned __int8)v9 + 768] ^ dword_140A487D0[(unsigned __int64)v9 >> 24] ^ dword_140A487D0[BYTE1(v9) + 512] ^ dword_140A487D0[BYTE2(v9) + 256];
			v11 = *((_DWORD*)a2 + 4) ^ dword_140A487D0[(unsigned __int8)v10 + 768] ^ dword_140A487D0[(unsigned __int64)v10 >> 24] ^ dword_140A487D0[BYTE1(v10) + 512] ^ dword_140A487D0[BYTE2(v10) + 256];
			v12 = *((_DWORD*)a2 + 5) ^ dword_140A487D0[(unsigned __int8)v11 + 768] ^ dword_140A487D0[(unsigned __int64)v11 >> 24] ^ dword_140A487D0[BYTE1(v11) + 512] ^ dword_140A487D0[BYTE2(v11) + 256];
			a2 += 32;
			v3 -= 32;
			v13 = *((_DWORD*)a2 - 2) ^ dword_140A487D0[(unsigned __int8)v12 + 768] ^ dword_140A487D0[(unsigned __int64)v12 >> 24] ^ dword_140A487D0[BYTE1(v12) + 512] ^ dword_140A487D0[BYTE2(v12) + 256];
			v14 = (unsigned __int8)((unsigned __int16)(*((_WORD*)a2 - 2) ^ LOWORD(dword_140A487D0[(unsigned __int8)v13 + 768]) ^ LOWORD(dword_140A487D0[(unsigned __int64)v13 >> 24]) ^ LOWORD(dword_140A487D0[BYTE1(v13) + 512]) ^ LOWORD(dword_140A487D0[BYTE2(v13) + 256])) >> 8);
			i = dword_140A487D0[(unsigned __int8)(*(a2 - 4) ^ LOBYTE(dword_140A487D0[(unsigned __int8)v13 + 768]) ^ LOBYTE(dword_140A487D0[(unsigned __int64)v13 >> 24]) ^ LOBYTE(dword_140A487D0[BYTE1(v13) + 512]) ^ LOBYTE(dword_140A487D0[BYTE2(v13) + 256]))
				+ 768] ^ dword_140A487D0[(unsigned __int64)(*((_DWORD*)a2 - 1) ^ dword_140A487D0[(unsigned __int8)v13 + 768] ^ dword_140A487D0[(unsigned __int64)v13 >> 24] ^ (unsigned int)(dword_140A487D0[BYTE1(v13) + 512] ^ dword_140A487D0[BYTE2(v13) + 256])) >> 24] ^ dword_140A487D0[v14 + 512] ^ dword_140A487D0[(unsigned __int8)((*((_DWORD*)a2 - 1) ^ dword_140A487D0[(unsigned __int8)v13 + 768] ^ dword_140A487D0[(unsigned __int64)v13 >> 24] ^ (unsigned int)(dword_140A487D0[BYTE1(v13) + 512] ^ dword_140A487D0[BYTE2(v13) + 256])) >> 16) + 256];
			--v7;
		} while (v7);
	}
	if (v3 >= 4)
	{
		v15 = (unsigned __int64)v3 >> 2;
		do
		{
			v16 = *(_DWORD*)a2 ^ i;
			a2 += 4;
			v3 -= 4;
			i = dword_140A487D0[(unsigned __int8)v16 + 768] ^ dword_140A487D0[(unsigned __int64)v16 >> 24] ^ dword_140A487D0[BYTE1(v16) + 512] ^ dword_140A487D0[BYTE2(v16) + 256];
			--v15;
		} while (v15);
	}
	for (; v3; --v3)
	{
		v17 = *a2++;
		i = (i >> 8) ^ dword_140A487D0[(unsigned __int8)(i ^ v17)];
	}
	return ~i;
}
// 140A487D0: using guessed type _DWORD dword_140A487D0[2048];

