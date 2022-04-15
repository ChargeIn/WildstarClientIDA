//----- (00000001405E1B40) ----------------------------------------------------
__int64 __fastcall sub_1405E1B40(__int64 a1, __int64 a2)
{
	unsigned __int16 i; // si
	__int64 v5; // r12
	__int64 v6; // r14
	unsigned __int64 v7; // rdi
	__int64 v8; // rbx

	for (i = 0; i < *(_WORD*)a2; ++i)
	{
		v5 = 32i64 * i;
		v6 = v5 + *(_QWORD*)(a2 + 8);
		v7 = (*(__int64(__fastcall**)(__int64))(a1 + 464))(v6);
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * (v7 % *(_QWORD*)(a1 + 448)));
		if (v8)
		{
			while (v7 != *(_QWORD*)v8 || !(*(unsigned int(__fastcall**)(__int64, __int64))(a1 + 472))(v6, v8 + 16))
			{
				v8 = *(_QWORD*)(v8 + 8);
				if (!v8)
					goto LABEL_9;
			}
			if (v8 != -24)
				sub_1405DCE30(
					*(unsigned int**)(v8 + 24),
					v5 + *(_QWORD*)(a2 + 8) + 8i64,
					*(_DWORD*)(*(_QWORD*)(a2 + 8) + v5 + 24));
		}
	LABEL_9:
		;
	}
	return 0i64;
}

