//----- (00000001401DC3F0) ----------------------------------------------------
void sub_1401DC3F0()
{
	unsigned __int64 v0; // rdx
	unsigned int v1; // edi
	__int64 v2; // rcx
	_QWORD* v3; // rbx

	sub_140008410((__int64)&unk_140C799D0);
	sub_140008410((__int64)&unk_140C79A00);
	sub_140008410((__int64)&unk_140C79A20);
	v0 = qword_140C799F8;
	v1 = 0;
	if (qword_140C799F8)
	{
		v2 = 0i64;
		do
		{
			v3 = *(_QWORD**)(qword_140C799F0 + 8 * v2);
			if (v3)
			{
				if (*v3)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16i64) + 8i64))(*v3 - 16i64);
				sub_14018B900((__int64)v3, 0);
				v0 = qword_140C799F8;
			}
			v2 = ++v1;
		} while (v1 < v0);
		qword_140C799F8 = 0i64;
	}
	else
	{
		qword_140C799F8 = 0i64;
	}
}
// 140C799F0: using guessed type __int64 qword_140C799F0;
// 140C799F8: using guessed type __int64 qword_140C799F8;

