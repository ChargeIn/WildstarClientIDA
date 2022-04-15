//----- (00000001403B6760) ----------------------------------------------------
__int64 __fastcall sub_1403B6760(__int64 a1, unsigned int* a2)
{
	__int64* v2; // rdi
	__int64 v4; // rax
	int* v5; // rax
	int v6; // xmm0_4
	int v7; // xmm1_4
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = (__int64*)(a1 + 5784);
	v4 = sub_140245C00(a2[1]);
	if (v4)
	{
		v5 = sub_1405E6000(v2, *(_DWORD*)(v4 + 8), 1);
		v6 = a2[2];
		v7 = a2[3];
		v9[0] = a2[1];
		v9[1] = v6;
		v9[2] = v7;
		sub_1405E7080((__int64*)v5 + 11, v9);
		sub_1405E5900(v2, *a2, a2[1], 0);
	}
	return 0i64;
}

