//----- (00000001404B6F80) ----------------------------------------------------
__int64 __fastcall sub_1404B6F80(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	unsigned int* v4; // rdi
	unsigned int v5; // ebx
	__int64 v6; // r8

	if (!a2)
		return 0i64;
	v3 = sub_140206C60(a2);
	if (!v3)
		return 0i64;
	v4 = (unsigned int*)(v3 + 108);
	v5 = 0;
	while (1)
	{
		v6 = *v4;
		if ((_DWORD)v6)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v6,
					0i64,
					0i64,
					0))
				break;
		}
		++v5;
		++v4;
		if (v5 >= 3)
			return 1i64;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

