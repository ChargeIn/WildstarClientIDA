//----- (0000000140898620) ----------------------------------------------------
__int64 __fastcall sub_140898620(__int64 a1, bool* a2)
{
	unsigned int v5; // r15d
	__int64 v6; // rsi
	unsigned int v7; // edx
	unsigned int** v8; // rax
	unsigned int** v9; // rdi
	unsigned int* v10; // rdx
	int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rsi
	unsigned int* v14; // rdx
	__int64 v15; // r8
	unsigned int v16; // eax
	int v17; // ecx
	int v18; // eax
	__int128 v19; // [rsp+30h] [rbp-29h] BYREF
	int v20; // [rsp+40h] [rbp-19h]
	__int64 v21; // [rsp+48h] [rbp-11h]
	__int64 v22; // [rsp+50h] [rbp-9h]
	int v23; // [rsp+58h] [rbp-1h]
	__int128 v24; // [rsp+60h] [rbp+7h]
	unsigned int v25; // [rsp+70h] [rbp+17h]
	unsigned int v26; // [rsp+74h] [rbp+1Bh]
	int v27; // [rsp+78h] [rbp+1Fh]
	int v28; // [rsp+7Ch] [rbp+23h]
	int v29; // [rsp+80h] [rbp+27h]
	int v30; // [rsp+84h] [rbp+2Bh]
	int v31; // [rsp+88h] [rbp+2Fh]
	__int64 v32; // [rsp+90h] [rbp+37h]

	*a2 = 0;
	if ((*(_BYTE*)(a1 + 98) & 0xFu) > 1)
		return 0i64;
	v5 = *(_DWORD*)(a1 + 192);
	if (!*(_BYTE*)(a1 + 200))
		return 0i64;
	sub_1408972B0(a1 + 160);
	v6 = *(_QWORD*)(a1 + 136);
	if (v6)
		v7 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 128i64) + 24i64);
	else
		v7 = 0;
	v8 = sub_140895BC0(*(_QWORD*)(a1 + 152), v7, v5);
	v9 = v8;
	v10 = v8[12];
	if (v10)
	{
		v20 = 0;
		v21 = 0i64;
		v22 = 0i64;
		v23 = 0;
		v32 = 0i64;
		v19 = 0i64;
		v24 = *((_OWORD*)v8 + 3);
		v25 = *((_DWORD*)v8 + 16);
		v26 = v10[1];
		v27 = v10[2];
		v11 = v10[3];
		v29 = 0;
		v28 = v11;
		LOWORD(v31) = v31 & 0xFFF8;
		LOWORD(v31) = v31 & 0xFFE7 | (8 * (v10[7] & 1));
		*a2 = v10[7] & 1;
		v12 = sub_1408981F0((_BYTE*)a1, &v19, v6, *v9[12]);
		v13 = v12;
		if (v12)
		{
			if (*(_QWORD*)(v12 + 24))
			{
				v14 = v9[12];
				v15 = v12;
				*(_QWORD*)&v24 = *((_QWORD*)v14 + 2);
				v16 = v14[6];
				v25 = v25 & 0xFFFFFFE0 | 7;
				DWORD2(v24) = v16;
				v17 = ((unsigned __int8)v25 ^ (unsigned __int8)(16 * v14[7])) & 0x20 ^ v25;
				v26 = *((_DWORD*)v9 + 17);
				v18 = *((_DWORD*)v9 + 18);
				v25 = v17;
				v27 = v18;
				v28 = *((_DWORD*)v9 + 19);
				v29 = *((_DWORD*)v9 + 20);
				v30 = *((_DWORD*)v9 + 21);
				v31 = *((_DWORD*)v9 + 22);
				sub_1408981F0((_BYTE*)a1, &v19, v15, v5);
			}
			else
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 200i64))(a1);
			}
		}
		if (v32)
			sub_140881720(dword_140C10F20, v32);
		if ((_QWORD)v19)
		{
			*((_QWORD*)&v19 + 1) = v19;
			sub_140881720(dword_140C10F20, v19);
			v20 = 0;
			v19 = 0i64;
		}
		if (v21)
		{
			v22 = v21;
			sub_140881720(dword_140C10F20, v21);
		}
		return v13;
	}
	else
	{
		*a2 = ((_BYTE)v8[11] & 8) != 0;
		return sub_1408981F0((_BYTE*)a1, v8, v6, v5);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

