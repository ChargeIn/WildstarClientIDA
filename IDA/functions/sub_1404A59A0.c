//----- (00000001404A59A0) ----------------------------------------------------
__int64 sub_1404A59A0()
{
	int* v1; // rax
	_QWORD* v2; // rbx
	int v3; // edi

	if (qword_140C659A8)
		return 0i64;
	v1 = sub_14018B280(144i64, 0);
	if (v1)
		v2 = sub_1404A5A30(v1);
	else
		v2 = 0i64;
	v3 = (*(__int64(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2);
	if (v3 >= 0)
	{
		qword_140C659A8 = (__int64)v2;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(_QWORD*, __int64)) * v2)(v2, 1i64);
		return (unsigned int)v3;
	}
}
// 140C659A8: using guessed type __int64 qword_140C659A8;
