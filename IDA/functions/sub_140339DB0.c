//----- (0000000140339DB0) ----------------------------------------------------
void __fastcall sub_140339DB0(__int64 a1, _QWORD* a2)
{
	__int64* v4; // r14
	int v5; // ebp
	_QWORD* v6; // rbx
	int v7; // esi
	int Error; // r12d
	__int64 v9; // rax
	void(__fastcall * **v10)(_QWORD); // rcx
	_WORD* v11; // rsi
	_WORD* v12; // rbx
	void(__fastcall * **v13)(_QWORD); // rcx
	_WORD* v14; // rsi
	_WORD* v15; // rbx
	__int64 v16; // rbx
	int v17; // eax
	__int64 v18; // [rsp+68h] [rbp+10h] BYREF

	v4 = (__int64*)(*a2 + 320i64);
	v5 = 1;
	v6 = sub_140338550(v4);
	v7 = recv(*(_QWORD*)(*a2 + 272i64), (char*)v6[2], *((_DWORD*)v6 + 2), 0);
	Error = WSAGetLastError();
	if (v7)
	{
		while (v7 >= 0)
		{
			v9 = *a2;
			*(_QWORD*)(v9 + 432) += v7;
			++* (_QWORD*)(v9 + 488);
			v6[4] = v6[2] + v7;
			sub_140337F20((_QWORD*)(*a2 + 408i64), v6);
			if (v5)
			{
				v10 = (void(__fastcall***)(_QWORD)) * a2;
				v18 = (__int64)v10;
				if (v10)
					(**v10)(v10);
				sub_140338DF0(a1, 3, &v18);
				v5 = 0;
			}
			v4 = (__int64*)(*a2 + 320i64);
			v6 = sub_140338550(v4);
			v7 = recv(*(_QWORD*)(*a2 + 272i64), (char*)v6[2], *((_DWORD*)v6 + 2), 0);
			Error = WSAGetLastError();
			if (!v7)
				goto LABEL_8;
		}
		sub_140338730(v4, v6);
		if (Error == 10035)
		{
			if (!v5)
				goto LABEL_17;
			v14 = (_WORD*)(*a2 + 222i64);
			if (!*v14)
				sub_140334D90(*a2 + 144i64);
			v15 = (_WORD*)(*a2 + 94i64);
			if (!*v15)
				sub_140334D90(*a2 + 16i64);
			v18 = 0x141DECF40i64;
			sub_1401A3130(11, 3, &v18, v15, v14);
			*(_DWORD*)(*a2 + 280i64) = 5;
		}
		else
		{
			v16 = *a2;
			v17 = WSAGetLastError();
			sub_140338EB0((__int64)L"recv", v17, v16 + 144);
			*(_DWORD*)(*a2 + 280i64) = 5;
		}
	}
	else
	{
	LABEL_8:
		sub_140338730(v4, v6);
		if (!Error)
			goto LABEL_17;
		v11 = (_WORD*)(*a2 + 222i64);
		if (!*v11)
			sub_140334D90(*a2 + 144i64);
		v12 = (_WORD*)(*a2 + 94i64);
		if (!*v12)
			sub_140334D90(*a2 + 16i64);
		v18 = 0x141DECFD0i64;
		sub_1401A3130(11, 0, &v18, v12, v11);
		*(_DWORD*)(*a2 + 280i64) = 1;
	}
	v13 = (void(__fastcall***)(_QWORD)) * a2;
	v18 = (__int64)v13;
	if (v13)
		(**v13)(v13);
	sub_140338DF0(a1, 4, &v18);
LABEL_17:
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
}
// 140AF2C78: using guessed type wchar_t aRecv[5];

