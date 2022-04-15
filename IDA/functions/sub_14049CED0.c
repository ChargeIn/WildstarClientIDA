//----- (000000014049CED0) ----------------------------------------------------
__int64 __fastcall sub_14049CED0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rbp
	unsigned int v5; // ebx
	__int64 v6; // rcx
	unsigned int v7; // esi
	__int64 v8; // rax
	int v9; // r10d
	int v10; // r11d
	int v11; // edx
	int v12; // edi

	v3 = qword_140C65898;
	if (a2 != *(_QWORD*)(qword_140C65898 + 120))
		return a3 == 2;
	v5 = 0;
	v6 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 5872i64);
	v7 = 1;
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 120i64))(v6);
	v8 = sub_14043ED60(v6, *(_DWORD*)(*(_QWORD*)(v3 + 25744) + 6120i64));
	while (v8)
	{
		v11 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 28i64);
		if ((v11 & 0x10) != 0)
			goto LABEL_12;
		v8 = *(_QWORD*)(v8 + 16);
		if ((v11 & 0x100) != 0)
			v9 = 1;
	}
	if (v10 && !v9)
		LABEL_12:
	v7 = 0;
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
			LOBYTE(v5) = v7 == 0;
	}
	else
	{
		return v7;
	}
	return v5;
}
// 14049CF43: variable 'v6' is possibly undefined
// 14049CF70: variable 'v10' is possibly undefined
// 14049CF75: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

