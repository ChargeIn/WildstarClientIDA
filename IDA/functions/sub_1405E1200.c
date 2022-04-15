//----- (00000001405E1200) ----------------------------------------------------
__int64 __fastcall sub_1405E1200(__int64 a1, __int64 a2)
{
	int* v4; // rsi
	__int64 v5; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	unsigned __int64 v11; // rsi
	_QWORD* v12; // rbx
	unsigned int** v13; // rbx
	unsigned int* v14; // rbx

	if (*(_DWORD*)a2 == *(_DWORD*)(qword_140C635F0 + 5736))
	{
		v4 = *(int**)(a2 + 8);
		v5 = *(_QWORD*)(a1 + 664);
		if (v4)
		{
			v6 = 0i64;
			if (*(_WORD*)v4)
			{
				do
					++v6;
				while (*((_WORD*)v4 + v6));
			}
			v7 = sub_14018B280(2 * v6 + 18, 0);
			if (v7)
			{
				*((_QWORD*)v7 + 1) = v6;
				*(_QWORD*)v7 = off_140B55060;
			}
			else
			{
				v7 = 0i64;
			}
			v8 = v7 + 4;
			v9 = 2 * v6;
			sub_1407DB590(v7 + 4, v4, v9);
			*(_WORD*)((char*)v8 + v9) = 0;
			*(_QWORD*)(a1 + 664) = v8;
		}
		else
		{
			*(_QWORD*)(a1 + 664) = 0i64;
		}
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountPersonalStatusUpdate", &unk_1409D0EFD);
		return 0i64;
	}
	else
	{
		v11 = (*(__int64(__fastcall**)(__int64))(a1 + 424))(a2);
		v12 = *(_QWORD**)(*(_QWORD*)(a1 + 416) + 8 * (v11 % *(_QWORD*)(a1 + 408)));
		if (v12)
		{
			while (v11 != *v12 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 432))(a2, v12 + 2))
			{
				v12 = (_QWORD*)v12[1];
				if (!v12)
					return 0i64;
			}
			v13 = (unsigned int**)(v12 + 3);
			if (v13)
			{
				v14 = *v13;
				sub_1405DCB20((__int64)v14, *(int**)(a2 + 8));
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, *v14);
			}
		}
		return 0i64;
	}
}
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

