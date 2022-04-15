//----- (00000001406D6160) ----------------------------------------------------
__int64 __fastcall sub_1406D6160(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // eax
	void(__fastcall * **v4)(_QWORD); // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF
	int v7; // [rsp+3Ch] [rbp+14h]

	if (!sub_1406D5FA0(a1))
		return 0i64;
	v2 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v2 >= a1[2])
		return 0i64;
	if (v2 == dword_140A12138)
		return 0i64;
	if (*(int*)(a1[3] + 24i64) <= 0)
		return 0i64;
	v3 = sub_140056D60(a1, 2u);
	if (v3 < 0)
		return 0i64;
	v6 = BYTE1(v3);
	v7 = (unsigned __int8)v3;
	v4 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, &v6);
	return sub_140415D60(a1, v4);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

