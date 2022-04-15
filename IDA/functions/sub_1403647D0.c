#include "../winhttp.h"

//----- (00000001403647D0) ----------------------------------------------------
__int64 __fastcall sub_1403647D0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 i; // rdi
	__int64* v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rbx
	__int64 v7; // rbx
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rcx
	int v14[4]; // [rsp+20h] [rbp-28h] BYREF

	v2 = *(_QWORD*)(a1 + 6192);
	v14[0] = -1;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 32i64))(v2, v14);
	for (i = *(_QWORD*)(a1 + 5288); i; i = *(_QWORD*)(i + 1096))
	{
		v4 = *(__int64**)(i + 32);
		(*(void(__fastcall**)(__int64*, __int64))(*v4 + 296))(v4, 1i64);
		(*(void(__fastcall**)(__int64*, __int64))(*v4 + 320))(v4, 1i64);
		v5 = *v4;
		sub_14038C510(i, *(_DWORD*)(a1 + 880));
		(*(void (**)(void))(*(_QWORD*)i + 144i64))();
		(*(void(__fastcall**)(__int64*))(v5 + 112))(v4);
		v6 = *v4;
		sub_14038C510(i, *(_DWORD*)(a1 + 880));
		(*(void (**)(void))(*(_QWORD*)i + 160i64))();
		(*(void(__fastcall**)(__int64*))(v6 + 128))(v4);
		v7 = *v4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)i + 176i64))(i);
		(*(void(__fastcall**)(__int64*))(v7 + 144))(v4);
		v8 = *v4;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)i + 192i64))(i);
		(*(void(__fastcall**)(__int64*, __int64))(v8 + 176))(v4, v9);
		v10 = *v4;
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)i + 208i64))(i);
		(*(void(__fastcall**)(__int64*, __int64))(v10 + 192))(v4, v11);
		v12 = *(_QWORD**)(i + 200);
		if (v12)
			sub_1407C2C10((__int64)v12, *(_QWORD*)(*v12 + 8i64 * *(_QWORD*)(i + 216)));
		(*(void(__fastcall**)(__int64*))(*v4 + 256))(v4);
		if (*(_DWORD*)(a1 + 6168) == 1)
			*(_DWORD*)(i + 960) = *(_DWORD*)(a1 + 848);
	}
	return 0i64;
}
// 1403647D0: using guessed type int var_28[4];

