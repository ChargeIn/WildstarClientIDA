//----- (0000000140620C80) ----------------------------------------------------
void __fastcall sub_140620C80(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	if (*(_DWORD*)(a1 + 968) != 3)
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
		if (v2)
		{
			v4 = *(_QWORD*)(v2 + 5864);
			if (v4)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 296i64))(v4, 1i64);
		}
		if (v3)
		{
			v5 = *(_QWORD*)(v3 + 5864);
			if (v5)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 296i64))(v5, 1i64);
		}
		v6 = *(_QWORD*)(a1 + 48);
		if (v6)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 208i64))(v6, 10i64);
		v7 = *(_QWORD*)(a1 + 56);
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 208i64))(v7, 10i64);
		v8 = *(_QWORD*)(a1 + 64);
		if (v8)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 208i64))(v8, 10i64);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

