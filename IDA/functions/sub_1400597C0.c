//----- (00000001400597C0) ----------------------------------------------------
__int64 __fastcall sub_1400597C0(__int64 a1)
{
	__int64 v1; // rsi
	_QWORD* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rcx
	char v6; // al
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rax

	v1 = *(_QWORD*)(a1 + 32);
	v3 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v1 + 16))(
		*(_QWORD*)(v1 + 24),
		0i64,
		0i64,
		184i64);
	v4 = (__int64)v3;
	if (!v3)
		sub_140061040(a1, 4);
	*(_QWORD*)(v1 + 120) += 184i64;
	v5 = *(_QWORD*)(a1 + 32);
	*v3 = *(_QWORD*)(v5 + 40);
	v6 = *(_BYTE*)(v5 + 32);
	*(_QWORD*)(v5 + 40) = v4;
	*(_BYTE*)(v4 + 8) = 8;
	*(_BYTE*)(v4 + 9) = v6 & 3;
	v7 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(v4 + 98) = 0x1000000;
	*(_QWORD*)(v4 + 32) = v7;
	*(_QWORD*)(v4 + 64) = 0i64;
	*(_QWORD*)(v4 + 88) = 0i64;
	*(_QWORD*)(v4 + 168) = 0i64;
	*(_QWORD*)(v4 + 112) = 0i64;
	*(_QWORD*)(v4 + 104) = 0i64;
	*(_QWORD*)(v4 + 152) = 0i64;
	*(_WORD*)(v4 + 96) = 0;
	*(_BYTE*)(v4 + 10) = 0;
	*(_QWORD*)(v4 + 40) = 0i64;
	*(_QWORD*)(v4 + 80) = 0i64;
	*(_QWORD*)(v4 + 48) = 0i64;
	*(_QWORD*)(v4 + 176) = 0i64;
	*(_DWORD*)(v4 + 128) = 0;
	sub_140059520(v4, a1);
	*(_QWORD*)(v4 + 120) = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(v4 + 128) = *(_DWORD*)(a1 + 128);
	*(_BYTE*)(v4 + 100) = *(_BYTE*)(a1 + 100);
	v8 = *(_DWORD*)(a1 + 104);
	*(_DWORD*)(v4 + 104) = v8;
	v9 = *(_QWORD*)(a1 + 112);
	*(_DWORD*)(v4 + 108) = v8;
	*(_QWORD*)(v4 + 112) = v9;
	return v4;
}

