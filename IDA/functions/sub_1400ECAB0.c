#include "../winhttp.h"

//----- (00000001400ECAB0) ----------------------------------------------------
__int64 __fastcall sub_1400ECAB0(__int64 a1, __int64 a2, __int64* a3)
{
	_QWORD* v3; // rbx
	char* v4; // r10
	_QWORD* v6; // r9
	char* v8; // rdx
	int v9; // r8d
	int v10; // ecx
	char* v11; // r11
	int v12; // eax
	_BYTE* v13; // r11
	char* v14; // r10
	_BYTE* v15; // rdx
	_QWORD* v16; // rax
	bool v17; // di
	__int64 v18; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v22; // [rsp+20h] [rbp-28h] BYREF
	__int64 v23; // [rsp+28h] [rbp-20h]

	v3 = *(_QWORD**)(a1 + 3296);
	v4 = off_140C573F0;
	v6 = (_QWORD*)v3[1];
	while (v6)
	{
		v8 = (char*)v6[4];
		LOBYTE(v9) = *v8;
		v10 = *v8 - *off_140C573F0;
		if (v10)
		{
		LABEL_6:
			if (v10 < 0)
			{
				v6 = (_QWORD*)v6[3];
				continue;
			}
		}
		else
		{
			v11 = (char*)(off_140C573F0 - v8);
			while ((_BYTE)v9)
			{
				v9 = v8[1];
				v12 = (v8++)[(_QWORD)v11 + 1];
				v10 = v9 - v12;
				if (v9 != v12)
					goto LABEL_6;
			}
		}
		v3 = v6;
		v6 = (_QWORD*)v6[2];
	}
	if (v3 != *(_QWORD**)(a1 + 3296))
	{
	LABEL_11:
		v13 = (_BYTE*)v3[4];
		v14 = (char*)(v4 - v13);
		v15 = v13;
		while (*v15 == v15[(_QWORD)v14])
		{
			if (*v15)
			{
				if ((unsigned __int64)(++v15 - v13) < 9)
					continue;
			}
			v16 = sub_14018F2D0(&v22, v13 + 9);
			v17 = (unsigned int)sub_140731430((__int64)v16, a3) == 0;
			if (v23)
				sub_14018B900(v23, 0);
			if (v17)
				return 0i64;
			v18 = v3[3];
			if (v18)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v18 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
			if (v3 != *(_QWORD**)(a1 + 3296))
			{
				v4 = off_140C573F0;
				goto LABEL_11;
			}
			return 1i64;
		}
	}
	return 1i64;
}
// 140C573F0: using guessed type char *off_140C573F0;

