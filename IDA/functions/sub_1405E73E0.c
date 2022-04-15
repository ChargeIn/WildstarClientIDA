//----- (00000001405E73E0) ----------------------------------------------------
__int64 __fastcall sub_1405E73E0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v4; // rbx
	unsigned int* v5; // rdi
	__int64 v6; // r8

	v1 = qword_140C65898;
	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120))
		return 1i64;
	v4 = 1i64;
	if (*(_QWORD*)(a1 + 56) > 1ui64)
	{
		v5 = (unsigned int*)(a1 + 36);
		do
		{
			v6 = *v5;
			if ((_DWORD)v6)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(v1 + 120),
						v6,
						0i64,
						0i64,
						0))
					return v4;
				v1 = qword_140C65898;
			}
			++v4;
			++v5;
		} while (v4 < *(_QWORD*)(a1 + 56));
	}
	return *(_QWORD*)(a1 + 56);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

