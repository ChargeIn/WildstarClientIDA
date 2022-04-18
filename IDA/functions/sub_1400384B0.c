#include "../winhttp.h"

//----- (00000001400384B0) ----------------------------------------------------
void __fastcall sub_1400384B0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 72);
	v7 = 0;
	if (v3)
		Apollo_LUAEvent(v3, "NetworkStatus", &unk_1409D01F2);
	Apollo_LUAEvent(*(_QWORD*)(a1 + 72), "LoginError", byte_1409D0E44, a2, &v7);
	if (!v7)
		sub_1400481B0(a1, a2, (void(__fastcall***)(_QWORD))a1);
	v5 = *(_QWORD*)(a1 + 232);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 232) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 240);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 240) = 0i64;
	}
	*(_DWORD*)(a1 + 168) = 0;
	sub_140039060(a1);
}
// 1409D0E44: using guessed type _BYTE byte_1409D0E44[39];

