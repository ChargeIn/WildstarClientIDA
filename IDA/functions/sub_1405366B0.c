//----- (00000001405366B0) ----------------------------------------------------
__int64 __fastcall sub_1405366B0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rdx
	char* v4; // rdx
	_QWORD* v5; // rax
	__m128i* v6; // rsi
	_QWORD* v7; // rbx
	__int64 v8; // rdx
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	if (v3[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v3))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
	LABEL_11:
		v4 = (char*)(*(_QWORD*)v3 + 32i64);
		goto LABEL_12;
	}
	v4 = 0i64;
LABEL_12:
	sub_14018F2D0(v13, v4);
	v5 = *(_QWORD**)(v2 + 1384);
	v6 = (__m128i*)v13[1];
	v7 = (_QWORD*)v5[2];
	if (v7 != v5)
	{
		do
		{
			v8 = *(_QWORD*)(v2 + 32);
			if (v8)
				sub_140109710(v7 + 18, v8 + 240, v6, 0);
			v9 = v7[3];
			if (v9)
			{
				v7 = (_QWORD*)v7[3];
				for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
					v7 = i;
			}
			else
			{
				for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = (_QWORD*)j;
				if (v7[3] != j)
					v7 = (_QWORD*)j;
			}
		} while (v7 != *(_QWORD**)(v2 + 1384));
	}
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

