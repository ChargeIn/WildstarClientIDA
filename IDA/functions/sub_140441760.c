//----- (0000000140441760) ----------------------------------------------------
__int64 __fastcall sub_140441760(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	_DWORD* v3; // r9
	_QWORD** v4; // rdi
	_QWORD* v5; // r8
	_QWORD* v6; // rbx
	_DWORD* v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	__int64* v10; // rax
	_QWORD** v12; // [rsp+40h] [rbp+8h] BYREF

	v2 = a1;
	if (a1 == a2)
		return a1;
	v3 = *(_DWORD**)(a2 + 8);
	v4 = *(_QWORD***)(a1 + 8);
	v5 = *(_QWORD**)v3;
	v6 = *v4;
	if (*v4 == v4)
	{
	LABEL_5:
		if (v5 != (_QWORD*)v3)
		{
			v12 = v4;
			sub_140441830(a1, (__int64*)&v12, v5, v3);
			return v2;
		}
	}
	else
	{
		while (v5 != (_QWORD*)v3)
		{
			a1 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			v7 = v6;
			v6 = (_QWORD*)*v6;
			v7[4] = *(_DWORD*)(a1 + 16);
			v7[5] = *(_DWORD*)(a1 + 20);
			v7[6] = *(_DWORD*)(a1 + 24);
			v7[7] = *(_DWORD*)(a1 + 28);
			if (v6 == v4)
				goto LABEL_5;
		}
	}
	while (v6 != v4)
	{
		v8 = v6;
		v6 = (_QWORD*)*v6;
		v9 = *v8;
		v10 = (__int64*)v8[1];
		*v10 = *v8;
		*(_QWORD*)(v9 + 8) = v10;
		sub_14018B900((__int64)v8, 0);
	}
	return v2;
}

