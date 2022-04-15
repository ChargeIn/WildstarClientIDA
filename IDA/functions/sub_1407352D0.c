//----- (00000001407352D0) ----------------------------------------------------
__int64 __fastcall sub_1407352D0(__int64 a1)
{
	unsigned __int64 v1; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	char* v8; // rdx
	_DWORD* v9; // rax
	int* v10; // rsi
	unsigned __int64 v11; // rbx
	int* v12; // rax
	unsigned __int16* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 result; // rax
	unsigned int v16; // ebx
	__int64 v17; // [rsp+20h] [rbp-58h] BYREF
	__int64 v18; // [rsp+28h] [rbp-50h]
	__int64 v19; // [rsp+40h] [rbp-38h] BYREF
	int* v20; // [rsp+48h] [rbp-30h]
	unsigned __int16* v21; // [rsp+88h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v1)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v1)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = *(_QWORD**)(v6 + 400);
	v8 = (char*)sub_14018F0E0(&v17, 0i64)[1];
	v9 = (_DWORD*)v7[3];
	if ((unsigned __int64)v9 < v7[2] && v9 != dword_140A12138 && (int)v9[2] > 0)
		v8 = (char*)sub_140056BB0(v7, 1u, 0i64);
	sub_14018F2D0(&v19, v8);
	if (v18)
		sub_14018B900(v18, 0);
	v10 = v20;
	if (v20)
	{
		v11 = 0i64;
		if (*(_WORD*)v20)
		{
			do
				++v11;
			while (*((_WORD*)v20 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 1) = v11;
			*(_QWORD*)v12 = off_140B55060;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = (unsigned __int16*)(v12 + 4);
		v14 = v11;
		sub_1407DB590(v12 + 4, v10, v14 * 2);
		v13[v14] = 0;
		v21 = v13;
	}
	else
	{
		v21 = 0i64;
	}
	result = sub_140734670(a1, 64, &v21);
	v16 = result;
	if (v10)
	{
		sub_14018B900((__int64)v10, 0);
		return v16;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63650: using guessed type __int64 qword_140C63650;

