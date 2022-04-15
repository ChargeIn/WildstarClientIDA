#include "../winhttp.h"

//----- (000000014033E900) ----------------------------------------------------
__int64 __fastcall sub_14033E900(__int64 a1, SOCKET a2)
{
	struct sockaddr* v3; // rcx
	__int64 v5; // rax

	v3 = (struct sockaddr*)(a1 + 16);
	*(_QWORD*)&v3[-1].sa_family = off_140B55048;
	*(_DWORD*)&v3[-1].sa_data[6] = 1;
	*(_QWORD*)&v3[-1].sa_family = off_140B64AA8;
	sub_140334CF0(v3, a2);
	sub_140334C60(a1 + 144);
	*(_QWORD*)(a1 + 272) = a2;
	*(_DWORD*)(a1 + 284) = 1;
	*(_DWORD*)(a1 + 280) = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = a1 + 288;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	v5 = *(_QWORD*)(a1 + 320);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 376) = v5;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 400) = a1 + 288;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = a1 + 288;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	if (!*(_BYTE*)(a1 + 72))
		sub_140334D90(a1 + 16);
	sub_1400035B0();
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B64AA8: using guessed type __int64 (__fastcall *off_140B64AA8[4])();

