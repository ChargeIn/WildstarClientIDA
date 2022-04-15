//----- (000000014085CFE0) ----------------------------------------------------
__int64 __fastcall sub_14085CFE0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	_DWORD* a6,
	int a7,
	_DWORD* a8,
	char a9,
	int a10,
	__int64 a11,
	__int64 a12)
{
	_DWORD* v14; // rax
	int v15; // eax
	int v16; // ecx
	__int64 v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rax
	char v21; // al
	__int64 v22; // rcx

	*(_QWORD*)a1 = off_1409A4340;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 16) = &off_1409A48A0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a5 + 24);
	*(_QWORD*)(a1 + 96) = *(_QWORD*)a5;
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a5 + 8);
	v14 = *(_DWORD**)(a5 + 16);
	if (v14)
		++* v14;
	*(_QWORD*)(a1 + 112) = v14;
	*(_BYTE*)(a1 + 144) &= 0xFCu;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_BYTE*)(a1 + 378) &= 0x80u;
	*(_DWORD*)(a1 + 152) = a7;
	*(_QWORD*)(a1 + 160) = a2;
	*(_DWORD*)(a1 + 372) = a10;
	*(_QWORD*)(a1 + 168) = a3;
	*(_QWORD*)(a1 + 176) = a4;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 284) = 0i64;
	*(_DWORD*)(a1 + 292) = 0;
	*(_DWORD*)(a1 + 296) = 1065353216;
	*(_QWORD*)(a1 + 300) = 1065353216i64;
	*(_WORD*)(a1 + 380) = 0;
	*(_WORD*)(a1 + 376) = 1;
	*(_BYTE*)(a1 + 379) = *(_BYTE*)(a1 + 379) & 0xF | 0x10;
	*(_BYTE*)(a1 + 382) = (a9 << 7) | 0x20;
	*(_BYTE*)(a1 + 383) = 2 * (a10 != 0);
	*(_DWORD*)(a1 + 388) = *a8;
	*(_DWORD*)(a1 + 392) = a8[1];
	*(_DWORD*)(a1 + 396) = a8[2];
	v15 = a8[3];
	*(_QWORD*)(a1 + 404) = 0i64;
	*(_DWORD*)(a1 + 400) = v15;
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_BYTE*)(a1 + 443) &= 0xF8u;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_WORD*)(a1 + 440) = 0;
	*(_BYTE*)(a1 + 442) = 1;
	*(_DWORD*)(a1 + 464) = 1120534528;
	*(_QWORD*)(a1 + 520) = a11;
	*(_QWORD*)(a1 + 528) = a12;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 536) = sub_140852980(a2);
	v16 = dword_140C62460++;
	v17 = *(_QWORD*)(a1 + 176);
	*(_DWORD*)(a1 + 392) = v16;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_DWORD*)(a1 + 512) = 0;
	*(_DWORD*)(v17 + 136) ^= (*(_DWORD*)(v17 + 136) ^ (*(_DWORD*)(v17 + 136) + 1)) & 0x3FFFFFFF;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	v18 = *(_QWORD*)(a2 + 56);
	v19 = *(_QWORD*)(v18 + 24);
	v20 = (_QWORD*)(v18 + 24);
	if (v19)
	{
		*(_QWORD*)(a1 + 32) = v19;
		*v20 = a1;
	}
	else
	{
		*v20 = a1;
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	if ((*(_BYTE*)(a2 + 91) & 8) != 0)
	{
		v21 = 1;
	}
	else
	{
		v22 = *(_QWORD*)(a2 + 72);
		if (v22 || (v22 = *(_QWORD*)(a2 + 64)) != 0)
			v21 = sub_14085EF80(v22);
		else
			v21 = 0;
	}
	*(_BYTE*)(a1 + 384) &= ~1u;
	*(_DWORD*)(a1 + 196) &= 0xFFFC0004;
	*(_BYTE*)(a1 + 384) |= v21 & 1;
	*(_DWORD*)(a1 + 196) |= 4u;
	*(_DWORD*)(a1 + 304) = *a6;
	*(_DWORD*)(a1 + 308) = a6[1];
	*(_DWORD*)(a1 + 312) = a6[2];
	*(_DWORD*)(a1 + 316) = a6[3];
	*(_DWORD*)(a1 + 320) = a6[4];
	*(_DWORD*)(a1 + 324) = a6[5];
	*(_DWORD*)(a1 + 328) = a6[6];
	*(_DWORD*)(a1 + 332) = a6[7];
	*(_DWORD*)(a1 + 336) = a6[8];
	*(_DWORD*)(a1 + 340) = a6[9];
	*(_DWORD*)(a1 + 344) = a6[10];
	*(_DWORD*)(a1 + 348) = a6[11];
	*(_DWORD*)(a1 + 352) = a6[12];
	*(_DWORD*)(a1 + 356) = a6[13];
	*(_DWORD*)(a1 + 360) = a6[14];
	*(_DWORD*)(a1 + 364) = a6[15];
	*(_DWORD*)(a1 + 368) = a6[16];
	return a1;
}
// 1409A4340: using guessed type __int64 (__fastcall *off_1409A4340[17])();
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();
// 140C62460: using guessed type int dword_140C62460;

