#include "../winhttp.h"

//----- (00000001406756D0) ----------------------------------------------------
__int64 __fastcall sub_1406756D0(__int64 a1, __int64 a2)
{
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rcx
	float v7; // xmm7_4
	__int64 v8; // rbx
	int v9; // xmm8_4
	__int64 v11; // rdi
	__int64 v12; // rbx
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // r15
	__int64 v17; // r14
	signed __int64 v18; // rbx
	__int64 v19; // r12
	unsigned __int64 v20; // rax
	float v21; // xmm0_4
	__int64 v22; // r8
	__int64 v23; // rdx
	_QWORD* v24; // rsi
	__int64 v25; // rax
	__int64 v26; // r8
	_QWORD* v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // r9
	__int64 v32; // [rsp+20h] [rbp-68h] BYREF
	int v33; // [rsp+28h] [rbp-60h]
	unsigned int v34; // [rsp+90h] [rbp+8h]

	v34 = 0;
	if (*(_DWORD*)(qword_140C65898 + 26180) == 49)
		v4 = *(_DWORD*)(qword_140C65898 + 26176);
	else
		v4 = 0;
	v5 = sub_1403D90D0(qword_140C65898, v4);
	v6 = *(_QWORD*)(a1 + 160);
	v7 = 1.0;
	v8 = v5;
	v9 = 1065353216;
	if (v6)
	{
		v9 = *(_DWORD*)(v6 + 132);
		if ((unsigned int)sub_1403D6A10(v6, 1u))
			return 0i64;
	}
	if (v8)
		v7 = *(float*)(v8 + 14048);
	v11 = a1 + 192;
	if (!*(_DWORD*)(a1 + 1336))
		v11 = 0i64;
	v12 = *(_QWORD*)(a1 + 160);
	v13 = v11 + 88;
	if (v12)
	{
		if ((~(*(_DWORD*)(v12 + 128) >> 3) & 1) != 0)
		{
			v14 = v12 + 240;
			if (sub_1403D8CB0(v14))
				v13 = v14;
		}
	}
	v15 = v13 + 8;
	v16 = 2i64;
	do
	{
		if (*(_QWORD*)(v15 - 8)
			&& (*(int*)v15 < 15
				|| *(_DWORD*)v15 == 15 && (*(_DWORD*)(v15 + 8) || *(_DWORD*)(v15 + 4) == 1 || *(_DWORD*)(v15 + 12))))
		{
			v17 = *(_QWORD*)v15;
			v18 = *(_QWORD*)(v15 - 8);
			v19 = *(_QWORD*)(v15 + 8);
			v34 = 1;
			if ((unsigned int)*(_QWORD*)v15 == 1)
			{
				v20 = 0i64;
				v21 = (float)(int)v18 * v7;
				if (v21 >= 9.223372e18)
				{
					v21 = v21 - 9.223372e18;
					if (v21 < 9.223372e18)
						v20 = 0x8000000000000000ui64;
				}
				v22 = a1 + 192;
				if (!*(_DWORD*)(a1 + 1336))
					v22 = 0i64;
				if (*(_DWORD*)(a1 + 1344))
					v23 = *(_QWORD*)(a1 + 168);
				else
					v23 = 0i64;
				v18 = v20 + (unsigned int)(int)v21 - sub_1403B54A0(0x8000000000000000ui64, v23, v22, *(float*)&v9);
				if (v18 < 0)
					v18 = 0i64;
			}
			v24 = *(_QWORD**)(a2 + 16);
			if (*(_QWORD*)(v24[4] + 120i64) >= *(_QWORD*)(v24[4] + 112i64))
				sub_14005E2C0(*(_QWORD*)(a2 + 16));
			v25 = v24[5];
			if (v25 == v24[10])
				v26 = v24[15];
			else
				v26 = *(_QWORD*)(**(_QWORD**)(v25 + 8) + 24i64);
			v27 = (_QWORD*)sub_1400627D0((__int64)v24, 0x18ui64, v26);
			v28 = v24[2];
			*(_QWORD*)v28 = v27;
			*(_DWORD*)(v28 + 8) = 7;
			v24[2] += 16i64;
			v27[6] = v18;
			v27[7] = v17;
			v27[8] = v19;
			v29 = v24[4];
			v30 = sub_140062650((__int64)v24, (unsigned __int64*)"Game.Money", 0xAui64);
			v31 = v24[2];
			v32 = v30;
			v33 = 4;
			sub_14005E8E0((__int64)v24, v29 + 160, (int*)&v32, v31);
			v24[2] += 16i64;
			sub_140058BF0((__int64)v24, -2);
			sub_1400FB470(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v15 += 24i64;
		--v16;
	} while (v16);
	return v34;
}
// 140C65898: using guessed type __int64 qword_140C65898;

