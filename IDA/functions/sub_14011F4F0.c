//----- (000000014011F4F0) ----------------------------------------------------
__int64 __fastcall sub_14011F4F0(_QWORD* a1)
{
	unsigned __int64* v2; // rdi
	_DWORD* v3; // rax
	char v4; // r14
	_DWORD* v5; // r15
	_DWORD* v6; // rcx
	int v7; // eax
	BOOL v8; // esi
	bool v9; // cf
	_DWORD* v10; // rcx
	int v11; // eax
	_DWORD* v12; // rdx
	unsigned __int64 v13; // r8
	_DWORD* v14; // rcx
	char* v15; // rdx
	LPCWSTR v16; // rdi
	int v17; // eax
	double v18; // xmm0_8
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	unsigned __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
	LPCWSTR lpValue; // [rsp+28h] [rbp-D8h]
	__int64 v24; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v25; // [rsp+48h] [rbp-B8h]
	__int64 v26; // [rsp+50h] [rbp-B0h]
	__int64 v27; // [rsp+58h] [rbp-A8h]
	__int64 v28; // [rsp+60h] [rbp-A0h]
	int NumberStr[128]; // [rsp+70h] [rbp-90h] BYREF

	v2 = (unsigned __int64*)dword_140A12138;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 2u);
	v5 = (_DWORD*)a1[3];
	v6 = dword_140A12138;
	if ((unsigned __int64)(v5 + 8) < a1[2])
		v6 = v5 + 8;
	v7 = v6[2];
	v8 = v7 && (v7 != 1 || *v6);
	sub_1407E4830(NumberStr, 0i64, 0x200ui64);
	v9 = (unsigned __int64)v5 < a1[2];
	v24 = 0i64;
	v25 = 0i64;
	v10 = dword_140A12138;
	if (v9)
		v10 = v5;
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v11 = v10[2];
	LOBYTE(v25) = v4;
	HIDWORD(v24) = v8;
	LODWORD(v24) = 3;
	if (v11 == 3 || v11 == 4 && sub_14005AC80((char*)(*(_QWORD*)v10 + 32i64), &v22))
	{
		if (a1[3] < a1[2])
			v2 = (unsigned __int64*)a1[3];
		v17 = *((_DWORD*)v2 + 2);
		if (v17 != 3)
		{
			if (v17 != 4 || !sub_14005AC80((char*)(*v2 + 32), &v22))
			{
				v18 = 0.0;
				goto LABEL_40;
			}
			LODWORD(lpValue) = 3;
			v2 = &v22;
		}
		v18 = *(double*)v2;
	LABEL_40:
		sub_14034C610(v18, (__int64)NumberStr, 0x100ui64, &v24);
		goto LABEL_41;
	}
	v12 = (_DWORD*)a1[3];
	v13 = a1[2];
	if ((unsigned __int64)v12 >= v13 || v12 == dword_140A12138 || (unsigned int)(v12[2] - 3) > 1)
		goto LABEL_41;
	v14 = dword_140A12138;
	if ((unsigned __int64)v12 < v13)
		v14 = (_DWORD*)a1[3];
	if (v14[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v14))
		{
			v15 = 0i64;
			goto LABEL_31;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v14 = dword_140A12138;
		if (a1[3] < a1[2])
			v14 = (_DWORD*)a1[3];
	}
	v15 = (char*)(*(_QWORD*)v14 + 32i64);
LABEL_31:
	sub_14018F2D0(&v22, v15);
	v16 = lpValue;
	sub_14034C240(lpValue, (__int64)NumberStr, 0x100ui64, (__int64)&v24);
	if (v16)
		sub_14018B900((__int64)v16, 0);
LABEL_41:
	v19 = (unsigned __int64*)sub_14018F0E0(&v22, (unsigned __int16*)NumberStr)[1];
	if (v19)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v19 + v20));
		sub_140058710((__int64)a1, v19, v20);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (lpValue)
		sub_14018B900((__int64)lpValue, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 14011F4F0: using guessed type int NumberStr[128];

