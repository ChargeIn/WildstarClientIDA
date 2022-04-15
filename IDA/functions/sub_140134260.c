//----- (0000000140134260) ----------------------------------------------------
char __fastcall sub_140134260(__int64 a1, unsigned __int64 a2)
{
	_QWORD* v2; // r9
	_QWORD* v3; // r8
	_QWORD* v4; // rax
	char v6[24]; // [rsp+20h] [rbp-18h] BYREF
	_QWORD* v7; // [rsp+40h] [rbp+8h]
	unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

	v8 = a2;
	v2 = *(_QWORD**)(a1 + 8);
	v3 = v2;
	v4 = (_QWORD*)v2[1];
	while (v4)
	{
		if (v4[4] < a2)
		{
			v4 = (_QWORD*)v4[3];
		}
		else
		{
			v3 = v4;
			v4 = (_QWORD*)v4[2];
		}
	}
	if (v3 == v2 || (v7 = v3, a2 < v3[4]))
		v7 = *(_QWORD**)(a1 + 8);
	if (v7 != v2)
		return 0;
	sub_140007810(a1, (__int64)v6, &v8);
	return 1;
}
// 140134260: using guessed type char var_18[24];

