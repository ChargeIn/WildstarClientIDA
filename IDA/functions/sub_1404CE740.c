//----- (00000001404CE740) ----------------------------------------------------
void __fastcall sub_1404CE740(_QWORD* a1)
{
	_QWORD* v1; // rbx
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	_QWORD* v4; // rdi

	v1 = a1 + 1;
	v2 = 0i64;
	for (*a1 = off_140B68FD0; v2 < *(_QWORD*)(*v1 + 8i64); ++v2)
		sub_14018B900(*(_QWORD*)(*(_QWORD*)*v1 + 8 * v2), 0);
	v3 = 3i64;
	do
	{
		v4 = (_QWORD*)*v1;
		if (*v1)
		{
			if (*v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v4 - 16i64) + 8i64))(*v4 - 16i64);
			sub_14018B900((__int64)v4, 0);
		}
		++v1;
		--v3;
	} while (v3);
}
// 140B68FD0: using guessed type __int64 (__fastcall *off_140B68FD0[33])();

