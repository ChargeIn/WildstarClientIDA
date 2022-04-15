//----- (00000001400FCC70) ----------------------------------------------------
__int64 sub_1400FCC70()
{
	__int64 v0; // rbx
	void (*v1)(void); // rax
	HMODULE v2; // rcx
	__int64 v3; // rbx
	void (*v4)(void); // rax
	__int64 v5; // rcx
	__int64 result; // rax

	v0 = qword_140C63658;
	sub_1400FD770(qword_140C63658);
	if (*(_DWORD*)(v0 + 40))
	{
		v1 = *(void (**)(void))(v0 + 64);
		if (v1)
		{
			v1();
			*(_DWORD*)(v0 + 40) = 0;
		}
	}
	v2 = *(HMODULE*)(v0 + 32);
	if (v2)
	{
		FreeLibrary(v2);
		*(_QWORD*)(v0 + 32) = 0i64;
	}
	v3 = qword_140C63658;
	if (qword_140C63658)
	{
		if (*(_DWORD*)(qword_140C63658 + 40))
		{
			v4 = *(void (**)(void))(qword_140C63658 + 64);
			if (v4)
			{
				v4();
				*(_DWORD*)(v3 + 40) = 0;
			}
		}
		v5 = *(_QWORD*)(v3 + 8);
		if (v5)
			sub_14018B900(v5, 0);
		sub_14018B900(v3, 0);
	}
	result = 0i64;
	qword_140C63658 = 0i64;
	return result;
}
// 140C63658: using guessed type __int64 qword_140C63658;

