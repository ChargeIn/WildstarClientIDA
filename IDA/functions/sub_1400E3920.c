//----- (00000001400E3920) ----------------------------------------------------
void __fastcall sub_1400E3920(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rbx
	int i; // edi
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	v2 = *(_QWORD*)(a1 + 136);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 160);
	if (v3)
		sub_14018B900(v3, 0);
	v4 = *(_QWORD*)(a1 + 104);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 96));
	v5 = *(_QWORD*)(a1 + 72);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1 + 64;
	for (i = 3; i >= 0; --i)
	{
		v8 = *(_QWORD*)(v6 - 8);
		v6 -= 8i64;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	}
	v9 = *(_QWORD*)(a1 + 24);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	v10 = *(_QWORD*)(a1 + 16);
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
}
// 140C63678: using guessed type __int64 qword_140C63678;

