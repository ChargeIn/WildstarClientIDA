//----- (00000001400CC740) ----------------------------------------------------
void __fastcall sub_1400CC740(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int128 v3; // xmm1
	__int128 v4; // xmm0
	__int128 v5[5]; // [rsp+20h] [rbp-78h] BYREF
	int v6; // [rsp+70h] [rbp-28h]

	v2 = *(_DWORD*)(a2 + 80);
	v3 = *(_OWORD*)(a2 + 32);
	v5[0] = *(_OWORD*)a2;
	v6 = v2 | 0x300;
	v4 = *(_OWORD*)(a2 + 16);
	v5[2] = v3;
	v5[1] = v4;
	v5[3] = *(_OWORD*)(a2 + 48);
	v5[4] = *(_OWORD*)(a2 + 64);
	sub_1400CC680(a1, (__int64)v5);
}

