#include "../winhttp.h"

//----- (0000000140568540) ----------------------------------------------------
__int64 __fastcall sub_140568540(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v6; // rbx
	unsigned int* v7; // rbp
	__int64 v8; // r13
	__int64 v9; // rsi
	__int64 v10; // r14
	_DWORD* v11; // r15
	_DWORD* v12; // r12
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rsi
	unsigned int v16; // ecx
	_DWORD* v17; // rax
	unsigned __int64 v18; // rsi
	unsigned int v19; // ecx
	int* v20; // rax
	bool v21; // zf
	__int64 v22; // rcx
	int v23; // eax
	_DWORD* v24; // rax
	_DWORD* v25; // rax
	unsigned __int64 v26; // rsi
	unsigned int v27; // ecx
	__int64 v28; // [rsp+60h] [rbp+8h]
	__int64 v29; // [rsp+68h] [rbp+10h]
	__int64 v30; // [rsp+78h] [rbp+20h]

	sub_1407E4830(*(int**)(a2 + 112), 0i64, 0x1B0ui64);
	result = sub_140236580(a3);
	v6 = result;
	if (result)
	{
		result = sub_140236E00(*(_DWORD*)(result + 16));
		v7 = (unsigned int*)result;
		if (result)
		{
			v29 = sub_140239CC0(*(_DWORD*)(result + 20));
			v28 = sub_14023BA80(v7[4]);
			v8 = sub_140239440(v7[2]);
			v9 = sub_14023CFC0(v7[6]);
			v30 = v9;
			v10 = sub_14023BEC0(v7[3]);
			v11 = (_DWORD*)sub_140237F00(*(_DWORD*)(v6 + 288));
			v12 = (_DWORD*)sub_140237F00(*(_DWORD*)(v6 + 292));
			result = sub_14023B200(*(_DWORD*)(v6 + 360));
			if (v28)
			{
				if (v8 && v9 && v10)
				{
					**(_DWORD**)(a2 + 112) = *(_DWORD*)v6;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 4i64) = *(_DWORD*)(v6 + 16);
					*(_BYTE*)(*(_QWORD*)(a2 + 112) + 8i64) = *(_BYTE*)(v6 + 20);
					v13 = *(_QWORD*)(v6 + 8);
					if (v13)
					{
						if (v13 <= qword_140C3FE70)
							v14 = qword_140C3FE68 + v13;
						else
							v14 = 0i64;
					}
					else
					{
						v14 = 0i64;
					}
					v15 = 196i64;
					*(_QWORD*)(*(_QWORD*)(a2 + 112) + 16i64) = v14;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 28i64) = *(_DWORD*)(v6 + 28);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 32i64) = *(_DWORD*)(v6 + 32);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 168i64) = *(_DWORD*)(v6 + 88);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 172i64) = *(_DWORD*)(v6 + 92);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 176i64) = *(_DWORD*)(v6 + 96);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 180i64) = *(_DWORD*)(v6 + 100);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 184i64) = *(_DWORD*)(v6 + 104);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 188i64) = *(_DWORD*)(v6 + 108);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 152i64) = *(_DWORD*)(v6 + 220);
					do
					{
						v16 = *(_DWORD*)(v6 + v15 - 44);
						if (v16)
						{
							v17 = (_DWORD*)sub_14023A100(v16);
							if (v17)
							{
								*(_DWORD*)(*(_QWORD*)(a2 + 112) + 192i64) = 1;
								*(_DWORD*)(v15 + *(_QWORD*)(a2 + 112)) = v17[1];
								*(_DWORD*)(v15 + *(_QWORD*)(a2 + 112) + 12) = v17[2];
								*(_DWORD*)(v15 + *(_QWORD*)(a2 + 112) + 24) = v17[3];
								*(_DWORD*)(v15 + *(_QWORD*)(a2 + 112) + 36) = v17[4];
							}
						}
						v15 += 4i64;
					} while (v15 < 0xD0);
					v18 = 56i64;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 160i64) = *(_DWORD*)(v6 + 316);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 164i64) = *(_DWORD*)(v6 + 320);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 144i64) = v7[25];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 148i64) = v7[26];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 244i64) = v7[21];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 248i64) = v7[22];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 252i64) = v7[16];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 256i64) = v7[23];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 296i64) = v7[7];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 356i64) = v7[15];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 300i64) = *(_DWORD*)(v6 + 312);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 284i64) = v7[14];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) = v7[20];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 36i64) = *(_DWORD*)(v6 + 348);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 40i64) = *(_DWORD*)(v6 + 296);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 156i64) = v7[8];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 128i64) = v7[9];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 132i64) = v7[10];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 136i64) = v7[11];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 140i64) = v7[12];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 260i64) = v7[29];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 44i64) = v7[24];
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 48i64) = *(_DWORD*)(v6 + 412);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 288i64) = *(_DWORD*)(v6 + 360);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 292i64) = *(_DWORD*)(v6 + 128);
					do
					{
						v19 = *(_DWORD*)(v6 + v18 + 268);
						if (v19)
						{
							v20 = (int*)sub_140237680(v19);
							if (v20)
							{
								v21 = v20[1] == 0;
								v22 = *(_QWORD*)(a2 + 112);
								v23 = *v20;
								if (v21)
								{
									*(_DWORD*)(v18 + v22) = v23;
									*(_DWORD*)(*(_QWORD*)(a2 + 112) + 52i64) = 1;
								}
								else
								{
									*(_DWORD*)(v18 + v22 + 28) = v23;
									*(_DWORD*)(*(_QWORD*)(a2 + 112) + 80i64) = 1;
								}
							}
						}
						v18 += 4i64;
					} while (v18 < 0x50);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 1)) & 1;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (2 * (*(_DWORD*)(v6 + 352) >> 2))) & 2;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (4 * *(_DWORD*)(v6 + 352))) & 4;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (8 * (*(_DWORD*)(v6 + 352) >> 4))) & 8;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (16 * (*(_DWORD*)(v6 + 352) >> 8))) & 0x10;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (32 * (*(_DWORD*)(v6 + 352) >> 6))) & 0x20;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 9 << 6)) & 0x40;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 10 << 7)) & 0x80;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 11 << 8)) & 0x100;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 12 << 9)) & 0x200;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 3 << 10)) & 0x400;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 5 << 11)) & 0x800;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 15 << 12)) & 0x1000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 17 << 13)) & 0x2000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 18 << 14)) & 0x4000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 19 << 15)) & 0x8000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 20 << 16)) & 0x10000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 21 << 17)) & 0x20000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 22 << 18)) & 0x40000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 23 << 19)) & 0x80000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(unsigned __int8*)(v6 + 355) << 20)) & 0x100000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 25 << 21)) & 0x200000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 26 << 22)) & 0x400000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 27 << 23)) & 0x800000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 28 << 24)) & 0x1000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 29 << 25)) & 0x2000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 30 << 26)) & 0x4000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 7 << 27)) & 0x8000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 352) >> 13 << 28)) & 0x10000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ ((*(int*)(v6 + 352) < 0) << 29)) & 0x20000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) ^ (*(_DWORD*)(v6 + 356) << 30)) & 0x40000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64) & 0x7FFFFFFF | (*(_DWORD*)(v6 + 356) >> 1 << 31);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 2)) & 1;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (2 * (*(_DWORD*)(v6 + 356) >> 5))) & 2;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (4 * (*(_DWORD*)(v6 + 356) >> 6))) & 4;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (8 * (*(_DWORD*)(v6 + 356) >> 7))) & 8;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ *(_DWORD*)(v6 + 356) & 0xFFFFFFF0) & 0x10;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (32 * (*(_DWORD*)(v6 + 356) >> 8))) & 0x20;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 3 << 6)) & 0x40;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 9 << 7)) & 0x80;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 10 << 8)) & 0x100;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 11 << 9)) & 0x200;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v6 + 356) >> 12 << 10)) & 0x400;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] << 11)) & 0x800;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 1 << 12)) & 0x1000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 2 << 13)) & 0x2000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 3 << 14)) & 0x4000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 4 << 15)) & 0x8000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 5 << 16)) & 0x10000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 6 << 17)) & 0x20000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 7 << 18)) & 0x40000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 8 << 19)) & 0x80000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (v7[31] >> 9 << 20)) & 0x100000;
					if (v29)
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 280i64) = *(_DWORD*)(v29 + 4);
					v24 = (_DWORD*)sub_140237AC0(*(_DWORD*)(v6 + 280));
					if (v24)
					{
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 304i64) = *v24;
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 308i64) = v24[1];
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 312i64) = v24[2];
					}
					v25 = (_DWORD*)sub_140237AC0(*(_DWORD*)(v6 + 284));
					if (v25)
					{
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 316i64) = *v25;
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 320i64) = v25[1];
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 324i64) = v25[2];
					}
					if (v11)
					{
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 328i64) = *v11;
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 332i64) = v11[1];
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 336i64) = v11[2];
					}
					if (v12)
					{
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 340i64) = *v12;
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 344i64) = v12[1];
						*(_DWORD*)(*(_QWORD*)(a2 + 112) + 348i64) = v12[2];
					}
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 120i64) = *(_DWORD*)(v28 + 4);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 108i64) = *(_DWORD*)(v6 + 40);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 112i64) = *(_DWORD*)(v6 + 44);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 116i64) = *(_DWORD*)(v6 + 48);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v8 + 4) >> 4 << 21)) & 0x200000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v8 + 4) >> 5 << 22)) & 0x400000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v8 + 4) >> 3 << 23)) & 0x800000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v8 + 4) >> 1 << 24)) & 0x1000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v8 + 4) >> 2 << 25)) & 0x2000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (4 * *(_DWORD*)(v30 + 4))) & 4;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (8 * (*(_DWORD*)(v30 + 4) >> 2))) & 8;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (16 * (*(_DWORD*)(v30 + 4) >> 1))) & 0x10;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (32 * (*(_DWORD*)(v30 + 4) >> 4))) & 0x20;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (*(_DWORD*)(v30 + 4) >> 8 << 6)) & 0x40;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 124i64) = *(_DWORD*)(v10 + 4);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v10 + 8) << 26)) & 0x4000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v10 + 8) >> 6 << 27)) & 0x8000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v10 + 8) >> 1 << 28)) & 0x10000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v10 + 8) >> 5 << 29)) & 0x20000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) ^ (*(_DWORD*)(v10 + 8) >> 2 << 30)) & 0x40000000;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) & 0x7FFFFFFF | (*(_DWORD*)(v10 + 8) >> 3 << 31);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (*(_DWORD*)(v10 + 8) >> 4)) & 1;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^= (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 272i64) ^ (2 * (*(_DWORD*)(v10 + 8) >> 7))) & 2;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 360i64) = *(_DWORD*)(v6 + 364);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 364i64) = *(_DWORD*)(v6 + 368);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 368i64) = *(_DWORD*)(v6 + 372);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 372i64) = *(_DWORD*)(v6 + 376);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 380i64) = *(_DWORD*)(v6 + 416);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 384i64) = *(_DWORD*)(v6 + 420);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 388i64) = *(_DWORD*)(v6 + 200);
					v26 = 408i64;
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 392i64) = *(_DWORD*)(v6 + 216);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 396i64) = *(_DWORD*)(v6 + 204);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 400i64) = *(_DWORD*)(v6 + 208);
					result = *(unsigned int*)(v6 + 224);
					*(_DWORD*)(*(_QWORD*)(a2 + 112) + 404i64) = result;
					do
					{
						v27 = *(_DWORD*)(v6 + v26 - 180);
						if (v27)
						{
							result = sub_14023B640(v27);
							if (result)
							{
								result = *(unsigned int*)result;
								*(_DWORD*)(v26 + *(_QWORD*)(a2 + 112)) = result;
							}
						}
						v26 += 4i64;
					} while (v26 < 0x1AC);
				}
			}
		}
	}
	return result;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

