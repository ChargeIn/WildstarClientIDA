//----- (00000001408F8830) ----------------------------------------------------
__int64 __fastcall sub_1408F8830(__int64 a1, __int64 a2)
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

	*(_DWORD*)(a1 + 72) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 4);
	v3 = *(unsigned __int16*)(a2 + 8);
	v4 = v3;
	*(_DWORD*)(a1 + 80) = v3;
	if (v3)
	{
		v5 = 51;
		if (v4 != 2)
			v5 = 3;
		*(_DWORD*)(a1 + 80) = v5;
	}
	else
	{
		*(_DWORD*)(a1 + 80) = 4;
	}
	v6 = *(_DWORD*)(a2 + 10);
	v7 = (float*)(a2 + 75);
	*(_DWORD*)(a1 + 84) = v6;
	v8 = *(_DWORD*)((char*)v7 - 61);
	v13 = v7;
	*(_DWORD*)(a1 + 88) = v8;
	*(float*)(a1 + 92) = *(float*)((char*)v7 - 57);
	*(float*)(a1 + 96) = *(float*)((char*)v7 - 53);
	*(_DWORD*)(a1 + 104) = *(unsigned __int16*)((char*)v7 - 49);
	*(float*)(a1 + 108) = *(float*)((char*)v7 - 47);
	*(float*)(a1 + 112) = *(float*)((char*)v7 - 43);
	*(_BYTE*)(a1 + 156) = *((_BYTE*)v7 - 39);
	*(_DWORD*)(a1 + 116) = *((unsigned __int16*)v7 - 19);
	*(float*)(a1 + 120) = *(v7 - 9);
	*(float*)(a1 + 136) = *(v7 - 8);
	*(_BYTE*)(a1 + 152) = *((_BYTE*)v7 - 28);
	*(float*)(a1 + 124) = *(float*)((char*)v7 - 27);
	*(float*)(a1 + 140) = *(float*)((char*)v7 - 23);
	*(_BYTE*)(a1 + 153) = *((_BYTE*)v7 - 19);
	*(float*)(a1 + 128) = *(float*)((char*)v7 - 18);
	*(float*)(a1 + 144) = *(float*)((char*)v7 - 14);
	*(_BYTE*)(a1 + 154) = *((_BYTE*)v7 - 10);
	*(float*)(a1 + 132) = *(float*)((char*)v7 - 9);
	*(float*)(a1 + 148) = *(float*)((char*)v7 - 5);
	*(_BYTE*)(a1 + 155) = *((_BYTE*)v7 - 1);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a1 + 132) * 0.050000001);
	*(_DWORD*)(a1 + 132) = LODWORD(v9);
	*(_DWORD*)(a1 + 168) = 15;
	result = sub_1408F8D80(a1, &v13);
	if ((_DWORD)result == 1)
	{
		result = sub_1408F8EE0(a1, (__int64*)&v13);
		if ((_DWORD)result == 1)
		{
			v11 = sub_1408F90A0(a1, (unsigned __int16**)&v13);
			v12 = 1;
			if (v11 != 1)
				return v11;
			return v12;
		}
	}
	return result;
}

