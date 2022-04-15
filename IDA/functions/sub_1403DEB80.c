//----- (00000001403DEB80) ----------------------------------------------------
__int64 __fastcall sub_1403DEB80(__int64 a1, int a2, int a3)
{
	__int64 v4; // rax
	_QWORD* v5; // r8
	unsigned __int64 v6; // rdx
	_QWORD* v7; // rax
	_QWORD* v8; // rcx
	_QWORD* v10; // [rsp+48h] [rbp+20h]

	if (!a2)
		return 0i64;
	v4 = sub_1403D90D0(a1, a3);
	if (!v4)
		return 0i64;
	v5 = *(_QWORD**)(a1 + 28400);
	v6 = *(_QWORD*)(v4 + 312);
	v7 = (_QWORD*)v5[1];
	v8 = v5;
	while (v7)
	{
		if (v7[4] < v6)
		{
			v7 = (_QWORD*)v7[3];
		}
		else
		{
			v8 = v7;
			v7 = (_QWORD*)v7[2];
		}
	}
	if (v8 == v5 || (v10 = v8, v6 < v8[4]))
		v10 = *(_QWORD**)(a1 + 28400);
	if (v10 != v5)
		return v10[5];
	else
		return 0i64;
}

