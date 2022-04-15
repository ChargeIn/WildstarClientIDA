//----- (00000001404A08F0) ----------------------------------------------------
__int64 __fastcall sub_1404A08F0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v8; // ebx
	unsigned int v9; // esi
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rcx
	int v14; // edi
	__int64 v15; // [rsp+20h] [rbp-18h]

	if (!qword_140C65980)
		return 0i64;
	v8 = 0;
	v9 = 0;
	v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
		qword_140C65980,
		a4,
		0i64);
	if (v10 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 104i64))(v10))
	{
		v11 = *(_QWORD*)(a2 + 14208);
		v12 = v11;
		v13 = *(_QWORD*)(v11 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < a4)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v12 == v11 || (v15 = v12, a4 < *(_DWORD*)(v12 + 32)))
			v15 = *(_QWORD*)(a2 + 14208);
		LOBYTE(v9) = v15 != v11;
	}
	v14 = a3 - 1;
	if (v14)
	{
		if (v14 == 1)
			LOBYTE(v8) = v9 == 0;
	}
	else
	{
		return v9;
	}
	return v8;
}
// 140C65980: using guessed type __int64 qword_140C65980;

