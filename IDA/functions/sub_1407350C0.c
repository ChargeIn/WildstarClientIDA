//----- (00000001407350C0) ----------------------------------------------------
__int64 __fastcall sub_1407350C0(__int64 a1)
{
	unsigned __int64 v1; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	int v8; // ebp
	_QWORD* v9; // rbx
	char* v10; // rdx
	_DWORD* v11; // rax
	int* v12; // rsi
	unsigned __int64 v13; // rbx
	int* v14; // rax
	unsigned __int16* v15; // rdi
	unsigned __int64 v16; // rbx
	__int64 result; // rax
	unsigned int v18; // ebx
	__int64 v19; // [rsp+20h] [rbp-58h] BYREF
	__int64 v20; // [rsp+28h] [rbp-50h]
	__int64 v21; // [rsp+40h] [rbp-38h] BYREF
	int* v22; // [rsp+48h] [rbp-30h]
	unsigned __int16* v23; // [rsp+88h] [rbp+10h] BYREF

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
	v7 = v6 + 384;
	v8 = 0;
	switch ((unsigned int)sub_1400F26A0(v6 + 384, 1))
	{
	case 1u:
		v8 = 1;
		break;
	case 2u:
		v8 = 4;
		break;
	case 3u:
		v8 = 8;
		break;
	case 4u:
		v8 = 16;
		break;
	case 5u:
		v8 = 32;
		break;
	case 6u:
		v8 = 128;
		break;
	default:
		break;
	}
	v9 = *(_QWORD**)(v7 + 16);
	v10 = (char*)sub_14018F0E0(&v19, 0i64)[1];
	v11 = (_DWORD*)(v9[3] + 16i64);
	if ((unsigned __int64)v11 < v9[2] && v11 != dword_140A12138 && *(int*)(v9[3] + 24i64) > 0)
		v10 = (char*)sub_140056BB0(v9, 2u, 0i64);
	sub_14018F2D0(&v21, v10);
	if (v20)
		sub_14018B900(v20, 0);
	v12 = v22;
	if (v22)
	{
		v13 = 0i64;
		if (*(_WORD*)v22)
		{
			do
				++v13;
			while (*((_WORD*)v22 + v13));
		}
		v14 = sub_14018B280(2 * v13 + 18, 0);
		if (v14)
		{
			*((_QWORD*)v14 + 1) = v13;
			*(_QWORD*)v14 = off_140B55060;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = (unsigned __int16*)(v14 + 4);
		v16 = v13;
		sub_1407DB590(v14 + 4, v12, v16 * 2);
		v15[v16] = 0;
		v23 = v15;
	}
	else
	{
		v23 = 0i64;
	}
	result = sub_140734670(a1, v8, &v23);
	v18 = result;
	if (v12)
	{
		sub_14018B900((__int64)v12, 0);
		return v18;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63650: using guessed type __int64 qword_140C63650;

