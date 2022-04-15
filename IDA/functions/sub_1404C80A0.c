//----- (00000001404C80A0) ----------------------------------------------------
void __fastcall sub_1404C80A0(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v6 = a2;
		v3 = (*(__int64(__fastcall**)(__int64*))(a1 + 184))(&v6);
		v4 = *(_QWORD*)(a1 + 176) + 8 * (v3 % *(_QWORD*)(a1 + 168));
		if (*(_QWORD*)v4)
		{
			while (v3 != **(_QWORD**)v4
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 192))(&v6, *(_QWORD*)v4 + 16i64))
			{
				v4 = *(_QWORD*)v4 + 8i64;
				if (!*(_QWORD*)v4)
					return;
			}
			v5 = *(_QWORD*)v4;
			*(_QWORD*)v4 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
			sub_14018B900(v5, 0);
			--* (_QWORD*)(a1 + 160);
		}
	}
}

