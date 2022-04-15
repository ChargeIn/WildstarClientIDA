//----- (000000014050F800) ----------------------------------------------------
__int64 __fastcall sub_14050F800(_QWORD* a1)
{
	int v2; // eax
	unsigned int v3; // r10d
	_QWORD** v4; // r11
	int v5; // r9d
	int v6; // edi
	_QWORD* v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v11; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = 0;
	v4 = (_QWORD**)(qword_140C7DCD0 + 8);
	v5 = v2;
	v6 = 11712;
	while (1)
	{
		v7 = (_QWORD*)**v4;
		if (v7 != *v4)
			break;
	LABEL_7:
		++v3;
		v4 += 2;
		if (v3 >= 0xB)
			return 0i64;
	}
	while (1)
	{
		v8 = v7[2];
		v9 = *(unsigned int*)(v8 + 56);
		if ((unsigned int)v9 <= 0xD && _bittest(&v6, v9) && *(_DWORD*)(v8 + 60) == v5)
			break;
		v7 = (_QWORD*)*v7;
		if (v7 == *v4)
			goto LABEL_7;
	}
	v11 = sub_1405A8A40(v9, v5);
	if (!v11)
		return 0i64;
	return sub_140663030(a1, v11);
}
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

