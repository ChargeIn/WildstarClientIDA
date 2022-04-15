//----- (00000001404D0FF0) ----------------------------------------------------
__int64 sub_1404D0FF0()
{
	__int64 result; // rax
	int* v1; // rax
	int* v2; // rbx
	int* v3; // rax

	if (qword_140C65A38)
		return 0i64;
	v1 = sub_14018B280(224i64, 0);
	v2 = v1;
	if (v1)
	{
		sub_1404D1130(v1);
		*(_QWORD*)v2 = off_140B69020;
		v3 = sub_14018B280(48i64, 0);
		*((_QWORD*)v2 + 21) = 0i64;
		*((_QWORD*)v2 + 20) = v3;
		*(_BYTE*)v3 = 0;
		*(_QWORD*)(*((_QWORD*)v2 + 20) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v2 + 20) + 16i64) = *((_QWORD*)v2 + 20);
		*(_QWORD*)(*((_QWORD*)v2 + 20) + 24i64) = *((_QWORD*)v2 + 20);
	}
	else
	{
		v2 = 0i64;
	}
	qword_140C65A38 = (__int64)v2;
	sub_1404D25C0(v2);
	result = 0i64;
	*((_QWORD*)v2 + 23) = 0i64;
	*((_QWORD*)v2 + 24) = 0i64;
	*((_QWORD*)v2 + 25) = 0i64;
	*((_QWORD*)v2 + 26) = 0i64;
	*((_QWORD*)v2 + 27) = 0i64;
	return result;
}
// 140B69020: using guessed type __int64 (__fastcall *off_140B69020[23])();
// 140C65A38: using guessed type __int64 qword_140C65A38;

