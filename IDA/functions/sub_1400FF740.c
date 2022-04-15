//----- (00000001400FF740) ----------------------------------------------------
__int64 __fastcall sub_1400FF740(_DWORD* a1, __int64 a2, unsigned int a3, int* a4)
{
	int v4; // ebx
	int v6; // edx
	int v7; // eax
	unsigned __int8 v9; // di
	int v10; // esi
	__int64 v11; // r11
	unsigned __int8 v12; // cl
	__int64 v13; // rbx
	__int64 v14; // [rsp+20h] [rbp-28h]

	v4 = *a4;
	v6 = a1[6];
	if (*a4 >= a1[1])
		return 0i64;
	v7 = a4[1];
	if (v7 >= a1[2] || v4 < 0 || v7 < 0)
		return 0i64;
	if (!v6)
		return *(unsigned int*)(a2 + 4i64 * (v4 + v7 * (a3 >> 2)));
	if (v6 == 13)
		return sub_1400FF400((unsigned __int16*)(a2 + a3 * (v7 / 4) + 8 * (v4 / 4)), v4 % 4, v7 % 4);
	if (v6 != 15)
		return 0i64;
	v9 = v7 % 4;
	v10 = v4 % 4;
	v11 = 16 * (v4 / 4) + a3 * (v7 / 4) + a2;
	v12 = *(_BYTE*)(v11 + 1);
	v14 = 0i64;
	LOBYTE(v14) = *(_BYTE*)v11;
	BYTE1(v14) = v12;
	if ((unsigned __int8)v14 <= v12)
	{
		HIWORD(v14) = -256;
		BYTE2(v14) = (char)(v12 + 4 * v14) / 5;
		BYTE3(v14) = (char)(3 * v14 + 2 * v12) / 5;
		BYTE4(v14) = (char)(3 * v12 + 2 * v14) / 5;
		BYTE5(v14) = ((unsigned __int8)v14 + 4 * v12) / 5;
	}
	else
	{
		BYTE2(v14) = (char)(v12 + 6 * v14) / 7;
		BYTE3(v14) = (char)(5 * v14 + 2 * v12) / 7;
		BYTE4(v14) = (char)(3 * v12 + 4 * v14) / 7;
		BYTE5(v14) = (char)(3 * v14 + 4 * v12) / 7;
		BYTE6(v14) = (char)(5 * v12 + 2 * v14) / 7;
		HIBYTE(v14) = ((unsigned __int8)v14 + 6 * v12) / 7;
	}
	v13 = (*(_QWORD*)v11 >> 16 >> (3 * (v10 + 4 * v9))) & 7i64;
	return (*((unsigned __int8*)&v14 + v13) << 24) | (unsigned int)sub_1400FF400((unsigned __int16*)(v11 + 8), v10, v9) & 0xFFFFFF;
}

