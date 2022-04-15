//----- (00000001400586A0) ----------------------------------------------------
__int64 __fastcall sub_1400586A0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	int v3; // r10d
	__int64 v4; // r11
	int v6; // ecx

	v2 = sub_1400580E0(a1, a2);
	if (v2[2] != 2)
	{
		if (v2[2] == 5 || v2[2] == 6)
			return *(_QWORD*)v2;
		if (v2[2] != 7)
		{
			if (v2[2] != 8)
				return 0i64;
			return *(_QWORD*)v2;
		}
	}
	v2 = sub_1400580E0(v4, v3);
	v6 = v2[2];
	if (v6 == 2)
		return *(_QWORD*)v2;
	if (v6 != 7)
		return 0i64;
	return *(_QWORD*)v2 + 48i64;
}
// 1400586DB: variable 'v4' is possibly undefined
// 1400586DB: variable 'v3' is possibly undefined

