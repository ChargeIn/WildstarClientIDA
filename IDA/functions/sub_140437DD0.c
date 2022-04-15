//----- (0000000140437DD0) ----------------------------------------------------
__int64 __fastcall sub_140437DD0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	_QWORD* v7; // r8
	_QWORD* v8; // rax
	_QWORD* v9; // rcx
	char v10[24]; // [rsp+20h] [rbp-18h] BYREF
	_QWORD* v11; // [rsp+40h] [rbp+8h]
	int v12; // [rsp+48h] [rbp+10h] BYREF

	v12 = a2;
	result = qword_140C65898;
	v4 = qword_140C658D8;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5)
	{
		v6 = qword_140C658D8 + 32;
		if (a3)
		{
			sub_1400293C0(v6, (__int64)v10, &v12);
			v7 = *(_QWORD**)(v4 + 72);
			v8 = (_QWORD*)v7[1];
			v9 = v7;
			while (v8)
			{
				if (v8[4] < *(_QWORD*)(v5 + 424))
				{
					v8 = (_QWORD*)v8[3];
				}
				else
				{
					v9 = v8;
					v8 = (_QWORD*)v8[2];
				}
			}
			if (v9 == v7 || (v11 = v9, *(_QWORD*)(v5 + 424) < v9[4]))
				v11 = *(_QWORD**)(v4 + 72);
			if (v11 == v7)
				return sub_140438F60(v4);
			v6 = v11[5];
		}
		sub_1400EE810(v6, &v12);
		return sub_140438F60(v4);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140437DD0: using guessed type char var_18[24];

