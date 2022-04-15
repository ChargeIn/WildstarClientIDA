//----- (00000001408B33D0) ----------------------------------------------------
__int64 __fastcall sub_1408B33D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	char v8; // al
	float v9; // xmm2_4

	*(_DWORD*)(a1 + 588) = *a5;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	*(_QWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 16) = a4;
	*(_BYTE*)(a1 + 600) = v8;
	*(_DWORD*)(a1 + 572) = *(_DWORD*)(a4 + 16);
	*(_DWORD*)(a1 + 576) = *(_DWORD*)(a4 + 20);
	v9 = (float)*(int*)(a1 + 588);
	*(float*)(a1 + 568) = 1.0 - (float)(62.831856 / v9);
	*(_DWORD*)(a1 + 592) = (int)(float)(v9 * *(float*)(a4 + 8));
	return sub_1408B3760(a1, a5[1] & 0x3FFFF);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

