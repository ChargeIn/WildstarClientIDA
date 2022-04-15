//----- (000000014040C610) ----------------------------------------------------
__int64 __fastcall sub_14040C610(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // eax
	_BYTE* v11; // r10
	__int64 v12; // r8
	int v13; // edx
	__int16* v14; // r9
	__int16 v15; // cx
	__int64 v16; // r8
	unsigned __int64 v17; // rdx
	__int16 v18; // ax
	__int64 v19; // rax
	__int64 v20; // rax
	_DWORD* v21; // r11
	__int64 v22; // r10
	__int64 v23; // r8
	int v24; // ecx
	unsigned int v25; // ecx
	__int64 v26; // r9
	int v27; // r8d
	unsigned int v28; // ecx
	__int64 v29; // r8
	int v30; // edx
	__int64 v31; // rax
	float v32; // xmm0_4
	float v33; // xmm1_4
	__int64 v34; // rax
	int v35; // eax
	int v36; // eax
	int v37; // eax
	unsigned int v38; // r9d
	unsigned __int64 v39[4]; // [rsp+38h] [rbp-20h] BYREF

	if (!*(_QWORD*)(a1 + 16))
		return 1i64;
	v7 = *(_QWORD*)(a1 + 112);
	v8 = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 160) = v7;
	v9 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 136) = v8;
	*(_QWORD*)(a1 + 176) = v9;
	if (v8 && (v10 = *(_DWORD*)(v8 + 8), v10 < 1))
	{
		*(_DWORD*)(a1 + 120) = v10;
		v39[0] = sub_14040BDB0((unsigned __int8*)v8);
		if ((unsigned int)sub_14040BDF0((__int64*)v39))
		{
			sub_14040BD50(a1 + 124, v39[0], *(_QWORD*)(a1 + 16));
			*(_QWORD*)(a1 + 136) = a1 + 124;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 120) = 1;
	}
	if (*(_QWORD*)(a1 + 160) && *(int*)(a1 + 120) < 1)
	{
		sub_14040BCD0(a1 + 144, 0);
		*(_QWORD*)(a1 + 160) = a1 + 144;
	}
	v11 = *(_BYTE**)(a1 + 176);
	if (v11 && *(int*)(a1 + 120) < 1)
	{
		v12 = 0i64;
		v13 = 3;
		v14 = (__int16*)(v11 + 6);
		do
		{
			v15 = *v14--;
			v12 = (v12 << 10) | v15 & 0x3FF;
			--v13;
		} while (v13);
		v16 = 16 * v12;
		v17 = (v16 | (unsigned __int64)(*v11 & 0xF)) >> 34;
		*(_BYTE*)(a1 + 168) = ((v16 | (unsigned __int64)(*v11 & 0xF)) >> 30) & 0xF;
		v18 = v17;
		v17 >>= 10;
		*(_WORD*)(a1 + 170) = v18 & 0x3FF;
		*(_WORD*)(a1 + 174) = (v17 >> 10) & 0x3FF;
		*(_WORD*)(a1 + 172) = v17 & 0x3FF;
		*(_QWORD*)(a1 + 176) = a1 + 168;
	}
	*(_QWORD*)(a1 + 224) = sub_1402096E0(**(_DWORD**)(a1 + 16));
	*(_QWORD*)(a1 + 232) = sub_14020A3A0(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 324i64));
	*(_QWORD*)(a1 + 240) = sub_140209F60(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 320i64));
	v19 = sub_140209B20(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 328i64));
	*(_QWORD*)(a1 + 248) = v19;
	if (!*(_QWORD*)(a1 + 224) || !*(_QWORD*)(a1 + 232) || !v19 || !*(_QWORD*)(a1 + 240))
		return 149i64;
	*(_QWORD*)(a1 + 264) = sub_14020A7E0(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 360i64));
	*(_QWORD*)(a1 + 272) = sub_14020AC20(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 364i64));
	v20 = sub_14020E7A0(*(_DWORD*)(*(_QWORD*)(a1 + 232) + 8i64));
	v21 = *(_DWORD**)(a1 + 16);
	*(_QWORD*)(a1 + 256) = v20;
	if (v21[80] == 33 || v21[82] == 143)
		*(_QWORD*)(a1 + 256) = 0i64;
	v22 = *(_QWORD*)(a1 + 264);
	*(_DWORD*)(a1 + 204) = 0;
	if (v22)
	{
		*(_DWORD*)(a1 + 204) = 5;
		do
		{
			v23 = (unsigned int)(*(_DWORD*)(a1 + 204) - 1);
			v24 = *(_DWORD*)(v22 + 4 * v23 + 4);
			if (v24 < 0)
				v24 = 0x80000000 - v24;
			if ((int)abs32(v24) > 84)
				break;
			*(_DWORD*)(a1 + 204) = v23;
		} while ((_DWORD)v23);
	}
	v25 = *(_DWORD*)(a1 + 72);
	if (*(_DWORD*)(a1 + 204) < v25)
		v25 = *(_DWORD*)(a1 + 204);
	*(_DWORD*)(a1 + 72) = v25;
	if (v25)
	{
		v26 = *(_QWORD*)(a1 + 80);
		do
		{
			v27 = *(_DWORD*)(a1 + 72);
			LODWORD(v39[0]) = 0;
			v28 = 0;
			v29 = (unsigned int)(v27 - 1);
			v30 = *(_DWORD*)(v26 + 4 * v29);
			if (v30 < 0)
				v28 = 0x80000000;
			if ((int)abs32(v28 - v30) > 84)
				break;
			*(_DWORD*)(a1 + 72) = v29;
		} while ((_DWORD)v29);
	}
	v31 = *(_QWORD*)(a1 + 256);
	v32 = 1.0;
	if (v31)
		v33 = *(float*)(v31 + 20);
	else
		v33 = 1.0;
	v34 = *(_QWORD*)(a1 + 248);
	*(float*)(a1 + 200) = v33;
	if (v34)
		v32 = *(float*)(v34 + 32);
	*(float*)(a1 + 196) = v32 * v33;
	*(_DWORD*)(a1 + 184) = (v21[83] >> 3) & 1;
	*(_DWORD*)(a1 + 188) = (v21[83] >> 20) & 1;
	if ((v21[85] & 0x400) == 0 || !v21[96] || (v35 = 1, (v21[96] & 0x8000) == 0))
		v35 = 0;
	*(_DWORD*)(a1 + 192) = v35;
	*(_DWORD*)(a2 + 32) = 0;
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 332i64) & 0x8000) != 0)
		*(_DWORD*)(a2 + 32) = 1;
	if (*(_DWORD*)(a1 + 188) && (v36 = *(_DWORD*)(a1 + 36)) != 0)
	{
		*(_DWORD*)a2 = v36;
		v37 = *(_DWORD*)(a1 + 40);
		*(_DWORD*)(a2 + 32) |= 8u;
		*(_DWORD*)(a2 + 16) = v37;
	}
	else
	{
		*(_DWORD*)a2 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 344i64);
	}
	v38 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 332i64);
	*(_WORD*)(a2 + 308) = 0;
	*(_DWORD*)(a2 + 300) = (v38 >> 12) & 1;
	return sub_14040D060(
		a1,
		a2,
		a3,
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 352i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 348i64));
}
// 14040C610: using guessed type unsigned __int64 var_20[4];

