//----- (0000000140036CF0) ----------------------------------------------------
__int64 __fastcall sub_140036CF0(__int64 a1, __int64 a2, float a3)
{
	int v3; // ebp
	__int64 v5; // rax
	int* v6; // r8
	unsigned __int16* v7; // rdx
	int* v8; // rax
	__int64(__fastcall * *v9)(); // rcx
	int* v10; // r12
	int* v11; // rbx
	__int16* v12; // rax
	int* v13; // r14
	__int64 v14; // r13
	__int64 v15; // rsi
	int* v16; // r14
	__int64 v17; // r12
	__int64 v18; // rsi
	int** v20; // rax
	int** v21; // r13
	int* v22; // r14
	__int64 v23; // r12
	__int64 v24; // rdi
	__int64 v25; // rdx
	__int64 v26; // rbx
	BOOL v27; // ecx
	__int64 v29; // [rsp+80h] [rbp+8h] BYREF
	__int64 v30; // [rsp+98h] [rbp+20h]

	v3 = 0;
	if (!*(_DWORD*)(a1 + 168))
	{
		v5 = *(_QWORD*)(qword_140C635F0 + 5720);
		if (v5 && (v6 = *(int**)(qword_140C635F0 + 5712)) != 0i64)
		{
			sub_140038570(a1, *(int**)(qword_140C635F0 + 5720), v6);
		}
		else
		{
			v7 = *(unsigned __int16**)(qword_140C635F0 + 5728);
			if (v7 && v5)
			{
				sub_140038740(a1, v7, *(int**)(qword_140C635F0 + 5720));
				*(_QWORD*)(qword_140C635F0 + 5728) = 0i64;
			}
		}
	}
	v30 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthString");
	if (v30)
	{
		v8 = sub_14018B280(18i64, 0);
		if (v8)
		{
			v9 = off_140B55060;
			*((_QWORD*)v8 + 1) = 0i64;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v10 = v8 + 4;
		*((_WORD*)v8 + 8) = 0;
		v11 = v8 + 4;
		if (dword_140C67030 != 3)
		{
			v12 = sub_14034BDD0((__int64)v9, 397308);
			v13 = (int*)v12;
			if (v12)
			{
				v14 = *((_QWORD*)v10 - 1);
				v15 = 0i64;
				if (*v12)
				{
					do
						++v15;
					while (v12[v15]);
				}
				v11 = (int*)sub_14018D140(v10, v15 + v14);
				sub_1407DB590((int*)((char*)v11 + 2 * v14), v13, 2 * v15);
				*((_WORD*)v11 + v15 + v14) = 0;
				if (v10 != v11)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
			}
			v16 = v11;
			if (v11)
				v17 = *((_QWORD*)v11 - 1);
			else
				v17 = 0i64;
			v18 = 0i64;
			while (asc_1409F56B8[++v18] != 0)
				;
			v11 = (int*)sub_14018D140(v11, v18 + v17);
			sub_1407DB590((int*)((char*)v11 + 2 * v17), (int*)L" -- ", 2 * v18);
			*((_WORD*)v11 + v18 + v17) = 0;
			if (v16 != v11 && v16)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		}
		v20 = (int**)sub_14018D540(
			&v29,
			(__int64)L"%s -- %s",
			*(_QWORD*)(qword_140C635F0 + 5872),
			*(_QWORD*)(qword_140C635F0 + 5880));
		v21 = v20;
		if (*v20)
		{
			v22 = v11;
			v23 = v11 ? *((_QWORD*)v11 - 1) : 0i64;
			v24 = *((_QWORD*)*v20 - 1);
			v11 = (int*)sub_14018D140(v11, v24 + v23);
			sub_1407DB590((int*)((char*)v11 + 2 * v23), *v21, 2 * v24);
			*((_WORD*)v11 + v24 + v23) = 0;
			if (v22 != v11)
			{
				if (v22)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v22 - 2) + 8i64))(v22 - 4);
			}
		}
		if (v29)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v30 + 80i64))(v30, v11);
		if (v11)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	}
	v26 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"CapsLockIndicator");
	if (v26)
	{
		v27 = (GetKeyState(20) & 1) != 0;
		sub_1400D42F0(v26, v27, 0, 4.0);
	}
	LOBYTE(v3) = *(_DWORD*)(a1 + 168) <= 1u;
	*(_DWORD*)(a1 + 144) = v3;
	return sub_14003DEA0(a1, v25, a3);
}
// 140036DE9: variable 'v9' is possibly undefined
// 140036FF6: variable 'v25' is possibly undefined
// 1409F5690: using guessed type wchar_t aAuthstring[11];
// 1409F56B8: using guessed type wchar_t asc_1409F56B8[5];
// 1409F56C8: using guessed type wchar_t aCapslockindica[18];
// 1409F56F0: using guessed type wchar_t aSS[9];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C67030: using guessed type int dword_140C67030;

