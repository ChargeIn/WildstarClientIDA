//----- (0000000140758020) ----------------------------------------------------
__int64 __fastcall sub_140758020(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned __int64 v4; // rcx
	int v5; // ecx
	__int64 v6; // r8

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2)
	{
		v4 = (unsigned int)sub_140056D60(a1, 1u);
		if (v4 < *(_QWORD*)(qword_140C659C0 + 16))
		{
			v6 = *(unsigned int*)(*(_QWORD*)(qword_140C659C0 + 8) + 4 * v4);
			if ((_DWORD)v6)
				v5 = 2
				- ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						v2,
						v6,
						0i64,
						0i64,
						0) != 0);
			else
				v5 = 1;
		}
		else
		{
			v5 = 24;
		}
		v3 = a1[2];
		*(double*)v3 = (double)v5;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0x4037000000000000i64;
	}
	*(_DWORD*)(v3 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C659C0: using guessed type __int64 qword_140C659C0;

