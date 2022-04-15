//----- (000000014036EA20) ----------------------------------------------------
__int64 __fastcall sub_14036EA20(__int64 a1, __int64 a2)
{
	__int64 v3; // r9
	__int128* v4; // rax
	__int64 v5; // rcx
	__int128 v6; // xmm0

	*(_QWORD*)a1 = *(_QWORD*)a2;
	v3 = a1 - a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	v4 = (__int128*)(a2 + 64);
	*(_OWORD*)(a1 + 16) = *(_OWORD*)(a2 + 16);
	*(_OWORD*)(a1 + 32) = *(_OWORD*)(a2 + 32);
	*(_OWORD*)(a1 + 48) = *(_OWORD*)(a2 + 48);
	v5 = 8i64;
	do
	{
		v6 = *v4++;
		*(__int128*)((char*)v4 + v3 - 16) = v6;
		--v5;
	} while (v5);
	*(_OWORD*)(a1 + 192) = *(_OWORD*)(a2 + 192);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a2 + 208);
	*(_OWORD*)(a1 + 224) = *(_OWORD*)(a2 + 224);
	*(_OWORD*)(a1 + 240) = *(_OWORD*)(a2 + 240);
	*(_OWORD*)(a1 + 256) = *(_OWORD*)(a2 + 256);
	*(_OWORD*)(a1 + 272) = *(_OWORD*)(a2 + 272);
	*(_QWORD*)(a1 + 288) = *(_QWORD*)(a2 + 288);
	*(_DWORD*)(a1 + 296) = *(_DWORD*)(a2 + 296);
	*(_OWORD*)(a1 + 304) = *(_OWORD*)(a2 + 304);
	*(_OWORD*)(a1 + 320) = *(_OWORD*)(a2 + 320);
	*(_OWORD*)(a1 + 336) = *(_OWORD*)(a2 + 336);
	*(_DWORD*)(a1 + 352) = *(_DWORD*)(a2 + 352);
	*(_DWORD*)(a1 + 356) = *(_DWORD*)(a2 + 356);
	*(_QWORD*)(a1 + 368) = *(_QWORD*)(a2 + 368);
	*(_QWORD*)(a1 + 360) = *(_QWORD*)(a2 + 360);
	*(_QWORD*)(a1 + 384) = *(_QWORD*)(a2 + 384);
	*(_QWORD*)(a1 + 376) = *(_QWORD*)(a2 + 376);
	*(_QWORD*)(a1 + 400) = *(_QWORD*)(a2 + 400);
	*(_QWORD*)(a1 + 392) = *(_QWORD*)(a2 + 392);
	*(_QWORD*)(a1 + 416) = *(_QWORD*)(a2 + 416);
	*(_QWORD*)(a1 + 408) = *(_QWORD*)(a2 + 408);
	*(_QWORD*)(a1 + 432) = *(_QWORD*)(a2 + 432);
	*(_QWORD*)(a1 + 424) = *(_QWORD*)(a2 + 424);
	*(_QWORD*)(a1 + 448) = *(_QWORD*)(a2 + 448);
	*(_QWORD*)(a1 + 440) = *(_QWORD*)(a2 + 440);
	*(_QWORD*)(a1 + 464) = *(_QWORD*)(a2 + 464);
	*(_QWORD*)(a1 + 456) = *(_QWORD*)(a2 + 456);
	*(_QWORD*)(a1 + 480) = *(_QWORD*)(a2 + 480);
	*(_QWORD*)(a1 + 472) = *(_QWORD*)(a2 + 472);
	*(_QWORD*)(a1 + 496) = *(_QWORD*)(a2 + 496);
	*(_QWORD*)(a1 + 488) = *(_QWORD*)(a2 + 488);
	*(_DWORD*)(a1 + 504) = *(_DWORD*)(a2 + 504);
	*(_DWORD*)(a1 + 508) = *(_DWORD*)(a2 + 508);
	*(_QWORD*)(a1 + 512) = *(_QWORD*)(a2 + 512);
	*(_DWORD*)(a1 + 520) = *(_DWORD*)(a2 + 520);
	*(_DWORD*)(a1 + 524) = *(_DWORD*)(a2 + 524);
	*(_OWORD*)(a1 + 528) = *(_OWORD*)(a2 + 528);
	*(_QWORD*)(a1 + 544) = *(_QWORD*)(a2 + 544);
	return a1;
}

