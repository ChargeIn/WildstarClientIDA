//----- (000000014039C430) ----------------------------------------------------
__int64 __fastcall sub_14039C430(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rax
	int v4; // edi
	int v7; // edx
	__m128* v8; // rax
	__m128* v9; // rbp
	unsigned __int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // ebp
	__int64 v15; // rcx
	int v16; // ecx
	__int64 v17; // rbp
	int v18; // eax
	int v19; // eax
	unsigned int v20; // eax
	unsigned int v21; // ebp
	__int64 v22; // rax
	int v23; // [rsp+40h] [rbp-108h] BYREF
	__int64 v24; // [rsp+48h] [rbp-100h]
	__int64(__fastcall * v25)(); // [rsp+50h] [rbp-F8h]
	__int64 v26; // [rsp+58h] [rbp-F0h]
	int v27[58]; // [rsp+60h] [rbp-E8h] BYREF
	__int64 v28; // [rsp+150h] [rbp+8h] BYREF
	int v29; // [rsp+160h] [rbp+18h] BYREF
	__int64 v30; // [rsp+168h] [rbp+20h] BYREF

	v29 = a3;
	v3 = *(_QWORD*)(a1 + 25744);
	v4 = 0;
	v7 = 0;
	if (v3)
		v7 = *(_DWORD*)(v3 + 264);
	v8 = (__m128*)sub_1403D90D0(a1, v7);
	v9 = v8;
	if (!v8)
		return 31i64;
	if (!v8[1].m128_u64[1])
		return 91i64;
	sub_14046C300(v8, 1, 0);
	v11 = v9[400].m128_u64[1];
	if (!*(_BYTE*)(v11 + 4) || !*(_QWORD*)(v11 + 64))
		return 100i64;
	if (!a2)
	{
		if ((dword_140DC21B0 & 1) != 0)
		{
			a2 = dword_140DC21B4;
		}
		else
		{
			dword_140DC21B0 |= 1u;
			v12 = sub_140200220(0x19Eu);
			if (v12)
			{
				a2 = *(_DWORD*)(v12 + 4);
				dword_140DC21B4 = a2;
			}
			else
			{
				a2 = 0;
				dword_140DC21B4 = 0;
			}
		}
	}
	v13 = sub_1403ACD90(qword_140C65B70, a2, *(_QWORD*)(a1 + 120));
	v14 = v13;
	if (!v13)
		return 4i64;
	if (*(_DWORD*)(*(_QWORD*)(v13 + 112) + 24i64) == 5)
	{
		v15 = *(_QWORD*)(a1 + 29064);
		if (v15)
		{
			v16 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 104i64))(v15) + 4);
			if (((unsigned int)(v16 - 1) <= 2 || v16 == 7)
				&& (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 29072)) < 0x3E8)
			{
				return 262i64;
			}
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		v17 = *(_QWORD*)(a1 + 25744);
		*(_DWORD*)(a1 + 26184) = 0;
		v18 = 0;
		if (v17)
			v18 = *(_DWORD*)(v17 + 264);
		*(_DWORD*)(a1 + 26188) = v18;
		*(_DWORD*)(a1 + 26192) = a2;
		v23 = 0;
		v26 = 0i64;
		v24 = sub_14001C280(a1);
		v25 = sub_14039EA90;
		v19 = sub_1404720D0(v17);
		sub_140195960(a1 + 26200, v19, (__int64)&v23, 4);
		return 2i64;
	}
	sub_1407E4830(v27, 0i64, 0xC8ui64);
	v27[7] = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v27[1] = a2;
	v27[21] = 1;
	v27[22] = 1;
	v29 = 0;
	v30 = 0i64;
	v20 = sub_1403988D0(a1, (unsigned int)v27, v14, 0, (__int64)&v29, (__int64)&v30, (__int64)&v28);
	v21 = v20;
	if (!v20 || v20 == 317)
	{
		v28 = 0i64;
		LODWORD(v28) = *(_DWORD*)(v30 + 96);
		HIDWORD(v28) = *(_DWORD*)(v30 + 344);
		sub_1403F4900(a1, 0x97u, (__int64)&v28);
		return v21;
	}
	sub_1403B5250(v20);
	sub_1400035B0();
	if (!(_DWORD)v28)
		return v21;
	v22 = *(_QWORD*)(a1 + 25744);
	*(_DWORD*)(a1 + 26184) = 0;
	if (v22)
		v4 = *(_DWORD*)(v22 + 264);
	*(_DWORD*)(a1 + 26188) = v4;
	*(_DWORD*)(a1 + 26192) = a2;
	sub_14039E400(a1);
	return v21;
}
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC21B0: using guessed type int dword_140DC21B0;
// 140DC21B4: using guessed type int dword_140DC21B4;

