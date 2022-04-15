//----- (000000014011FAB0) ----------------------------------------------------
__int64 __fastcall sub_14011FAB0(_QWORD* a1)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	_DWORD* v5; // rax
	char* v6; // rax
	__int64 v7; // rcx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	WCHAR* v10; // rcx
	int v11; // eax
	__int64 v12; // rcx
	__int16* v13; // rax
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	__int64 v17; // [rsp+20h] [rbp-68h] BYREF
	unsigned __int16* v18; // [rsp+28h] [rbp-60h]
	__int64 v19; // [rsp+40h] [rbp-48h] BYREF
	WCHAR* v20; // [rsp+48h] [rbp-40h]
	__int64 v21; // [rsp+60h] [rbp-28h] BYREF
	WCHAR* v22; // [rsp+68h] [rbp-20h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = (_DWORD*)a1[3];
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || (unsigned int)(v5[2] - 3) > 1)
	{
		v11 = sub_140056D60(a1, 1u);
		v13 = sub_14034BDD0(v12, v11);
		v14 = (unsigned __int64*)sub_14018F0E0(&v21, (unsigned __int16*)v13)[1];
		if (v14)
		{
			v15 = -1i64;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			sub_140058710((__int64)a1, v14, v15);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v10 = v22;
		if (v22)
			goto LABEL_25;
	}
	else
	{
		v6 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v19, v6);
		sub_1400E2630(v7, &v17, v20, &dword_1409D6834);
		v8 = (unsigned __int64*)sub_14018F0E0(&v21, v18)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v22)
			sub_14018B900((__int64)v22, 0);
		if (v18)
			sub_14018B900((__int64)v18, 0);
		if (v20)
		{
			v10 = v20;
		LABEL_25:
			sub_14018B900((__int64)v10, 0);
		}
	}
	return 1i64;
}
// 14011FB50: variable 'v7' is possibly undefined
// 14011FBD5: variable 'v12' is possibly undefined
// 1409D6834: using guessed type int dword_1409D6834;
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

