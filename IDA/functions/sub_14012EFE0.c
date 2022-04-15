//----- (000000014012EFE0) ----------------------------------------------------
__int64 __fastcall sub_14012EFE0(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rdx
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx

	v3 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 8);
	if (v3 && (v4 = *(_QWORD*)(v3 + 48)) != 0)
	{
		while (!(**(__int64(__fastcall***)(__int64))v4)(v4))
		{
			v4 = *(_QWORD*)(v4 + 72);
			if (!v4)
				goto LABEL_5;
		}
		sub_140058900(a2, v5, 0);
		v7 = *(_QWORD*)(v3 + 48);
		if (v7)
		{
			while (1)
			{
				v8 = (**(__int64(__fastcall***)(__int64))v7)(v7);
				if (v8)
					break;
				v7 = *(_QWORD*)(v7 + 72);
				if (!v7)
					goto LABEL_9;
			}
		}
		else
		{
		LABEL_9:
			v8 = 0i64;
		}
		return sub_14012E920(a2, v8);
	}
	else
	{
	LABEL_5:
		result = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(result + 8) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	return result;
}
// 14012F04A: variable 'v5' is possibly undefined

