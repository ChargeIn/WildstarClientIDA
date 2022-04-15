#include "../winhttp.h"

//----- (000000014039C1E0) ----------------------------------------------------
__int64 __fastcall sub_14039C1E0(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 v6; // rax
	unsigned int v7; // ecx
	__int64 v8; // r14
	__int64 v9; // rax
	unsigned int v10; // edi
	__int64 v11; // rsi
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	unsigned int v15; // eax
	unsigned int v16; // edi
	int v17; // r8d
	int v18; // eax
	__int64 v19; // [rsp+40h] [rbp-128h] BYREF
	int v20; // [rsp+48h] [rbp-120h] BYREF
	__int64 v21; // [rsp+50h] [rbp-118h]
	__int64(__fastcall * v22)(); // [rsp+58h] [rbp-110h]
	__int64 v23; // [rsp+60h] [rbp-108h]
	int v24[52]; // [rsp+70h] [rbp-F8h] BYREF
	int v25; // [rsp+178h] [rbp+10h] BYREF
	int v26; // [rsp+180h] [rbp+18h] BYREF
	__int64 v27; // [rsp+188h] [rbp+20h] BYREF

	v25 = a2;
	v4 = sub_1403D90D0(a1, a2);
	if (!v4)
		return 31i64;
	v6 = *(_QWORD*)(v4 + 24);
	if (!v6)
		return 31i64;
	v7 = *(_DWORD*)(v6 + 108);
	if (!v7 || !sub_1401ED460(v7))
		return 31i64;
	v8 = *(_QWORD*)(a1 + 120);
	v9 = sub_140200220(0x1D8u);
	if (v9)
		v10 = *(_DWORD*)(v9 + 4);
	else
		v10 = 0;
	v11 = sub_1403ACD90(qword_140C65B70, v10, v8);
	if (!v11)
		return 4i64;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		*(_DWORD*)(a1 + 26184) = 2;
		*(_DWORD*)(a1 + 26188) = a2;
		v20 = 0;
		v12 = sub_14001C280(a1);
		v13 = *(_QWORD*)(a1 + 25744);
		v23 = 0i64;
		v21 = v12;
		v22 = sub_14039EA90;
		v14 = sub_1404720D0(v13);
		sub_140195960(a1 + 26200, v14, (__int64)&v20, 4);
		return 2i64;
	}
	else
	{
		sub_1407E4830(v24, 0i64, 0xC8ui64);
		v24[7] = *(_DWORD*)(v8 + 8);
		v24[1] = v10;
		v24[22] = 1;
		v19 = 0i64;
		v15 = sub_1403988D0(a1, (unsigned int)v24, v11, 0, (__int64)&v25, (__int64)&v19, (__int64)&v26);
		v16 = v15;
		if (!v15 || v15 == 317)
		{
			v27 = 0i64;
			LODWORD(v27) = *(_DWORD*)(v19 + 96);
			HIDWORD(v27) = *(_DWORD*)(v19 + 344);
			sub_1403F4900(a1, 0x98u, (__int64)&v27);
		}
		else
		{
			sub_1403B5250(v15);
			sub_1400035B0();
			if (v26 == v17)
			{
				sub_1403A12A0(a1, v16, v11, 0);
			}
			else
			{
				v18 = v25;
				*(_DWORD*)(a1 + 26184) = 2;
				*(_DWORD*)(a1 + 26188) = v18;
				sub_14039E400(a1);
			}
		}
		return v16;
	}
}
// 14039C39A: variable 'v17' is possibly undefined
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 140C65B70: using guessed type __int64 qword_140C65B70;

