#include "../winhttp.h"

//----- (00000001403303E0) ----------------------------------------------------
__int64 __fastcall sub_1403303E0(__int64 a1, _QWORD* a2, __int64 a3)
{
	void(__fastcall * **v5)(_QWORD); // rcx
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // rdx
	__int64* v10; // rdi
	int* v11; // rax
	__int64 v12; // rcx
	LONGLONG v13; // rax
	LONGLONG v14; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 16) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = &off_140B64668;
	v5 = (void(__fastcall***)(_QWORD)) * a2;
	*(_QWORD*)(a1 + 24) = *a2;
	if (v5)
		(**v5)(v5);
	v7 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = off_140B64918;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = v7 + 320;
	v8 = sub_14018B280(24i64, 0);
	if (v8)
	{
		v9 = **(_QWORD**)(a1 + 80);
		*(_QWORD*)v8 = 0i64;
		*((_QWORD*)v8 + 1) = 0i64;
		*((_QWORD*)v8 + 2) = v9;
	}
	else
	{
		v8 = 0i64;
	}
	*(_QWORD*)(a1 + 88) = v8;
	*(_QWORD*)(a1 + 40) = off_140B64918;
	v10 = (__int64*)(*(_QWORD*)(a1 + 24) + 320i64);
	*(_QWORD*)(a1 + 96) = off_140B64640;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = v10;
	v11 = sub_14018B280(24i64, 0);
	if (v11)
	{
		v12 = *v10;
		*(_QWORD*)v11 = 0i64;
		*((_QWORD*)v11 + 1) = 0i64;
		*((_QWORD*)v11 + 2) = v12;
	}
	else
	{
		v11 = 0i64;
	}
	*(_QWORD*)(a1 + 128) = v11;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 96) = off_140B64640;
	*(_QWORD*)(a1 + 144) = a3;
	*(_DWORD*)(a1 + 152) = 500;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_DWORD*)(a1 + 416) = 19;
	*(_DWORD*)(a1 + 420) = dword_140C1E52C;
	QueryPerformanceCounter(&PerformanceCount);
	v13 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 424) = v13;
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_DWORD*)(a1 + 792) = 0;
	*(_DWORD*)(a1 + 796) = -1;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	QueryPerformanceCounter(&PerformanceCount);
	v14 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 432) = v14;
	*(_QWORD*)(a1 + 592) = v14;
	*(_QWORD*)(a1 + 448) = v14;
	*(_QWORD*)(a1 + 608) = v14;
	*(_QWORD*)(a1 + 464) = v14;
	*(_QWORD*)(a1 + 624) = v14;
	*(_QWORD*)(a1 + 480) = v14;
	*(_QWORD*)(a1 + 640) = v14;
	*(_QWORD*)(a1 + 496) = v14;
	*(_QWORD*)(a1 + 656) = v14;
	*(_QWORD*)(a1 + 512) = v14;
	*(_QWORD*)(a1 + 672) = v14;
	*(_QWORD*)(a1 + 528) = v14;
	*(_QWORD*)(a1 + 688) = v14;
	*(_QWORD*)(a1 + 544) = v14;
	*(_QWORD*)(a1 + 704) = v14;
	*(_QWORD*)(a1 + 560) = v14;
	*(_QWORD*)(a1 + 720) = v14;
	*(_QWORD*)(a1 + 576) = v14;
	*(_QWORD*)(a1 + 736) = v14;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 536) = 0i64;
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_QWORD*)(a1 + 552) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	*(_QWORD*)(a1 + 568) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 584) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
	return a1;
}
// 140B64640: using guessed type __int64 (__fastcall *off_140B64640[6])();
// 140B64668: using guessed type __int64 (__fastcall *off_140B64668)();
// 140B64918: using guessed type __int64 (__fastcall *off_140B64918[12])();
// 140C1E52C: using guessed type int dword_140C1E52C;

