//----- (00000001404CC1F0) ----------------------------------------------------
__int64 sub_1404CC1F0()
{
	int* v1; // rbx
	int* v2; // rax
	int v3; // edi

	if (qword_140C65A08)
		return 0i64;
	v1 = sub_14018B280(264i64, 0);
	if (v1)
	{
		*(_QWORD*)v1 = off_140B78380;
		v2 = sub_14018B280(48i64, 0);
		*((_QWORD*)v1 + 3) = 0i64;
		*((_QWORD*)v1 + 2) = v2;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 16i64) = *((_QWORD*)v1 + 2);
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 24i64) = *((_QWORD*)v1 + 2);
		*(_QWORD*)v1 = off_140B68EE0;
		sub_1407E4830(v1 + 10, 0i64, 0xE0ui64);
	}
	else
	{
		v1 = 0i64;
	}
	v3 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v1 + 8i64))(v1);
	if (v3 >= 0)
	{
		qword_140C65A08 = (__int64)v1;
		return 0i64;
	}
	else
	{
		(**(void(__fastcall***)(int*, __int64))v1)(v1, 1i64);
		return (unsigned int)v3;
	}
}
// 140B68EE0: using guessed type __int64 (__fastcall *off_140B68EE0[15])();
// 140B78380: using guessed type __int64 (__fastcall *off_140B78380[2])();
// 140C65A08: using guessed type __int64 qword_140C65A08;

