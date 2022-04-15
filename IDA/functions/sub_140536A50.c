//----- (0000000140536A50) ----------------------------------------------------
__int64 __fastcall sub_140536A50(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	char* v4; // rsi
	int v5; // eax
	int v6; // eax
	int v7; // ebp
	_DWORD* v8; // rcx
	__int64 v9; // rax
	__m128i* v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v17; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v18; // [rsp+38h] [rbp-20h]
	__int64 v19; // [rsp+68h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = 0i64;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 == 3)
		goto LABEL_8;
	if (v5 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v19))
	{
		LODWORD(v18) = 3;
		v3 = &v17;
		v17 = v19;
	LABEL_8:
		v6 = (int)*(double*)v3;
		goto LABEL_9;
	}
	v6 = 0;
LABEL_9:
	v7 = v6 - 1;
	if ((unsigned int)(v6 - 1) > 5)
		return 0i64;
	v8 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v8 = (_DWORD*)(a1[3] + 32i64);
	if (v8[2] == 4)
		goto LABEL_18;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v8))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v8 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
			v8 = (_DWORD*)(a1[3] + 32i64);
	LABEL_18:
		v4 = (char*)(*(_QWORD*)v8 + 32i64);
	}
	sub_14018F2D0(&v17, v4);
	v9 = *(_QWORD*)(v2 + 1384);
	v10 = v18;
	v11 = *(_QWORD*)(v9 + 16);
	if (v11 != v9)
	{
		do
		{
			v12 = *(_QWORD*)(v2 + 32);
			if (v12)
				sub_140109710((__int64*)(v11 + 48 * (v7 + 4i64)), v12 + 240, v10, 0);
			v13 = *(_QWORD*)(v11 + 24);
			if (v13)
			{
				v11 = *(_QWORD*)(v11 + 24);
				for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
					v11 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v11 = j;
				if (*(_QWORD*)(v11 + 24) != j)
					v11 = j;
			}
		} while (v11 != *(_QWORD*)(v2 + 1384));
	}
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

