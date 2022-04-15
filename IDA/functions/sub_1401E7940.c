#include "../winhttp.h"

//----- (00000001401E7940) ----------------------------------------------------
__int64 __fastcall sub_1401E7940(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 48);
	v4 = *(_QWORD*)(v1 + 288);
	if (v3 && *(_DWORD*)(a1 + 64))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 936i64))(v3);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 896i64))(
			v4,
			*(unsigned int*)(a1 + 64),
			*(_QWORD*)(a1 + 48));
	}
	v5 = *(_QWORD*)(a1 + 56);
	if (v5 && *(_DWORD*)(a1 + 68))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 896i64))(
			v4,
			*(unsigned int*)(a1 + 68),
			*(_QWORD*)(a1 + 56));
	}
	v6 = *(_QWORD*)(a1 + 72);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 904i64))(v4, *(_QWORD*)(a1 + 72));
	}
	v7 = *(_QWORD*)(a1 + 80);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 936i64))(v7);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 904i64))(v4, *(_QWORD*)(a1 + 80));
	}
	v8 = *(_QWORD*)(a1 + 88);
	if (v8 && *(_DWORD*)(a1 + 96))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 936i64))(v8);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 896i64))(
			v4,
			*(unsigned int*)(a1 + 96),
			*(_QWORD*)(a1 + 88));
	}
	return 0i64;
}

