//----- (00000001404B4D50) ----------------------------------------------------
__int64 __fastcall sub_1404B4D50(__int64 a1, __int64* a2, _QWORD* a3, int a4)
{
	__int64 v4; // rax
	__int64 v6; // rax
	__int64 v7; // rcx

	v4 = *a2;
	*(_DWORD*)(a1 + 8) = a4;
	*(_QWORD*)a1 = v4;
	*(_QWORD*)(a1 + 184) = a2[2];
	v6 = a2[3];
	*(_DWORD*)(a1 + 208) = 23;
	*(_QWORD*)(a1 + 192) = v6;
	*(_DWORD*)(a1 + 212) = 4;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_DWORD*)(a1 + 224) = 0;
	LODWORD(v6) = *((_DWORD*)a2 + 8);
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 240) = 0;
	*(_DWORD*)(a1 + 228) = v6;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 248) = a3;
	v7 = a1 + 256;
	*(_QWORD*)v7 = *a3;
	*a3 = a1;
	if (*(_QWORD*)v7)
		*(_QWORD*)(*(_QWORD*)v7 + 248i64) = v7;
	if (a1 != -200)
		sub_1401E82F0((__int64*)(a1 + 200), -1.1754944e-38);
	*(_QWORD*)(a1 + 12) = 0i64;
	*(_QWORD*)(a1 + 20) = 0i64;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_QWORD*)(a1 + 36) = 0i64;
	*(_QWORD*)(a1 + 44) = 0i64;
	*(_QWORD*)(a1 + 52) = 0i64;
	*(_QWORD*)(a1 + 60) = 0i64;
	*(_QWORD*)(a1 + 68) = 0i64;
	*(_WORD*)(a1 + 76) = 0;
	sub_1407E4830((int*)(a1 + 78), 0i64, 0x66ui64);
	return a1;
}

