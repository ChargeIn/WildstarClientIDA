#include "../winhttp.h"

//----- (00000001404C6B10) ----------------------------------------------------
void __fastcall sub_1404C6B10(__int64 a1)
{
	unsigned int v1; // edx
	void* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v8; // edx
	__int64 v9; // rax
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rax
	_QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
	char v16[24]; // [rsp+30h] [rbp-18h] BYREF

	v1 = *(_DWORD*)(a1 + 672);
	if (v1)
	{
		v3 = (void*)sub_1404CA4F0(a1, v1);
		if (!v3)
			return;
	}
	else
	{
		v3 = &unk_1409F08E4;
	}
	v4 = *(_QWORD*)(a1 + 608);
	if (v4)
		(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v4 + 808i64))(v4, v3, 0i64);
	v5 = *(_QWORD*)(a1 + 616);
	if (v5)
		(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v5 + 808i64))(v5, v3, 0i64);
	v6 = *(_QWORD*)(a1 + 632);
	if (v6)
		(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v6 + 808i64))(v6, v3, 0i64);
	v7 = *(_QWORD*)(a1 + 624);
	if (v7)
		(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v7 + 808i64))(v7, v3, 0i64);
	v8 = *(_DWORD*)(a1 + 104);
	if (v8)
	{
		v9 = sub_1403D90D0(qword_140C65898, v8);
		v10 = v9;
		if (v9)
		{
			v11 = *(_QWORD*)(v9 + 5864);
			if (v11)
				(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v11 + 808i64))(v11, v3, 0i64);
			v12 = *(_QWORD*)(v10 + 3264);
			if (v12)
			{
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 264i64))(v12, 0i64);
				if (v13)
					(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v13 + 808i64))(v13, v3, 0i64);
				v14 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 112i64))(v12, 25i64);
				if (v14)
					(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)v14 + 808i64))(v14, v3, 0i64);
			}
		}
		if (*(_DWORD*)(a1 + 104))
		{
			LODWORD(v15[0]) = *(_DWORD*)(a1 + 104);
			v15[1] = a1;
			sub_140055F80(qword_140C659F8 + 256, (__int64)v16, v15);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 1404C6B10: using guessed type char var_18[24];

