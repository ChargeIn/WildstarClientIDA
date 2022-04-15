//----- (000000014012EF10) ----------------------------------------------------
__int64 __fastcall sub_14012EF10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 v8; // r8

	v2 = sub_14012AAF0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2) + 8);
		if (v4 && (v5 = *(_QWORD*)(v4 + 48)) != 0)
		{
			while (!(**(__int64(__fastcall***)(__int64))v5)(v5))
			{
				v5 = *(_QWORD*)(v5 + 72);
				if (!v5)
					goto LABEL_7;
			}
			sub_140058900((__int64)a1, v6, 0);
			v7 = *(_QWORD*)(v4 + 48);
			if (v7)
			{
				while (1)
				{
					v8 = (**(__int64(__fastcall***)(__int64))v7)(v7);
					if (v8)
						break;
					v7 = *(_QWORD*)(v7 + 72);
					if (!v7)
						goto LABEL_12;
				}
			}
			else
			{
			LABEL_12:
				v8 = 0i64;
			}
			sub_14012E920((__int64)a1, v8);
		}
		else
		{
		LABEL_7:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 14012EFA7: variable 'v6' is possibly undefined

