//----- (0000000140694370) ----------------------------------------------------
__int64 __fastcall sub_140694370(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax
	_DWORD* v8; // rax

	if (qword_140C65C28
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_140643EA0(qword_140C65C28, ***(_DWORD***)(v3 + 8))) != 0)
	{
		v5 = (_DWORD*)a1[2];
		v6 = *(_QWORD*)(v4 + 32) == 0i64;
		v5[2] = 1;
		result = 1i64;
		*v5 = !v6;
		a1[2] += 16i64;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

