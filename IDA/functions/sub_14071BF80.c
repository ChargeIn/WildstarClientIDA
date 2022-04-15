//----- (000000014071BF80) ----------------------------------------------------
void __fastcall sub_14071BF80(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	*(_QWORD*)a1 = off_140B74310;
	v2 = *(_QWORD*)(a1 + 224);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 648i64))(v2, 0i64, 0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 224) + 1120i64))(
			*(_QWORD*)(a1 + 224),
			0i64,
			0i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 224) + 1112i64))(*(_QWORD*)(a1 + 224));
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 61i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 62i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 63i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(*(_QWORD*)(a1 + 224), 64i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 224) + 936i64))(*(_QWORD*)(a1 + 224));
	}
	sub_140195D70(a1 + 248);
	*(_DWORD*)(a1 + 248) = 0;
	v3 = *(_QWORD**)(a1 + 264);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 272);
	v4 = *(_QWORD**)(a1 + 272);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 264);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	v5 = *(_QWORD*)(a1 + 224);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	sub_140719D60(a1);
}
// 140B74310: using guessed type __int64 (__fastcall *off_140B74310[2])();

