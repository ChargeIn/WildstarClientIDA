//----- (0000000140601920) ----------------------------------------------------
void __fastcall sub_140601920(__int64 a1)
{
	void(__fastcall * **v2)(_QWORD, __int64); // rcx
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	v2 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 72);
	if (v2)
		(**v2)(v2, 1i64);
	v3 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 64);
	if (v3)
		(**v3)(v3, 1i64);
	sub_1406070A0(a1);
	sub_140195D70(a1 + 96);
	*(_DWORD*)(a1 + 96) = 0;
	v4 = *(_QWORD**)(a1 + 112);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 120);
	v5 = *(_QWORD**)(a1 + 120);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
}

