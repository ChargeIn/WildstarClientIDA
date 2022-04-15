//----- (00000001403A6E60) ----------------------------------------------------
__int64 __fastcall sub_1403A6E60(__int64 a1, unsigned int* a2)
{
	int* v4; // r8
	__int64 v5; // rax
	int v6; // ecx
	int v7; // eax
	__int64 v8; // rcx

	v4 = sub_14018B280(64i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = 0i64;
		*((_QWORD*)v4 + 1) = 0i64;
		v4[4] = 0;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
		*((_QWORD*)v4 + 6) = 0i64;
		v4[14] = 0;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 26392) = v4;
	v6 = *(_DWORD*)(v5 + 8);
	v7 = *a2;
	if (!*a2 || !v6)
		return 2147500037i64;
	v4[2] = v6;
	v8 = qword_140C65898;
	*v4 = v7;
	sub_1400EA3E0(*(_QWORD*)(v8 + 29504), "P2PTradeInvite", "U", *a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

