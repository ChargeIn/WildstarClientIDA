//----- (000000014012B2B0) ----------------------------------------------------
__int64 __fastcall sub_14012B2B0(__int64 a1, _QWORD* a2)
{
	_QWORD* v3; // rdi
	__int64 v4; // rbx
	_WORD* v5; // r9
	__int64 v6; // r8
	__int64 v7; // rdx
	int v8; // eax
	_QWORD* v9; // rdi
	_WORD* v10; // r9
	int v11; // edx
	int v12; // eax
	__int64 v13; // rdx
	int v14; // eax
	int v15; // eax

	v3 = *(_QWORD**)(*(_QWORD*)(a1 + 656) + 56i64);
	if (!v3)
		sub_140056830(a2, (unsigned __int64*)"Need to add something before an append");
	v4 = 0i64;
	if ((*(__int64(__fastcall**)(_QWORD*))(*v3 + 48i64))(v3))
		v5 = 0i64;
	else
		v5 = (_WORD*)sub_1401A4F40((__int64)(v3 + 3));
	v6 = 0i64;
	v7 = (unsigned int)(unsigned __int16)*v5 - 84;
	if (*v5 == 84)
	{
		v7 = (unsigned __int16)*v5;
		while ((_WORD)v7)
		{
			v7 = (unsigned __int16)v5[v6 + 1];
			v8 = (unsigned __int16)word_140A31D42[v6++];
			if ((_DWORD)v7 != v8)
				goto LABEL_10;
		}
		v9 = (_QWORD*)v3[7];
		if (!v9
			|| (!(*(__int64(__fastcall**)(_QWORD*, __int64, __int64))(*v9 + 48i64))(v9, v7, v6)
				? (v10 = (_WORD*)sub_1401A4F40((__int64)(v9 + 3)))
				: (v10 = 0i64),
				v6 = 0i64,
				*v10 != 116))
		{
		LABEL_20:
			sub_140056830(a2, (unsigned __int64*)"Need to add a table row before you can add a table data!", v6);
		}
		LOWORD(v11) = *v10;
		while ((_WORD)v11)
		{
			v11 = (unsigned __int16)v10[v6 + 1];
			v12 = (unsigned __int16)word_1409DB516[v6++];
			if (v11 != v12)
				goto LABEL_20;
		}
		v3 = (_QWORD*)v9[7];
		if (!v3 || (v6 = sub_1400F9B40((__int64)v3), *(_WORD*)v6 != 116))
			LABEL_26:
		sub_140056830(a2, (unsigned __int64*)"Need to add a table row before you can add a table data!", v6);
		v13 = 116i64;
		while ((_WORD)v13)
		{
			v13 = *(unsigned __int16*)(v6 + 2 * v4 + 2);
			v14 = (unsigned __int16)word_1409DB586[v4++];
			if ((_DWORD)v13 != v14)
				goto LABEL_26;
		}
	}
	else
	{
	LABEL_10:
		if ((*(__int64(__fastcall**)(_QWORD*, __int64, __int64))(*v3 + 48i64))(v3, v7, v6))
			v6 = 0i64;
		else
			v6 = sub_1401A4F40((__int64)(v3 + 3));
		if (*(_WORD*)v6 != 80)
			LABEL_32:
		sub_140056830(a2, (unsigned __int64*)"Unknown append type", v6);
		v13 = *(unsigned __int16*)v6;
		while ((_WORD)v13)
		{
			v13 = *(unsigned __int16*)(v6 + 2 * v4 + 2);
			v15 = (unsigned __int16)word_1409DB476[v4++];
			if ((_DWORD)v13 != v15)
				goto LABEL_32;
		}
	}
	return (*(__int64(__fastcall**)(_QWORD*, __int64, __int64))(*v3 + 8i64))(v3, v13, v6);
}
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 1409DB476: using guessed type __int16 word_1409DB476[];
// 1409DB516: using guessed type __int16 word_1409DB516[55];
// 1409DB586: using guessed type __int16 word_1409DB586[171];
// 140A31D42: using guessed type __int16 word_140A31D42[];

