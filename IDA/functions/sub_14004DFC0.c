//----- (000000014004DFC0) ----------------------------------------------------
__int64 __fastcall sub_14004DFC0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // r15d
	__int64* v4; // rax
	__int64 v5; // rbp
	_DWORD* v6; // rax
	signed int v7; // edi
	char* v8; // rdx
	_DWORD* v9; // rax
	int* v10; // rax
	__int64* v11; // rsi
	__int64 v12; // r8
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rbx
	int* v17; // rax
	__int64 v18; // rdi
	__int64 v20; // [rsp+20h] [rbp-68h] BYREF
	__int64 v21; // [rsp+28h] [rbp-60h]
	__int64 v22; // [rsp+40h] [rbp-48h] BYREF
	__int64 v23; // [rsp+48h] [rbp-40h]
	__int64 v24; // [rsp+98h] [rbp+10h] BYREF
	int* v25; // [rsp+A0h] [rbp+18h] BYREF

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v4 = (__int64*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v5 = *v4;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 0;
	else
		v7 = sub_140056D60(a1, 2u);
	if (!v5 || !v7 || !*(_QWORD*)(v5 + 392))
		return 0i64;
	v8 = (char*)sub_14018F0E0(&v20, &word_1409D128C)[1];
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v8 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v22, v8);
	if (v21)
		sub_14018B900(v21, 0);
	v10 = sub_14018B280(5200i64, 8u);
	if (v10)
		v11 = (__int64*)sub_140048490((__int64)v10, v5);
	else
		v11 = 0i64;
	if ((int)sub_140048CE0((__int64)v11, *(__int64**)(v5 + 392), v23, v7) >= 0)
	{
		v12 = *(_QWORD*)(v5 + 416);
		v13 = v12;
		v14 = *(_QWORD*)(v12 + 8);
		v15 = v14;
		while (v15)
		{
			if (*(_DWORD*)(v15 + 32) < v7)
			{
				v15 = *(_QWORD*)(v15 + 24);
			}
			else
			{
				v13 = v15;
				v15 = *(_QWORD*)(v15 + 16);
			}
		}
		if (v13 == v12 || (v24 = v13, v7 < *(_DWORD*)(v13 + 32)))
			v24 = v12;
		v16 = v24;
		if (v24 == v12)
		{
			v17 = (int*)v12;
			while (v14)
			{
				if (*(_DWORD*)(v14 + 32) < v7)
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v17 = (int*)v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			}
			if (v17 == (int*)v12 || v7 < v17[8])
			{
				LODWORD(v20) = v7;
				v21 = 0i64;
				v24 = (__int64)v17;
				sub_14004F0D0(v5 + 408, &v25, &v24, &v20);
				v17 = v25;
			}
			*((_QWORD*)v17 + 5) = v11;
		}
		else
		{
			v18 = *(_QWORD*)(v24 + 40);
			if (v18)
			{
				sub_1400485E0(*(__int64**)(v24 + 40));
				sub_14018B900(v18, 0);
			}
			*(_QWORD*)(v16 + 40) = v11;
		}
		v2 = sub_140049EA0((__int64)v11, a1);
	}
	else if (v11)
	{
		sub_1400485E0(v11);
		sub_14018B900((__int64)v11, 0);
	}
	if (v23)
		sub_14018B900(v23, 0);
	return v2;
}
// 1409D128C: using guessed type unsigned __int16 word_1409D128C;
// 140A12138: using guessed type _DWORD dword_140A12138[4];

