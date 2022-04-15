//----- (00000001404C9520) ----------------------------------------------------
void __fastcall sub_1404C9520(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rax
	int* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // [rsp+30h] [rbp+8h] BYREF

	v17 = a1;
	v2 = qword_140C659F8;
	v3 = 0i64;
	v5 = *(_QWORD*)(qword_140C659F8 + 200);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(v2 + 200) = 0i64;
	}
	if (a2)
	{
		v6 = *(_QWORD*)a2;
		v17 = 0i64;
		if ((*(int(__fastcall**)(__int64, __int64*))(v6 + 208))(a2, &v17) < 0)
		{
			v9 = sub_14018B280(304i64, 0);
			if (!v9)
				goto LABEL_10;
			v8 = sub_1404BDCC0((__int64)v9, a2);
		}
		else
		{
			v7 = sub_14018B280(320i64, 0);
			if (!v7)
				goto LABEL_10;
			v8 = sub_1404BEA60((__int64)v7, a2);
		}
		v3 = v8;
	LABEL_10:
		*(_QWORD*)(v2 + 200) = v3;
		v10 = sub_1405B1510(&qword_140C7DFB0);
		if (v10 && *(_DWORD*)(v10 + 192) == 4)
		{
			v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 120i64))(v11, 32i64);
			v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
			v13 = 1i64;
		}
		else
		{
			v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 120i64))(v14, *(unsigned int*)(v2 + 208));
			v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
			v13 = *(unsigned int*)(v2 + 212);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 88i64))(v12, v13);
		v15 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (v15)
			sub_1405AF260(v15);
		if (*(_DWORD*)(a2 + 652))
			sub_1404C3B50((__int64*)a2);
		return;
	}
	v16 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	if (v16)
		sub_1405AFE10(v16);
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

