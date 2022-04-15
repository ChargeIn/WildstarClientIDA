//----- (00000001401BBDA0) ----------------------------------------------------
__int64 __fastcall sub_1401BBDA0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__int64 v6; // r9
	_QWORD* v7; // r8
	_QWORD* v8; // rax
	unsigned __int64 v9; // rdx
	bool v10; // cf
	unsigned __int64 v11; // rax
	bool v12; // cf
	int v13; // eax
	unsigned int v14; // ecx
	__int64 v16; // [rsp+38h] [rbp+10h]

	v6 = *(_QWORD*)(sub_1401BA830(a1) + 8);
	v7 = (_QWORD*)v6;
	v8 = *(_QWORD**)(v6 + 8);
	while (v8)
	{
		v9 = v8[5];
		v10 = v9 < a3;
		if (v9 == a3)
			v10 = v8[4] < a2;
		if (v10)
		{
			v8 = (_QWORD*)v8[3];
		}
		else
		{
			v7 = v8;
			v8 = (_QWORD*)v8[2];
		}
	}
	if (v7 == (_QWORD*)v6)
		goto LABEL_12;
	v11 = v7[5];
	v12 = a3 < v11;
	if (a3 == v11)
		v12 = a2 < v7[4];
	v16 = (__int64)v7;
	if (v12)
		LABEL_12:
	v16 = v6;
	v13 = sub_1401BBE50(a1, v16);
	v14 = 0;
	if (v13 < 0)
		return (unsigned int)v13;
	return v14;
}

