//----- (000000014057D5B0) ----------------------------------------------------
__int64 __fastcall sub_14057D5B0(__int64 a1, __int64 a2)
{
	int** v3; // r15
	unsigned __int64 i; // rbp
	__int64 v5; // r14
	int* v6; // rsi
	__int64 v7; // r13
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx

	v3 = (int**)(a2 + 16);
	for (i = 0i64; i < 0xA; ++i)
	{
		if ((int)i < *(_DWORD*)(a1 + 632))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 624) + 8i64 * (int)i);
			if (v5)
			{
				v6 = *v3;
				v7 = *(_QWORD*)(v5 + 24);
				if (*v3)
				{
					v8 = 0i64;
					if (*(_WORD*)v6)
					{
						do
							++v8;
						while (*((_WORD*)v6 + v8));
					}
					v9 = sub_14018B280(2 * v8 + 18, 0);
					if (v9)
					{
						*((_QWORD*)v9 + 1) = v8;
						*(_QWORD*)v9 = off_140B55060;
					}
					else
					{
						v9 = 0i64;
					}
					v10 = v9 + 4;
					v11 = 2 * v8;
					sub_1407DB590(v9 + 4, v6, v11);
					*(_WORD*)((char*)v10 + v11) = 0;
					*(_QWORD*)(v5 + 24) = v10;
				}
				else
				{
					*(_QWORD*)(v5 + 24) = 0i64;
				}
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			}
		}
		++v3;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildBankTabRename", byte_1409EA804, a1);
	return 0i64;
}
// 14057D5D7: conditional instruction was optimized away because ebp.4<Au
// 1409EA804: using guessed type _BYTE byte_1409EA804[40];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

