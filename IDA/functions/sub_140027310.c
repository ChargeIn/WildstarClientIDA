//----- (0000000140027310) ----------------------------------------------------
__int64 __fastcall sub_140027310(_QWORD* a1)
{
	char* v2; // rax
	int v3; // eax
	_DWORD* v4; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	void* lpv; // [rsp+28h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v6, v2);
	v3 = sub_1403E1170(lpv, 0x19u);
	v4 = (_DWORD*)a1[2];
	v4[2] = 1;
	*v4 = v3 != 0;
	a1[2] += 16i64;
	if (lpv)
		sub_14018B900((__int64)lpv, 0);
	return 1i64;
}

