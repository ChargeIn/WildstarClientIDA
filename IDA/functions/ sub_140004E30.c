//----- (0000000140004E30) ----------------------------------------------------
__int64 __fastcall sub_140004E30(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // r9d
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // r9d
	__int64 v8; // rcx
	__int64 result; // rax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	void(__fastcall * v12)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	sub_140006150(a1, a2 + 8);
	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504) + 5896i64;
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5976i64))
		{
			v4 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5952i64);
			v10 = 0;
			v11 = v3;
			v12 = sub_1400A8020;
			v13 = 0i64;
			sub_140195960(v3 + 64, 0, (__int64)&v10, v4);
			v2 = qword_140C65898;
		}
		v5 = *(_QWORD*)(v2 + 32736);
		if (v5)
		{
			v6 = v5 + 240;
			if (!*(_QWORD*)(v6 + 80))
			{
				v7 = *(_DWORD*)(v6 + 56);
				v10 = 0;
				v11 = v6;
				v12 = sub_1400A8020;
				v13 = 0i64;
				sub_140195960(v6 + 64, 0, (__int64)&v10, v7);
			}
		}
	}
	v8 = qword_140C66DA8;
	result = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(result + 368) == 5)
		{
			result = *(_QWORD*)(result + 176);
			if (!result)
				return result;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v8 + 368) != 5)
					break;
				v8 = *(_QWORD*)(v8 + 176);
			} while (v8);
		}
		sub_1400EA3E0(*(_QWORD*)(v8 + 72), "AccountItemUpdate", &unk_1409D014F);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

