//----- (0000000140534F20) ----------------------------------------------------
__int64 __fastcall sub_140534F20(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	_DWORD* v4; // rsi
	__int64(__fastcall * **v5)(); // rcx
	int v6; // eax
	unsigned int v7; // r14d
	_QWORD* v8; // rdx
	unsigned __int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rbx
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-30h] BYREF
	int v22; // [rsp+28h] [rbp-28h]
	_QWORD* v23; // [rsp+30h] [rbp-20h]
	__int64(__fastcall * *v24)(); // [rsp+38h] [rbp-18h] BYREF
	int v25; // [rsp+40h] [rbp-10h]
	_QWORD* v26; // [rsp+48h] [rbp-8h]
	__int64(__fastcall * *v27)(); // [rsp+78h] [rbp+28h] BYREF

	v3 = sub_14052E9B0(a1);
	if (!v3)
		return 0i64;
	v4 = dword_140A12138;
	v5 = (__int64(__fastcall***)())dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64(__fastcall***)())(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)*v5 + 32, (unsigned __int64*)&v27))
		{
			v7 = 0;
			goto LABEL_9;
		}
		v22 = 3;
		v5 = &v21;
		v21 = v27;
	}
	v7 = (int)*(double*)v5;
LABEL_9:
	v26 = a1;
	v25 = -2;
	v24 = off_140B56A08;
	sub_1400579E0((__int64)a1, v2, -2);
	v8 = v26;
	v9 = v26[2];
	if (v26[3] + 32i64 < v9)
		v4 = (_DWORD*)(v26[3] + 32i64);
	*(_QWORD*)v9 = *(_QWORD*)v4;
	*(_DWORD*)(v9 + 8) = v4[2];
	v8[2] += 16i64;
	v10 = sub_1400578C0((__int64)v26);
	v25 = v10;
	v12 = *(_QWORD*)(v3 + 1384);
	v13 = *(_QWORD*)(v12 + 16);
	if (v13 != v12)
	{
		do
		{
			v21 = off_140B56A08;
			v23 = v26;
			v22 = -2;
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v24[1])(&v24))
			{
				v14 = sub_14005C3C0(*(_QWORD*)(v26[4] + 160i64), v25);
				v16 = *(_QWORD*)(v15 + 16);
				*(_QWORD*)v16 = *v14;
				*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
				*(_QWORD*)(v15 + 16) += 16i64;
				v22 = sub_1400578C0((__int64)v23);
			}
			sub_140774670(v13 + 48, v7, (__int64)&v21);
			v17 = *(_QWORD*)(v13 + 24);
			if (v17)
			{
				v13 = *(_QWORD*)(v13 + 24);
				for (i = *(_QWORD*)(v17 + 16); i; i = *(_QWORD*)(i + 16))
					v13 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v13 = j;
				if (*(_QWORD*)(v13 + 24) != j)
					v13 = j;
			}
		} while (v13 != *(_QWORD*)(v3 + 1384));
		v10 = v25;
	}
	v24 = off_140B56A08;
	if (v26)
		sub_1400579E0((__int64)v26, v11, v10);
	return 0i64;
}
// 140534FD0: variable 'v2' is possibly undefined
// 140535069: variable 'v15' is possibly undefined
// 140535115: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

