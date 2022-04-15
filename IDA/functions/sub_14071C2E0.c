#include "../winhttp.h"

//----- (000000014071C2E0) ----------------------------------------------------
void __fastcall sub_14071C2E0(__int64 a1, int a2, int a3)
{
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	if (a2
		|| !*(_DWORD*)(a1 + 236)
		|| *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 12) == a2)
	{
		v7 = *(_QWORD*)(a1 + 224);
		if (v7)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 648i64))(v7, 0i64, 0i64);
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 224) + 1120i64))(
				*(_QWORD*)(a1 + 224),
				0i64,
				0i64);
			if (a3)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 224) + 1112i64))(*(_QWORD*)(a1 + 224));
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 61i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 62i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 63i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 64i64);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 224) + 936i64))(*(_QWORD*)(a1 + 224));
			}
			v8 = *(_QWORD*)(a1 + 224);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 224) = 0i64;
			}
		}
		sub_14071A150(a1);
	}
	else
	{
		*(_DWORD*)(a1 + 320) = 0;
		sub_140195D70(a1 + 56);
		sub_140195D70(a1 + 128);
		v5 = *(_QWORD**)(a1 + 8);
		if (v5)
			*v5 = *(_QWORD*)(a1 + 16);
		v6 = *(_QWORD*)(a1 + 16);
		if (v6)
			*(_QWORD*)(v6 + 8) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 328) = 2;
		sub_14071C730(a1);
	}
}

