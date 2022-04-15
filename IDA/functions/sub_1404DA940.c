//----- (00000001404DA940) ----------------------------------------------------
__int64 sub_1404DA940()
{
	__int64 v0; // rdi
	int* v1; // rax
	int* v3; // rax
	__int64 v4; // rbx

	v0 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 31016))
	{
		v1 = sub_14054F210();
		return (*(__int64(__fastcall**)(int*))(*(_QWORD*)v1 + 24i64))(v1);
	}
	else
	{
		v3 = sub_14018B280(264i64, 0);
		if (v3)
			v4 = sub_1400367F0((__int64)v3);
		else
			v4 = 0i64;
		if ((int)sub_140036BF0(v4) >= 0)
			sub_140048100(v0, v4, 1);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

