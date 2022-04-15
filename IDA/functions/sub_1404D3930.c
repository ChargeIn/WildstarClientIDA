//----- (00000001404D3930) ----------------------------------------------------
__int64 sub_1404D3930()
{
	__int64 v0; // rdi
	unsigned __int64 i; // rbx
	void(__fastcall * **v2)(_QWORD, __int64); // rcx

	v0 = qword_140C65A40;
	if (qword_140C65A40)
	{
		for (i = 0i64; i < 0xA; ++i)
		{
			v2 = *(void(__fastcall****)(_QWORD, __int64))(v0 + 8 * i);
			if (v2)
				(**v2)(v2, 1i64);
		}
		sub_14018B900(v0, 0);
		qword_140C65A40 = 0i64;
	}
	return 0i64;
}
// 140C65A40: using guessed type __int64 qword_140C65A40;

