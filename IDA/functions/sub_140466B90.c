//----- (0000000140466B90) ----------------------------------------------------
_BOOL8 __fastcall sub_140466B90(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // r8
	int v8; // edx
	__int64 v9; // rax
	__int64 v10; // r8
	_BOOL8 result; // rax

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a2 + 24);
	if (!v4)
		return 0i64;
	v5 = *(_DWORD*)(v4 + 168);
	result = 1;
	if (v5)
	{
		if (*(_QWORD*)(qword_140C65898 + 120) != a1)
			return 0;
		v6 = sub_140244B00(v5);
		if (v6)
		{
			v7 = *(unsigned int*)(v6 + 8);
			if ((_DWORD)v7)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						a1,
						v7,
						0i64,
						0i64,
						0))
					return 0;
			}
		}
		v8 = *(_DWORD*)(a2 + 5932);
		if (v8 && sub_1405B15C0((__int64)&qword_140C7DFB0, v8))
		{
			v9 = sub_140200220(0x365u);
			v10 = v9 ? *(unsigned int*)(v9 + 4) : 0i64;
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					a1,
					v10,
					a2,
					0i64,
					0))
				return 0;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

