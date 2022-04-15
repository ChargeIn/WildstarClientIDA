//----- (000000014066A930) ----------------------------------------------------
__int64 __fastcall sub_14066A930(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	int v4; // eax
	__int64 v5; // rax
	void(__fastcall * **v6)(_QWORD, __int64); // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = dword_140A12138;
		if (a1[3] < a1[2])
			v3 = (_DWORD*)a1[3];
		v4 = v3[2];
		if (v4 == 2)
		{
			v5 = *(_QWORD*)v3;
		}
		else if (v4 == 7)
		{
			v5 = *(_QWORD*)v3 + 48i64;
		}
		else
		{
			v5 = 0i64;
		}
		v6 = *(void(__fastcall****)(_QWORD, __int64))(v5 + 8);
		if (v6)
			(**v6)(v6, 1i64);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

