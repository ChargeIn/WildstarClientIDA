//----- (00000001402D9A20) ----------------------------------------------------
__int64 sub_1402D9A20()
{
	int* v1; // rax
	int v2; // ebx

	if (qword_140C657F8)
	{
		(**(void(__fastcall***)(__int64))qword_140C657F8)(qword_140C657F8);
		return 0i64;
	}
	v1 = sub_14018B280(664i64, 0);
	if (v1)
		qword_140C657F8 = sub_1402DAF30((__int64)v1);
	else
		qword_140C657F8 = 0i64;
	v2 = sub_1402DB200();
	if (v2 >= 0)
		return 0i64;
	if (qword_140C657F8)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C657F8 + 16i64))(qword_140C657F8, 1i64);
	qword_140C657F8 = 0i64;
	return (unsigned int)v2;
}
// 140C657F8: using guessed type __int64 qword_140C657F8;

