//----- (000000014056E2C0) ----------------------------------------------------
void __fastcall sub_14056E2C0(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	*(_QWORD*)a1 = off_140B6C8B8;
	sub_14056E380(a1);
	sub_14056E480(a1);
	sub_140195D70(a1 + 216);
	*(_DWORD*)(a1 + 216) = 0;
	v2 = *(_QWORD**)(a1 + 232);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 240);
	v3 = *(_QWORD**)(a1 + 240);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	v4 = *(_QWORD*)(a1 + 200);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_140008410(a1 + 160);
	sub_14018B900(*(_QWORD*)(a1 + 168), 0);
	sub_140008410(a1 + 128);
	sub_14018B900(*(_QWORD*)(a1 + 136), 0);
	sub_140575930((_QWORD*)a1);
}
// 140B6C8B8: using guessed type __int64 (__fastcall *off_140B6C8B8[5])();

