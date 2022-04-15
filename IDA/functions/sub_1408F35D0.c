#include "../winhttp.h"

//----- (00000001408F35D0) ----------------------------------------------------
__int64 __fastcall sub_1408F35D0(__int64 a1, __int64 a2)
{
	int v3; // eax
	int v4; // ecx
	int v5; // eax
	int v6; // xmm0_4
	float* v7; // rdx
	int v8; // xmm1_4
	double v9; // xmm0_8
	__int64 result; // rax
	unsigned int v11; // eax
	unsigned int v12; // ecx
	float* v13; // [rsp+30h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 120) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 4);
	v3 = *(unsigned __int16*)(a2 + 8);
	v4 = v3;
	*(_DWORD*)(a1 + 128) = v3;
	if (v3)
	{
		v5 = 51;
		if (v4 != 2)
			v5 = 3;
		*(_DWORD*)(a1 + 128) = v5;
	}
	else
	{
		*(_DWORD*)(a1 + 128) = 4;
	}
	v6 = *(_DWORD*)(a2 + 10);
	v7 = (float*)(a2 + 89);
	*(_DWORD*)(a1 + 132) = v6;
	v8 = *(_DWORD*)((char*)v7 - 75);
	v13 = v7;
	*(_DWORD*)(a1 + 136) = v8;
	*(float*)(a1 + 144) = *(float*)((char*)v7 - 71);
	*(float*)(a1 + 148) = *(float*)((char*)v7 - 67);
	*(float*)(a1 + 152) = *(float*)((char*)v7 - 63);
	*(float*)(a1 + 180) = *(float*)((char*)v7 - 59);
	*(_BYTE*)(a1 + 208) = *((_BYTE*)v7 - 55);
	*(float*)(a1 + 156) = *(float*)((char*)v7 - 54);
	*(float*)(a1 + 184) = *(float*)((char*)v7 - 50);
	*(_BYTE*)(a1 + 209) = *((_BYTE*)v7 - 46);
	*(float*)(a1 + 160) = *(float*)((char*)v7 - 45);
	*(float*)(a1 + 188) = *(float*)((char*)v7 - 41);
	*(_BYTE*)(a1 + 210) = *((_BYTE*)v7 - 37);
	*(float*)(a1 + 164) = *(v7 - 9);
	*(float*)(a1 + 192) = *(v7 - 8);
	*(_BYTE*)(a1 + 211) = *((_BYTE*)v7 - 28);
	*(float*)(a1 + 168) = *(float*)((char*)v7 - 27);
	*(float*)(a1 + 196) = *(float*)((char*)v7 - 23);
	*(_BYTE*)(a1 + 212) = *((_BYTE*)v7 - 19);
	*(float*)(a1 + 172) = *(float*)((char*)v7 - 18);
	*(float*)(a1 + 200) = *(float*)((char*)v7 - 14);
	*(_BYTE*)(a1 + 213) = *((_BYTE*)v7 - 10);
	*(float*)(a1 + 176) = *(float*)((char*)v7 - 9);
	*(float*)(a1 + 204) = *(float*)((char*)v7 - 5);
	*(_BYTE*)(a1 + 214) = *((_BYTE*)v7 - 1);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a1 + 176) * 0.050000001);
	*(_DWORD*)(a1 + 176) = LODWORD(v9);
	*(_DWORD*)(a1 + 232) = 63;
	result = sub_1408F3BF0(a1, &v13);
	if ((_DWORD)result == 1)
	{
		v11 = sub_1408F3D80(a1, (__int64*)&v13);
		v12 = 1;
		if (v11 != 1)
			return v11;
		return v12;
	}
	return result;
}

