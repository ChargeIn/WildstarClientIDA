//----- (000000014038E1C0) ----------------------------------------------------
__int64 __fastcall sub_14038E1C0(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	__int64 v5; // r10
	__int64 v6; // rcx
	__int128 v7; // xmm0
	__int64 v8; // rax
	__int128 v9; // xmm0

	v2 = 2i64;
	*(_OWORD*)a1 = *(_OWORD*)a2;
	v4 = a2 + 96;
	v5 = 2i64;
	*(_OWORD*)(a1 + 16) = *(_OWORD*)(a2 + 16);
	*(_OWORD*)(a1 + 32) = *(_OWORD*)(a2 + 32);
	*(_OWORD*)(a1 + 48) = *(_OWORD*)(a2 + 48);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 64);
	v6 = a1 - a2;
	do
	{
		v7 = *(_OWORD*)(v4 - 16);
		v4 += 64i64;
		*(_OWORD*)(v6 + v4 - 80) = v7;
		*(_OWORD*)(v6 + v4 - 64) = *(_OWORD*)(v4 - 64);
		*(_OWORD*)(v6 + v4 - 48) = *(_OWORD*)(v4 - 48);
		*(_OWORD*)(v6 + v4 - 32) = *(_OWORD*)(v4 - 32);
		--v5;
	} while (v5);
	v8 = a2 + 352;
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a2 + 208);
	*(_OWORD*)(a1 + 224) = *(_OWORD*)(a2 + 224);
	*(_OWORD*)(a1 + 240) = *(_OWORD*)(a2 + 240);
	*(_OWORD*)(a1 + 256) = *(_OWORD*)(a2 + 256);
	*(_OWORD*)(a1 + 272) = *(_OWORD*)(a2 + 272);
	*(_OWORD*)(a1 + 288) = *(_OWORD*)(a2 + 288);
	*(_OWORD*)(a1 + 304) = *(_OWORD*)(a2 + 304);
	*(_OWORD*)(a1 + 320) = *(_OWORD*)(a2 + 320);
	do
	{
		v9 = *(_OWORD*)(v8 - 16);
		v8 += 64i64;
		*(_OWORD*)(v8 + v6 - 80) = v9;
		*(_OWORD*)(v8 + v6 - 64) = *(_OWORD*)(v8 - 64);
		*(_OWORD*)(v8 + v6 - 48) = *(_OWORD*)(v8 - 48);
		*(_OWORD*)(v8 + v6 - 32) = *(_OWORD*)(v8 - 32);
		--v2;
	} while (v2);
	*(_OWORD*)(a1 + 464) = *(_OWORD*)(a2 + 464);
	*(_OWORD*)(a1 + 480) = *(_OWORD*)(a2 + 480);
	*(_OWORD*)(a1 + 496) = *(_OWORD*)(a2 + 496);
	*(_OWORD*)(a1 + 512) = *(_OWORD*)(a2 + 512);
	*(_OWORD*)(a1 + 528) = *(_OWORD*)(a2 + 528);
	*(_OWORD*)(a1 + 544) = *(_OWORD*)(a2 + 544);
	*(_OWORD*)(a1 + 560) = *(_OWORD*)(a2 + 560);
	*(_OWORD*)(a1 + 576) = *(_OWORD*)(a2 + 576);
	*(_OWORD*)(a1 + 592) = *(_OWORD*)(a2 + 592);
	*(_DWORD*)(a1 + 608) = *(_DWORD*)(a2 + 608);
	*(_DWORD*)(a1 + 612) = *(_DWORD*)(a2 + 612);
	*(_DWORD*)(a1 + 616) = *(_DWORD*)(a2 + 616);
	*(_DWORD*)(a1 + 620) = *(_DWORD*)(a2 + 620);
	*(_DWORD*)(a1 + 624) = *(_DWORD*)(a2 + 624);
	*(_DWORD*)(a1 + 628) = *(_DWORD*)(a2 + 628);
	*(_DWORD*)(a1 + 632) = *(_DWORD*)(a2 + 632);
	*(_DWORD*)(a1 + 636) = *(_DWORD*)(a2 + 636);
	*(_DWORD*)(a1 + 640) = *(_DWORD*)(a2 + 640);
	*(_DWORD*)(a1 + 644) = *(_DWORD*)(a2 + 644);
	*(_OWORD*)(a1 + 656) = *(_OWORD*)(a2 + 656);
	*(_OWORD*)(a1 + 672) = *(_OWORD*)(a2 + 672);
	*(_QWORD*)(a1 + 688) = *(_QWORD*)(a2 + 688);
	*(_QWORD*)(a1 + 696) = *(_QWORD*)(a2 + 696);
	*(_QWORD*)(a1 + 704) = *(_QWORD*)(a2 + 704);
	*(_QWORD*)(a1 + 712) = *(_QWORD*)(a2 + 712);
	return a1;
}

