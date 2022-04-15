//----- (00000001404CE4E0) ----------------------------------------------------
__int64 sub_1404CE4E0()
{
	int* v0; // rbx
	int* v1; // rax
	__int64 v2; // rax

	v0 = sub_14018B280(40i64, 0);
	if (v0)
	{
		*(_QWORD*)v0 = &off_140B68F60;
		v1 = sub_14018B280(48i64, 0);
		*((_QWORD*)v0 + 3) = 0i64;
		*((_QWORD*)v0 + 2) = v1;
		*(_BYTE*)v1 = 0;
		*(_QWORD*)(*((_QWORD*)v0 + 2) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v0 + 2) + 16i64) = *((_QWORD*)v0 + 2);
		*(_QWORD*)(*((_QWORD*)v0 + 2) + 24i64) = *((_QWORD*)v0 + 2);
		*(_QWORD*)v0 = off_140B68F98;
	}
	else
	{
		v0 = 0i64;
	}
	v2 = *(_QWORD*)v0;
	qword_140C65A18 = (__int64)v0;
	return (*(__int64(__fastcall**)(int*))(v2 + 8))(v0);
}
// 140B68F60: using guessed type __int64 (__fastcall *off_140B68F60)();
// 140B68F98: using guessed type __int64 (__fastcall *off_140B68F98[40])();
// 140C65A18: using guessed type __int64 qword_140C65A18;

