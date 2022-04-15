//----- (000000014003CA20) ----------------------------------------------------
__int64 __fastcall sub_14003CA20(__int64 a1, int a2, __int64 a3, _QWORD* a4)
{
	unsigned __int64 i; // rsi
	int** v7; // r14
	unsigned __int64 v8; // rdi
	int* v9; // rax
	unsigned __int16* v10; // rbx
	unsigned __int64 v11; // rdi
	_QWORD* v12; // rax
	unsigned int v13; // eax
	u_long v14; // edi
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	__int64 v18; // [rsp+28h] [rbp-40h]
	u_long v19; // [rsp+78h] [rbp+10h] BYREF

	HIDWORD(qword_140C66780) = 2;
	if (a2)
	{
		if (*a4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16i64) + 8i64))(*a4 - 16i64);
		return 2147500037i64;
	}
	else
	{
		HIDWORD(qword_140C66780) = 3;
		for (i = 0i64; i < qword_140C66778; ++i)
		{
			v7 = (int**)(qword_140C66770 + 8 * i);
			if (*v7)
			{
				v8 = *((_QWORD*)*v7 - 1);
				v9 = sub_14018B280(2 * v8 + 18, 0);
				if (v9)
				{
					*(_QWORD*)v9 = off_140B55060;
					*((_QWORD*)v9 + 1) = v8;
				}
				else
				{
					v9 = 0i64;
				}
				v10 = (unsigned __int16*)(v9 + 4);
				v11 = v8;
				sub_1407DB590(v9 + 4, *v7, v11 * 2);
				v10[v11] = 0;
			}
			else
			{
				v10 = 0i64;
			}
			v12 = sub_14018F0E0(&v17, v10);
			v13 = inet_addr((const char*)v12[1]);
			v14 = ntohl(v13);
			if (v18)
				sub_14018B900(v18, 0);
			v19 = v14;
			sub_14003D090((__int64)&unk_140C66750, &v19);
			if (v10)
				(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 8);
		}
		v15 = qword_140C66DA8;
		v16 = qword_140C66DA8;
		if (qword_140C66DA8)
		{
			while (*(_DWORD*)(v16 + 368) == 5)
			{
				v16 = *(_QWORD*)(v16 + 176);
				if (!v16)
					goto LABEL_25;
			}
			if (qword_140C66DA8)
			{
				do
				{
					if (*(_DWORD*)(v15 + 368) != 5)
						break;
					v15 = *(_QWORD*)(v15 + 176);
				} while (v15);
			}
			sub_1400EA3E0(*(_QWORD*)(v15 + 72), "TrustedIPListReady", &unk_1409D01D7);
		}
	LABEL_25:
		if (*a4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16i64) + 8i64))(*a4 - 16i64);
		return 0i64;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C66770: using guessed type __int64 qword_140C66770;
// 140C66778: using guessed type __int64 qword_140C66778;
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

