//----- (0000000140496B10) ----------------------------------------------------
void __fastcall sub_140496B10(__int64 a1, int* a2)
{
	__int64 v2; // rbp
	unsigned int v3; // r8d
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rbx
	int v9; // esi
	int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rcx
	char v15[16]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+50h] [rbp+8h]

	v2 = qword_140C65988;
	v3 = *a2;
	v5 = *(_QWORD*)(qword_140C65988 + 16);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v3)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v16 = v6, v3 < *(_DWORD*)(v6 + 32)))
		v16 = *(_QWORD*)(qword_140C65988 + 16);
	if (v16 != v5)
	{
		v8 = *(_QWORD**)(v16 + 40);
		if (v8)
		{
			v9 = 1;
			v10 = 0;
			if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v8 + 24i64))(v8) + 36))
			{
				v11 = (*(__int64(__fastcall**)(_QWORD*))(*v8 + 24i64))(v8);
				v12 = sub_14020FD40(*(_DWORD*)(v11 + 36));
				if (v12)
				{
					v13 = *(_DWORD*)(v12 + 12);
					if ((v13 & 8) != 0)
						v9 = 0;
					if ((v13 & 0x20) != 0)
						v10 = 1;
				}
			}
			v14 = v2 + 208;
			if (a2[1])
			{
				sub_1400293C0(v14, (__int64)v15, a2);
				if (v9)
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventStart", byte_1409ECF5C, v8);
			}
			else
			{
				sub_1400EE810(v14, a2);
				if (v9)
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventCleared", byte_1409ED1CC, v8);
			}
			if (v10 || ((v8[8] - v8[7]) & 0xFFFFFFFFFFFFFFF8ui64) != 0 || ((v8[12] - v8[11]) & 0xFFFFFFFFFFFFFFF8ui64) != 0)
				sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 5760i64);
		}
	}
}
// 1409ECF5C: using guessed type _BYTE byte_1409ECF5C[4];
// 1409ED1CC: using guessed type _BYTE byte_1409ED1CC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65988: using guessed type __int64 qword_140C65988;
// 140496B10: using guessed type char var_28[16];

