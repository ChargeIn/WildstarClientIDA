//----- (000000014033B580) ----------------------------------------------------
void __fastcall sub_14033B580(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rdx
	_QWORD* v6; // r8
	__int64 v7; // rcx

	*(_QWORD*)a1 = off_140B64A30;
	v2 = *(_QWORD*)(a1 + 304);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	v3 = *(_QWORD*)(a1 + 272);
	v4 = *(_QWORD*)(a1 + 240);
	v5 = *(_QWORD*)(a1 + 256);
	v6 = *(_QWORD**)(a1 + 264);
	while (v4 != v3)
	{
		v4 += 8i64;
		if (v4 == v5)
		{
			v4 = *++v6;
			v5 = *v6 + 496i64;
		}
	}
	sub_14033E040((__int64*)(a1 + 216));
	if (*(_QWORD*)(a1 + 208))
		CloseHandle(*(HANDLE*)(a1 + 208));
	v7 = *(_QWORD*)(a1 + 152);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	sub_14033A960(a1 + 128);
	sub_14018B900(*(_QWORD*)(a1 + 136), 0);
	if (*(_QWORD*)(a1 + 112))
	{
		sub_14033E290(a1 + 96, *(_QWORD**)(*(_QWORD*)(a1 + 104) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16i64) = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24i64) = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 112) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 104), 0);
	sub_14033DC90((__int64*)(a1 + 8));
}
// 140B64A30: using guessed type __int64 (__fastcall *off_140B64A30[19])();

