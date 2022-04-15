//----- (00000001400D96C0) ----------------------------------------------------
__int64 __fastcall sub_1400D96C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rax
	_DWORD* v5; // rdx
	bool v6; // zf

	v2 = sub_1400D66A0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 448);
	if (!v4)
		return 0i64;
	v5 = (_DWORD*)a1[2];
	v6 = *(_DWORD*)(v4 + 16) == 0;
	v5[2] = 1;
	result = 1i64;
	*v5 = !v6;
	a1[2] += 16i64;
	return result;
}

