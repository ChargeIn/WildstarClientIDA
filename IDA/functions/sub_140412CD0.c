//----- (0000000140412CD0) ----------------------------------------------------
char __fastcall sub_140412CD0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // edx
	__int64 v4; // rcx
	int* v5; // rax
	__int64 v6; // rdx
	int* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	unsigned int v11; // ecx
	char v12; // al
	char v13; // al
	char v14; // dl
	char v15; // al
	int v16; // edx
	char v17; // al
	char v18; // al
	char v19; // al
	char v20; // al
	char v21; // al
	unsigned int v22; // ecx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v26; // [rsp+20h] [rbp-28h]
	int v27; // [rsp+28h] [rbp-20h]

	v2 = *(_QWORD*)a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)a1 = 0i64;
	}
	v3 = *(_DWORD*)(a1 + 800);
	v4 = qword_140C658F0;
	*(_DWORD*)(a1 + 1208) = 0;
	*(_DWORD*)(a1 + 1200) = 0;
	v5 = sub_1400B5DF0(v4, v3, 0i64);
	sub_140412470(a1, (__int64)v5, 0, 4);
	v6 = *(_QWORD*)(a1 + 8);
	if (v6)
	{
		v7 = (int*)(v6 + 8);
		if (*(int*)(a1 + 1176) <= 4 && v7)
		{
			v8 = a1 + 32;
			if ((((unsigned __int8)(a1 + 32) | (unsigned __int8)v7) & 0xF) != 0)
			{
				sub_1407DB590((int*)v8, v7, 0x138ui64);
			}
			else
			{
				v9 = 2i64;
				do
				{
					v10 = *(_OWORD*)v7;
					v8 += 128i64;
					v7 += 32;
					*(_OWORD*)(v8 - 128) = v10;
					*(_OWORD*)(v8 - 112) = *((_OWORD*)v7 - 7);
					*(_OWORD*)(v8 - 96) = *((_OWORD*)v7 - 6);
					*(_OWORD*)(v8 - 80) = *((_OWORD*)v7 - 5);
					*(_OWORD*)(v8 - 64) = *((_OWORD*)v7 - 4);
					*(_OWORD*)(v8 - 48) = *((_OWORD*)v7 - 3);
					*(_OWORD*)(v8 - 32) = *((_OWORD*)v7 - 2);
					*(_OWORD*)(v8 - 16) = *((_OWORD*)v7 - 1);
					--v9;
				} while (v9);
				*(_OWORD*)v8 = *(_OWORD*)v7;
				*(_OWORD*)(v8 + 16) = *((_OWORD*)v7 + 1);
				*(_OWORD*)(v8 + 32) = *((_OWORD*)v7 + 2);
				*(_QWORD*)(v8 + 48) = *((_QWORD*)v7 + 6);
			}
			*(_DWORD*)(a1 + 1176) = 4;
		}
		sub_140412690(a1, (int*)(a1 + 180), 0, 4);
	}
	v11 = *(_DWORD*)(a1 + 848);
	HIWORD(v27) = 0;
	v12 = v11 & 7;
	v11 >>= 3;
	BYTE1(v27) = v12;
	v13 = v11;
	v11 >>= 3;
	v14 = v11;
	v11 >>= 1;
	LOBYTE(v27) = v13 & 7;
	v15 = v11;
	v11 >>= 3;
	v16 = v14 & 1;
	LOBYTE(v26) = v15 & 7;
	v17 = v11;
	v11 >>= 3;
	BYTE1(v26) = v17 & 7;
	v18 = v11;
	v11 >>= 3;
	BYTE2(v26) = v18 & 7;
	v19 = v11;
	v11 >>= 3;
	BYTE3(v26) = v19 & 7;
	v20 = v11;
	v11 >>= 3;
	BYTE4(v26) = v20 & 7;
	v21 = v11;
	v22 = v11 >> 3;
	BYTE5(v26) = v21 & 7;
	LOBYTE(v23) = v22 & 7;
	if (*(int*)(a1 + 1188) <= 4)
	{
		*(_DWORD*)(a1 + 1188) = 4;
		BYTE6(v26) = v22 & 7;
		HIBYTE(v26) = (v22 >> 3) & 7;
		*(_QWORD*)(a1 + 744) = v26;
		*(_DWORD*)(a1 + 752) = v27;
		v23 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 756) = v16;
		if (v23)
		{
			v24 = *(_QWORD*)(v23 + 88);
			if (v24)
			{
				if (*(int*)(v24 + 8) <= 0)
				{
					LOBYTE(v23) = 0;
					*(_QWORD*)(a1 + 744) = 0i64;
					*(_QWORD*)(a1 + 752) = 0i64;
					*(_DWORD*)(a1 + 1188) = 0;
				}
			}
		}
	}
	if (*(int*)(a1 + 1192) <= 4 && a1 != -892)
	{
		*(_QWORD*)(a1 + 1144) = 0i64;
		*(_QWORD*)(a1 + 1152) = 0i64;
		*(_QWORD*)(a1 + 1160) = 0i64;
		*(_QWORD*)(a1 + 1168) = 0i64;
		*(_DWORD*)(a1 + 1144) = *(_DWORD*)(a1 + 892);
		*(_DWORD*)(a1 + 1148) = *(_DWORD*)(a1 + 896);
		*(_DWORD*)(a1 + 1152) = *(_DWORD*)(a1 + 900);
		*(_DWORD*)(a1 + 1156) = *(_DWORD*)(a1 + 904);
		*(_DWORD*)(a1 + 1160) = *(_DWORD*)(a1 + 908);
		*(_DWORD*)(a1 + 1164) = *(_DWORD*)(a1 + 912);
		*(_DWORD*)(a1 + 1168) = *(_DWORD*)(a1 + 916);
		LODWORD(v23) = *(_DWORD*)(a1 + 920);
		*(_DWORD*)(a1 + 1172) = v23;
		*(_DWORD*)(a1 + 1192) = 4;
	}
	if (*(int*)(a1 + 1196) < 6)
	{
		LOBYTE(v23) = (unsigned __int8)sub_14001C2B0(a1 + 760, *(int**)(a1 + 768), *(int**)(a1 + 776));
		*(_DWORD*)(a1 + 1196) = 0;
	}
	return v23;
}
// 140412EEC: conditional instruction was optimized away because rcx.8!=0
// 140C658F0: using guessed type __int64 qword_140C658F0;

