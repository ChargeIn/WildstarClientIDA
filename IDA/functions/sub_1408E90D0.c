//----- (00000001408E90D0) ----------------------------------------------------
__m128* __fastcall sub_1408E90D0(__int64 a1, __m128* a2, __int64 a3)
{
	_QWORD* v3; // r9
	_QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF

	if (*(_DWORD*)a1 == 1024)
	{
		v3 = *(_QWORD**)(a1 + 72);
		*(_QWORD*)(a1 + 80) = v5;
		v5[0] = *v3;
		v5[1] = v3[64];
		v5[2] = *v3;
		v5[3] = v3[128];
		v5[4] = *v3;
		v5[5] = v3[192];
		v5[6] = v3[128];
		v5[7] = v3[192];
		v5[8] = v3[256];
		v5[9] = v3[384];
		v5[10] = v3[384];
		v5[11] = v3[576];
	}
	return sub_1408E99F0(a3, a2, 1i64, 1, (int*)(a1 + 8), (_DWORD*)a1);
}
