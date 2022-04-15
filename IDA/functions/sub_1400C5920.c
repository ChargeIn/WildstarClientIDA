//----- (00000001400C5920) ----------------------------------------------------
__int64 __fastcall sub_1400C5920(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	int v9; // eax
	_OWORD* v11; // rcx
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	__int64 v17; // rax
	__int64 v18; // rax
	unsigned int* v19; // rsi
	unsigned int* v20; // r14
	int* v21; // rax
	int* v22; // rax
	__int64 v23; // rcx
	int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rdx
	__int64 v29; // rcx
	unsigned __int64 v30; // rbx
	__int64 v31; // r8
	__int64 v32; // rdx
	__int64 v33; // rcx
	int v34; // r9d
	unsigned __int64 v35; // rbx
	__int64 v36; // r8
	__int64 v37; // rdx
	__int64 v38; // rcx
	int v39; // r9d
	void(__fastcall * **v40)(_QWORD); // rcx
	__int128 v42; // [rsp+20h] [rbp-58h] BYREF
	__int128 v43; // [rsp+30h] [rbp-48h] BYREF
	char v44; // [rsp+80h] [rbp+8h] BYREF
	char v45; // [rsp+88h] [rbp+10h] BYREF

	*(_QWORD*)a1 = off_140B56570;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a3;
	v9 = dword_140C8A07C + 1;
	*(_DWORD*)(a1 + 24) = dword_140C8A07C + 1;
	*(_BYTE*)(a1 + 30) &= ~1u;
	*(_QWORD*)(a1 + 32) = a2;
	dword_140C8A07C = v9;
	*(_BYTE*)(a1 + 28) = *(_BYTE*)(a1 + 28) & 0xA2 | 9;
	LOBYTE(v9) = *(_BYTE*)(a1 + 29) & 0x78 | 1;
	*(_DWORD*)(a1 + 40) = 0;
	*(_BYTE*)(a1 + 29) = v9;
	v11 = a5;
	*(_OWORD*)(a1 + 64) = *a5;
	*(_QWORD*)(a1 + 80) = *((_QWORD*)v11 + 2);
	*(_QWORD*)(a1 + 88) = *((_QWORD*)v11 + 3);
	*(_QWORD*)(a1 + 96) = *((_QWORD*)v11 + 4);
	*(_QWORD*)(a1 + 104) = *((_QWORD*)v11 + 5);
	*(_DWORD*)(a1 + 112) = *((_DWORD*)v11 + 12);
	*(_DWORD*)(a1 + 116) = *((_DWORD*)v11 + 13);
	*(_DWORD*)(a1 + 120) = *((_DWORD*)v11 + 14);
	*(_DWORD*)(a1 + 124) = *((_DWORD*)v11 + 15);
	*(_DWORD*)(a1 + 128) = *((_DWORD*)v11 + 16);
	*(_DWORD*)(a1 + 132) = *((_DWORD*)v11 + 17);
	*(_DWORD*)(a1 + 136) = *((_DWORD*)v11 + 18);
	*(_DWORD*)(a1 + 140) = *((_DWORD*)v11 + 19);
	*(_DWORD*)(a1 + 144) = *((_DWORD*)v11 + 20);
	*(_OWORD*)(a1 + 160) = *v11;
	*(_QWORD*)(a1 + 176) = *((_QWORD*)v11 + 2);
	*(_QWORD*)(a1 + 184) = *((_QWORD*)v11 + 3);
	*(_QWORD*)(a1 + 192) = *((_QWORD*)v11 + 4);
	*(_QWORD*)(a1 + 200) = *((_QWORD*)v11 + 5);
	*(_DWORD*)(a1 + 208) = *((_DWORD*)v11 + 12);
	*(_DWORD*)(a1 + 212) = *((_DWORD*)v11 + 13);
	*(_DWORD*)(a1 + 216) = *((_DWORD*)v11 + 14);
	*(_DWORD*)(a1 + 220) = *((_DWORD*)v11 + 15);
	*(_DWORD*)(a1 + 224) = *((_DWORD*)v11 + 16);
	*(_DWORD*)(a1 + 228) = *((_DWORD*)v11 + 17);
	*(_DWORD*)(a1 + 232) = *((_DWORD*)v11 + 18);
	*(_DWORD*)(a1 + 236) = *((_DWORD*)v11 + 19);
	*(_DWORD*)(a1 + 240) = *((_DWORD*)v11 + 20);
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_DWORD*)(a1 + 264) = 32000;
	*(_QWORD*)(a1 + 268) = 32000i64;
	*(_DWORD*)(a1 + 276) = 0;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	v12 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 304) = v12;
	*(_QWORD*)v12 = v12;
	*(_QWORD*)(*(_QWORD*)(a1 + 304) + 8i64) = *(_QWORD*)(a1 + 304);
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 1i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 384) = -1i64;
	*(_QWORD*)(a1 + 392) = 3i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_DWORD*)(a1 + 424) = 0;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	v13 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 504) = v13;
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_BYTE*)v13 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 504) + 16i64) = *(_QWORD*)(a1 + 504);
	*(_QWORD*)(*(_QWORD*)(a1 + 504) + 24i64) = *(_QWORD*)(a1 + 504);
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	*(_QWORD*)(a1 + 536) = 0i64;
	*(_QWORD*)(a1 + 544) = 0i64;
	v14 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 560) = v14;
	*(_QWORD*)v14 = v14;
	*(_QWORD*)(*(_QWORD*)(a1 + 560) + 8i64) = *(_QWORD*)(a1 + 560);
	v15 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 576) = v15;
	*(_QWORD*)v15 = v15;
	*(_QWORD*)(*(_QWORD*)(a1 + 576) + 8i64) = *(_QWORD*)(a1 + 576);
	v16 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 592) = v16;
	*(_QWORD*)v16 = v16;
	*(_QWORD*)(*(_QWORD*)(a1 + 592) + 8i64) = *(_QWORD*)(a1 + 592);
	LODWORD(v16) = dword_140C636A8;
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_DWORD*)(a1 + 632) = (_DWORD)v16;
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_DWORD*)(a1 + 640) = 0;
	*(_BYTE*)(a1 + 644) = 0;
	*(_QWORD*)(a1 + 624) = off_140B54E00;
	v17 = a6;
	*(_DWORD*)(a1 + 672) = 0;
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 656) = v17;
	v18 = a7;
	*(_QWORD*)(a1 + 688) = 0i64;
	*(_QWORD*)(a1 + 664) = v18;
	v19 = (unsigned int*)(a1 + 708);
	v20 = (unsigned int*)(a1 + 712);
	*(_DWORD*)(a1 + 708) = 0;
	*(_DWORD*)(a1 + 712) = 0;
	*(_QWORD*)(a1 + 736) = 0i64;
	sub_1401095E0(a1 + 744);
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_DWORD*)(a1 + 808) = -2;
	*(_QWORD*)(a1 + 832) = 0i64;
	*(_DWORD*)(a1 + 824) = -2;
	*(_QWORD*)(a1 + 816) = off_140B56A08;
	*(_QWORD*)(a1 + 840) = 0i64;
	*(_QWORD*)(a1 + 944) = 0i64;
	*(_DWORD*)(a1 + 952) = 0;
	v21 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 968) = v21;
	*(_QWORD*)(a1 + 976) = 0i64;
	*(_BYTE*)v21 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 968) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 968) + 16i64) = *(_QWORD*)(a1 + 968);
	*(_QWORD*)(*(_QWORD*)(a1 + 968) + 24i64) = *(_QWORD*)(a1 + 968);
	v22 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1008) = 0i64;
	*(_QWORD*)(a1 + 1000) = v22;
	*(_BYTE*)v22 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 16i64) = *(_QWORD*)(a1 + 1000);
	*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 24i64) = *(_QWORD*)(a1 + 1000);
	v23 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 1ui64;
	LODWORD(v22) = *(_DWORD*)(v23 + 48);
	*(_BYTE*)(a1 + 31) = -1;
	*(_QWORD*)(a1 + 488) = v23;
	*(_DWORD*)(a1 + 356) = (_DWORD)v22;
	if (!a4)
		a4 = *(_QWORD**)(v23 + 2928);
	sub_1400C7140((_QWORD*)a1, a4, 0);
	if (*(float*)(a1 + 648) != 1.0 || (float)0.0 != *(float*)(a1 + 652))
	{
		v24 = dword_140C636A8;
		*(_QWORD*)(a1 + 648) = 1065353216i64;
		*(_DWORD*)(a1 + 640) = 1065353216;
		*(_DWORD*)(a1 + 632) = v24;
	}
	*(_BYTE*)(a1 + 29) &= 0x87u;
	*(_BYTE*)(a1 + 28) &= ~0x80u;
	*(_QWORD*)(a1 + 616) = 1065353216i64;
	*(_DWORD*)(a1 + 456) = 0;
	*(_DWORD*)(a1 + 460) = 0x40000000;
	*(_DWORD*)(a1 + 676) = 1;
	if (a3)
	{
		v27 = *(_QWORD*)(a1 + 688);
		v28 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 696i64);
		*(_QWORD*)(a1 + 696) = v28;
		if (v27)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v27 + 40i64))(v27, *(_QWORD*)(v28 + 96));
	}
	else
	{
		v25 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"Default");
		v26 = *(_QWORD*)(a1 + 688);
		*(_QWORD*)(a1 + 696) = v25;
		if (v26)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v26 + 40i64))(v26, *(_QWORD*)(v25 + 96));
	}
	v29 = qword_140C63678;
	v42 = xmmword_140B7B240;
	*(_DWORD*)(a1 + 704) = 0;
	v30 = (unsigned int)sub_140141F10(v29, (__m128*) & v42);
	if (v19 == (unsigned int*)&v44)
	{
		v31 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v19);
		v31 = qword_140C63678;
		*v19 = v30;
		if (v30 < *(_QWORD*)(v31 + 48))
		{
			v32 = *(_QWORD*)(v31 + 40);
			v33 = 32i64 * (unsigned int)v30;
			v34 = *(_DWORD*)(v33 + v32 + 16);
			if ((unsigned int)(v34 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v33 + v32 + 16) = v34 + 1;
		}
	}
	sub_1401429A0(v31, v30);
	v43 = xmmword_140B7B240;
	v35 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v43);
	if (v20 == (unsigned int*)&v45)
	{
		v36 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v20);
		v36 = qword_140C63678;
		*v20 = v35;
		if (v35 < *(_QWORD*)(v36 + 48))
		{
			v37 = *(_QWORD*)(v36 + 40);
			v38 = 32i64 * (unsigned int)v35;
			v39 = *(_DWORD*)(v38 + v37 + 16);
			if ((unsigned int)(v39 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v38 + v37 + 16) = v39 + 1;
		}
	}
	sub_1401429A0(v36, v35);
	v40 = *(void(__fastcall****)(_QWORD))(a1 + 16);
	if (v40)
	{
		(**v40)(v40);
		sub_1400C7780(*(_QWORD*)(a1 + 16), a1);
	}
	*(_DWORD*)(a1 + 676) = 1;
	sub_1400C6E00(a1);
	sub_1400C6D90(a1);
	sub_1400CB960((char*)a1);
	return a1;
}
// 140A15308: using guessed type wchar_t aDefault_1[8];
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140B56570: using guessed type __int64 (__fastcall *off_140B56570[25])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C8A07C: using guessed type int dword_140C8A07C;

