//----- (00000001404C96C0) ----------------------------------------------------
__int64 __fastcall sub_1404C96C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rsi
	_QWORD* v10; // r14
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rcx
	_QWORD* v13; // rax
	void(__fastcall * **v14)(_QWORD); // rax
	__int64 v15; // rbx
	__int64 v16; // rcx
	int* v17; // rax
	bool v18; // zf
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rax

	v2 = qword_140C659F8;
	if (!a2)
		return 2147500037i64;
	v5 = *(_QWORD*)(qword_140C659F8 + 200);
	if (!v5)
		return 2147500037i64;
	if ((*(__int64 (**)(void))(*(_QWORD*)v5 + 104i64))() == 1
		&& (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C659F8 + 200) + 152i64))(*(_QWORD*)(qword_140C659F8 + 200)) == a2)
	{
		v6 = qword_140C659F8;
		v7 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(v6 + 200) = 0i64;
		}
		v8 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (v8)
		{
			sub_1405AFE10(v8);
			return 0i64;
		}
	}
	else if ((unsigned __int64)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 104i64))(*(_QWORD*)(v2 + 200)) > 1)
	{
		v9 = 0i64;
		v10 = *(_QWORD**)(qword_140C659F8 + 200);
		v11 = 0i64;
		v12 = v10[39];
		if (v12)
		{
			v13 = (_QWORD*)v10[38];
			while (*v13 != a2)
			{
				++v11;
				++v13;
				if (v11 >= v12)
					goto LABEL_17;
			}
			sub_140007270((__int64)(v10 + 38), v11);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 104i64))(a2);
		}
	LABEL_17:
		if ((*(__int64(__fastcall**)(_QWORD*, unsigned __int64))(*v10 + 104i64))(v10, v11) == 1)
		{
			v14 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(_QWORD*))(*v10 + 152i64))(v10);
			v15 = (__int64)v14;
			if (v14)
			{
				(**v14)(v14);
				v16 = *(_QWORD*)(v2 + 200);
				if (v16)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
					*(_QWORD*)(v2 + 200) = 0i64;
				}
				v17 = sub_14018B280(304i64, 0);
				if (v17)
					v9 = sub_1404BDCC0((__int64)v17, v15);
				*(_QWORD*)(v2 + 200) = v9;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				v18 = (unsigned int)sub_1404B5980() == 4;
				v19 = **(_QWORD**)(v2 + 200);
				if (v18)
				{
					v20 = (*(__int64 (**)(void))(v19 + 112))();
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v20 + 120i64))(v20, 32i64);
					v21 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
					v22 = 1i64;
				}
				else
				{
					v23 = (*(__int64 (**)(void))(v19 + 112))();
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v23 + 120i64))(v23, *(unsigned int*)(v2 + 208));
					v21 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 200) + 112i64))(*(_QWORD*)(v2 + 200));
					v22 = *(unsigned int*)(v2 + 212);
				}
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 88i64))(v21, v22);
			}
		}
	}
	return 0i64;
}
// 1404C97EE: variable 'v11' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

