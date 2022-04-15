//----- (00000001400435D0) ----------------------------------------------------
__int64 __fastcall sub_1400435D0(_QWORD* a1)
{
	_DWORD* v2; // rax
	__int64* v3; // rdi
	_DWORD* v4; // rcx
	int v5; // ebp
	char* v6; // rdx
	__int64* v7; // rcx
	int v8; // eax
	int v9; // esi
	int v10; // eax
	int* v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rdi
	int* v14; // rax
	__int64 v15; // rcx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	__int64 v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+40h] [rbp-28h] BYREF
	int* v20; // [rsp+48h] [rbp-20h]
	__int64 v21; // [rsp+78h] [rbp+10h] BYREF

	if (!qword_140C65898)
		return 0i64;
	v2 = (_DWORD*)a1[3];
	v3 = (__int64*)dword_140A12138;
	v4 = dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v4 = v2;
	v5 = 0;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
			v6 = 0i64;
			goto LABEL_12;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	}
	v6 = (char*)(*(_QWORD*)v4 + 32i64);
LABEL_12:
	sub_14018F2D0(&v19, v6);
	v7 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v7 = (__int64*)(a1[3] + 16i64);
	v8 = *((_DWORD*)v7 + 2);
	if (v8 == 3)
		goto LABEL_18;
	if (v8 == 4 && sub_14005AC80((char*)(*v7 + 32), (unsigned __int64*)&v21))
	{
		LODWORD(v18) = 3;
		v7 = &v17;
		v17 = v21;
	LABEL_18:
		v9 = (int)*(double*)v7;
		goto LABEL_19;
	}
	v9 = 0;
LABEL_19:
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v3 = (__int64*)(a1[3] + 32i64);
	v10 = *((_DWORD*)v3 + 2);
	if (v10 == 3)
		goto LABEL_25;
	if (v10 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v21))
	{
		LODWORD(v18) = 3;
		v3 = &v17;
		v17 = v21;
	LABEL_25:
		v5 = (int)*(double*)v3;
	}
	v11 = v20;
	if ((unsigned int)(v9 - 1) <= 3 && (v9 != 4 || qword_140C65898))
	{
		v12 = sub_14013A630(*(_QWORD*)(qword_140C65898 + 29504) + 2496i64, v20);
		v13 = v12;
		if (v12)
		{
			if (v9 == 1)
			{
				*(_DWORD*)(v12 + 268) = v5;
			}
			else
			{
				sub_1404326C0((__int64)&v17, v9);
				v14 = sub_140044B90(v13 + 280, (__int64)&v17);
				v15 = v18;
				*v14 = v5;
				if (v15)
					sub_14018B900(v15, 0);
			}
			sub_1400437C0();
		}
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

