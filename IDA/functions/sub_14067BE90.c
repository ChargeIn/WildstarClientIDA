//----- (000000014067BE90) ----------------------------------------------------
__int64 __fastcall sub_14067BE90(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rdx
	char* v8; // rbx
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64* v14; // rax
	__int64 v15; // r8
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-48h] BYREF
	int v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+30h] [rbp-38h]
	char v20; // [rsp+40h] [rbp-28h] BYREF

	v1 = (_QWORD*)a1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = v1[2];
	v3 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v1[2] += 16i64;
	v4 = sub_1400578C0((__int64)v1);
	v5 = sub_14067B760(v1);
	v6 = v5;
	if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 208i64))(v5) >= 2)
	{
		v8 = (char*)sub_1406EE640((__int64)&v17, v1, *(_QWORD*)(v6 + 48) + 8i64);
		if (&v20 != v8)
		{
			v1 = (_QWORD*)*((_QWORD*)v8 + 2);
			if ((*(unsigned int(__fastcall**)(char*))(*(_QWORD*)v8 + 8i64))(v8))
			{
				sub_1400579E0((__int64)v1, v7, v4);
				v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v8 + 2) + 32i64) + 160i64), *((_DWORD*)v8 + 2));
				v11 = *(_QWORD*)(v10 + 16);
				*(_QWORD*)v11 = *v9;
				*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
				*(_QWORD*)(v10 + 16) += 16i64;
				v4 = sub_1400578C0((__int64)v1);
			}
		}
		v17 = off_140B56A08;
		if (v19)
			sub_1400579E0(v19, v7, v18);
		v12 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v4);
		v13 = v1[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	}
	else
	{
		v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v4);
		v15 = v1[2];
		v13 = *v14;
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v13, v4);
	return 1i64;
}
// 14067BF44: variable 'v7' is possibly undefined
// 14067BF60: variable 'v10' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

