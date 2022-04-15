//----- (00000001404C0060) ----------------------------------------------------
__int64 __fastcall sub_1404C0060(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rsi
	__int64 v5; // rdi
	int v9; // ecx
	int v10; // eax
	int v11; // eax
	__int64 v13[10]; // [rsp+20h] [rbp-88h] BYREF

	v4 = a3 + 96;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	v5 = a1 + 320;
	*(_QWORD*)a1 = off_140B68950;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = *(_QWORD*)a3;
	*(_QWORD*)(a1 + 88) = *(_QWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 16);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a3 + 20);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a3 + 24);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a3 + 28);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a3 + 32);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a3 + 36);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a3 + 40);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a3 + 44);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a3 + 48);
	*(_OWORD*)(a1 + 144) = *(_OWORD*)(a3 + 64);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a3 + 80);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a3 + 84);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a3 + 88);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a3 + 92);
	*(_OWORD*)(a1 + 176) = *(_OWORD*)(a3 + 96);
	*(_OWORD*)(a1 + 192) = *(_OWORD*)(a3 + 112);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a3 + 128);
	*(_OWORD*)(a1 + 224) = *(_OWORD*)(a3 + 144);
	*(_QWORD*)(a1 + 240) = *(_QWORD*)(a3 + 160);
	*(_DWORD*)(a1 + 248) = *(_DWORD*)(a3 + 168);
	*(_OWORD*)(a1 + 256) = *(_OWORD*)(a3 + 64);
	*(_DWORD*)(a1 + 272) = *(_DWORD*)(a3 + 80);
	*(_DWORD*)(a1 + 276) = *(_DWORD*)(a3 + 84);
	*(_DWORD*)(a1 + 280) = *(_DWORD*)(a3 + 88);
	*(_DWORD*)(a1 + 284) = *(_DWORD*)(a3 + 92);
	*(_QWORD*)(a1 + 296) = a2;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 304) = a4;
	*(_DWORD*)(a1 + 308) = 0;
	sub_1404BD000(a1 + 384, (__m128*) & ymmword_140C78390);
	*(__m256*)(v5 + 96) = ymmword_140C78390;
	*(_OWORD*)(v5 + 128) = xmmword_140C783B0;
	*(_OWORD*)(v5 + 144) = xmmword_140C783C0;
	v9 = *(_DWORD*)(a2 + 156) + 1;
	v10 = *(_DWORD*)(a2 + 152) << 24;
	*(_DWORD*)(a2 + 156) = v9;
	*(_DWORD*)(a1 + 496) = v9 | v10;
	sub_1404BD000(a1 + 512, (__m128*) & ymmword_140C78390);
	*(__m256*)(a1 + 544) = ymmword_140C78390;
	*(_OWORD*)(a1 + 576) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 592) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_DWORD*)(a1 + 640) = 0;
	*(_DWORD*)(a1 + 644) = 1;
	*(_QWORD*)(a1 + 648) = 1i64;
	*(_DWORD*)(a1 + 656) = 1;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_DWORD*)(a1 + 672) = *(_DWORD*)(a3 + 168);
	v11 = *(_DWORD*)(a3 + 168);
	*(_DWORD*)(a1 + 680) = 0;
	*(_DWORD*)(a1 + 676) = v11;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_DWORD*)(a1 + 688) = 1414420037;
	*(_DWORD*)(a1 + 756) = 0;
	*(_DWORD*)(a1 + 760) = 1;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_DWORD*)(a1 + 768) = 1414420037;
	*(_DWORD*)(a1 + 836) = 0;
	sub_1407E4830((int*)v5, 0i64, 0xB0ui64);
	v13[0] = v4;
	sub_1401AFC20(v13, (double*)(a1 + 544));
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B68950: using guessed type __int64 (__fastcall *off_140B68950[39])();
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 1404C0060: using guessed type __int64 var_88[10];

