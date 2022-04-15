//----- (0000000140744680) ----------------------------------------------------
__int64 __fastcall sub_140744680(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	_QWORD* v3; // rcx
	__int64 v4; // r8
	_DWORD* v5; // rcx
	__int64 result; // rax
	bool v7; // zf
	_DWORD* v8; // rax

	v2 = (unsigned int)sub_140056D60(a1, 1u) - 1;
	v3 = *(_QWORD**)(qword_140C65898 + 27728);
	if (!v3 || v2 >= v3[12])
		goto LABEL_9;
	if (v2)
	{
		if (v2 <= v3[13])
			--v2;
	}
	else
	{
		v2 = v3[13];
	}
	v4 = *(_QWORD*)(v3[11] + 8 * v2);
	if (v4)
	{
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(v4 + 232) == 0;
		v5[2] = 1;
		*v5 = !v7;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_9:
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

