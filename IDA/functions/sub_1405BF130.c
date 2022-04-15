//----- (00000001405BF130) ----------------------------------------------------
void __fastcall sub_1405BF130(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	sub_1405BF0C0((__int64*)(a1 + 440));
	v2 = *(_QWORD*)(a1 + 416);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = *(_QWORD*)(a1 + 384);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_1405C4A00(a1 + 352);
	sub_140195D70(a1 + 192);
	*(_DWORD*)(a1 + 192) = 0;
	v4 = *(_QWORD**)(a1 + 208);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 216);
	v5 = *(_QWORD**)(a1 + 216);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	sub_1405BEF60((__int64*)a1);
}

