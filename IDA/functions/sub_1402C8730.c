//----- (00000001402C8730) ----------------------------------------------------
__int64 __fastcall sub_1402C8730(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // r10
	__int128* v5; // rax
	__int128 v6; // xmm0
	__int128* v7; // rax
	__int128 v8; // xmm0

	v2 = 12i64;
	*(_DWORD*)a1 = *(_DWORD*)a2;
	v3 = a1 - a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	v4 = 12i64;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 96);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 + 100);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 104);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 108);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 112);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 116);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 120);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 124);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 128);
	v5 = (__int128*)(a2 + 224);
	*(_OWORD*)(a1 + 144) = *(_OWORD*)(a2 + 144);
	*(_OWORD*)(a1 + 160) = *(_OWORD*)(a2 + 160);
	*(_OWORD*)(a1 + 176) = *(_OWORD*)(a2 + 176);
	*(_OWORD*)(a1 + 192) = *(_OWORD*)(a2 + 192);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a2 + 208);
	do
	{
		v6 = *v5++;
		*(__int128*)((char*)v5 + v3 - 16) = v6;
		--v4;
	} while (v4);
	v7 = (__int128*)(a2 + 416);
	do
	{
		v8 = *v7++;
		*(__int128*)((char*)v7 + v3 - 16) = v8;
		--v2;
	} while (v2);
	*(_OWORD*)(a1 + 608) = *(_OWORD*)(a2 + 608);
	*(_OWORD*)(a1 + 624) = *(_OWORD*)(a2 + 624);
	*(_OWORD*)(a1 + 640) = *(_OWORD*)(a2 + 640);
	*(_OWORD*)(a1 + 656) = *(_OWORD*)(a2 + 656);
	*(_OWORD*)(a1 + 672) = *(_OWORD*)(a2 + 672);
	*(_DWORD*)(a1 + 688) = *(_DWORD*)(a2 + 688);
	*(_DWORD*)(a1 + 692) = *(_DWORD*)(a2 + 692);
	*(_DWORD*)(a1 + 696) = *(_DWORD*)(a2 + 696);
	*(_DWORD*)(a1 + 700) = *(_DWORD*)(a2 + 700);
	*(_DWORD*)(a1 + 704) = *(_DWORD*)(a2 + 704);
	*(_DWORD*)(a1 + 708) = *(_DWORD*)(a2 + 708);
	*(_DWORD*)(a1 + 712) = *(_DWORD*)(a2 + 712);
	*(_DWORD*)(a1 + 716) = *(_DWORD*)(a2 + 716);
	*(_DWORD*)(a1 + 720) = *(_DWORD*)(a2 + 720);
	*(_DWORD*)(a1 + 724) = *(_DWORD*)(a2 + 724);
	*(_DWORD*)(a1 + 728) = *(_DWORD*)(a2 + 728);
	*(_DWORD*)(a1 + 732) = *(_DWORD*)(a2 + 732);
	*(_DWORD*)(a1 + 736) = *(_DWORD*)(a2 + 736);
	*(_DWORD*)(a1 + 740) = *(_DWORD*)(a2 + 740);
	*(_DWORD*)(a1 + 744) = *(_DWORD*)(a2 + 744);
	*(_DWORD*)(a1 + 748) = *(_DWORD*)(a2 + 748);
	*(_DWORD*)(a1 + 752) = *(_DWORD*)(a2 + 752);
	*(_DWORD*)(a1 + 756) = *(_DWORD*)(a2 + 756);
	*(_QWORD*)(a1 + 760) = *(_QWORD*)(a2 + 760);
	*(_QWORD*)(a1 + 768) = *(_QWORD*)(a2 + 768);
	*(_QWORD*)(a1 + 776) = *(_QWORD*)(a2 + 776);
	return a1;
}

