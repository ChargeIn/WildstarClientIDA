//----- (00000001403DEC00) ----------------------------------------------------
__int64 __fastcall sub_1403DEC00(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdx
	_QWORD* v3; // r8
	_QWORD* v4; // rcx
	_QWORD* v5; // rax
	_QWORD* v7; // [rsp+10h] [rbp+10h]

	if (!a2)
		return 0i64;
	v2 = *(_QWORD*)(a2 + 312);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD**)(a1 + 28400);
	v4 = v3;
	v5 = (_QWORD*)v3[1];
	while (v5)
	{
		if (v5[4] < v2)
		{
			v5 = (_QWORD*)v5[3];
		}
		else
		{
			v4 = v5;
			v5 = (_QWORD*)v5[2];
		}
	}
	if (v4 == v3 || (v7 = v4, v2 < v4[4]))
		v7 = v3;
	if (v7 != v3)
		return v7[5];
	else
		return 0i64;
}

