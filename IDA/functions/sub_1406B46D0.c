//----- (00000001406B46D0) ----------------------------------------------------
__int64 __fastcall sub_1406B46D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // eax
	unsigned __int8 v4; // cl
	unsigned int v5; // edx
	unsigned __int64 v6; // rax
	void(__fastcall * **v7)(_QWORD); // rax
	int v9; // [rsp+38h] [rbp+10h] BYREF
	int v10; // [rsp+3Ch] [rbp+14h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = -1;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = v3;
	v5 = (unsigned __int8)v3;
	v6 = (unsigned __int64)v3 >> 8;
	v10 = v4;
	v9 = (unsigned __int8)v6;
	if (!(_BYTE)v6 && v5 >= 0x1F)
		return 0i64;
	v7 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, &v9);
	return sub_140415D60(a1, v7);
}
// 1406B472D: conditional instruction was optimized away because edx.4<100u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

