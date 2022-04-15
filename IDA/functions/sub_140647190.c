//----- (0000000140647190) ----------------------------------------------------
__int64 __fastcall sub_140647190(__int64 a1, _DWORD* a2)
{
	unsigned __int16** v2; // r14
	unsigned int v3; // eax
	unsigned int v4; // r15d
	int v5; // r13d
	int v6; // r12d
	unsigned int v7; // esi
	__int64 v8; // rax
	int* v9; // rbx
	int v10; // edx
	__int16* v11; // rbp
	__int64 v12; // rcx
	__int16* v13; // rax
	unsigned __int16* v14; // r14
	__int16* v15; // rdi
	int v16; // eax
	int v20; // [rsp+70h] [rbp+18h]

	v2 = (unsigned __int16**)a1;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A69950, qword_140C63858);
	}
	else
	{
		if (dword_140C65254)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401F2F80() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C28 + 40i64))(qword_140C63C28);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	v6 = 0;
	v7 = 0;
	if (!v4)
		return 2147943568i64;
	do
	{
		if (qword_140C63848)
		{
			v8 = qword_140C63848(off_140A69950, v7, qword_140C63858);
		LABEL_17:
			v9 = (int*)v8;
			goto LABEL_18;
		}
		if (dword_140C65254)
		{
			v9 = 0i64;
		}
		else
		{
			if ((int)sub_1401F2F80() >= 0)
			{
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 32i64))(qword_140C63C28, v7);
				goto LABEL_17;
			}
			v9 = 0i64;
		}
	LABEL_18:
		v10 = v9[4];
		if (!v10 || !v9[5])
			goto LABEL_27;
		v11 = sub_14034BDD0(a1, v10);
		v13 = sub_14034BDD0(v12, v9[5]);
		v14 = *v2;
		v15 = v13;
		if (!(unsigned int)sub_14018E2C0((__int64)v11, v14)
			|| v11 != v15 && !(unsigned int)sub_14018E2C0((__int64)v15, v14))
		{
			v16 = *v9;
		LABEL_34:
			*a2 = v16;
			return 0i64;
		}
		if ((__int16*)sub_14018E5E0(v11, v14) != v11 && (v11 == v15 || (__int16*)sub_14018E5E0(v15, v14) != v15))
		{
			v2 = (unsigned __int16**)a1;
		LABEL_27:
			v16 = v20;
			goto LABEL_28;
		}
		v16 = *v9;
		v2 = (unsigned __int16**)a1;
		v5 = v6;
		v20 = *v9;
		v6 = 1;
	LABEL_28:
		++v7;
	} while (v7 < v4);
	if (v6 && !v5)
		goto LABEL_34;
	return 2147943568i64;
}
// 14064726D: variable 'a1' is possibly undefined
// 140647278: variable 'v12' is possibly undefined
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C65254: using guessed type int dword_140C65254;

