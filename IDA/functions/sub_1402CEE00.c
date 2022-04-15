#include "../winhttp.h"

//----- (00000001402CEE00) ----------------------------------------------------
__int64 __fastcall sub_1402CEE00(__int64 a1, __int64 a2)
{
	void(__fastcall * **v4)(_QWORD); // rcx

	*(_QWORD*)a1 = off_140B62800;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 64);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 80);
	*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 96);
	*(_OWORD*)(a1 + 112) = *(_OWORD*)(a2 + 112);
	*(_OWORD*)(a1 + 128) = *(_OWORD*)(a2 + 128);
	*(_OWORD*)(a1 + 144) = *(_OWORD*)(a2 + 144);
	*(_OWORD*)(a1 + 160) = *(_OWORD*)(a2 + 160);
	*(_OWORD*)(a1 + 176) = *(_OWORD*)(a2 + 176);
	*(_OWORD*)(a1 + 192) = *(_OWORD*)(a2 + 192);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a2 + 208);
	*(_OWORD*)(a1 + 224) = *(_OWORD*)(a2 + 224);
	*(_OWORD*)(a1 + 240) = *(_OWORD*)(a2 + 240);
	*(_OWORD*)(a1 + 256) = *(_OWORD*)(a2 + 256);
	*(_OWORD*)(a1 + 272) = *(_OWORD*)(a2 + 272);
	*(_OWORD*)(a1 + 288) = *(_OWORD*)(a2 + 288);
	v4 = *(void(__fastcall****)(_QWORD))(a2 + 304);
	*(_QWORD*)(a1 + 304) = v4;
	if (v4)
		(**v4)(v4);
	*(_QWORD*)(a1 + 312) = *(_QWORD*)(a2 + 312);
	*(_QWORD*)(a1 + 320) = *(_QWORD*)(a2 + 320);
	*(_QWORD*)(a1 + 328) = *(_QWORD*)(a2 + 328);
	*(_QWORD*)(a1 + 336) = *(_QWORD*)(a2 + 336);
	*(_QWORD*)(a1 + 344) = *(_QWORD*)(a2 + 344);
	*(_QWORD*)(a1 + 352) = *(_QWORD*)(a2 + 352);
	*(_QWORD*)(a1 + 360) = *(_QWORD*)(a2 + 360);
	return a1;
}
// 140B62800: using guessed type __int64 (__fastcall *off_140B62800[11])();

