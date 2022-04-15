//----- (00000001405A5AA0) ----------------------------------------------------
__int64 __fastcall sub_1405A5AA0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 i; // rdi
	__int64 v6; // rbx

	v3 = sub_140561C30(qword_140C65B70, *(_DWORD*)a2);
	v4 = v3;
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(a2 + 4); i = (unsigned int)(i + 1))
		{
			v6 = *(_QWORD*)(v4 + 72);
			if (v6)
			{
				while (*(_DWORD*)(v6 + 64) != *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * i))
				{
					v6 = *(_QWORD*)(v6 + 40);
					if (!v6)
						goto LABEL_14;
				}
				sub_1407177B0((const void***)v6);
				sub_14018B900(v6, 0);
				if (!*(_QWORD*)(v4 + 72)
					&& *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 312) + 112i64) + 24i64) != 1
					&& *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 312) + 112i64) + 24i64) != 3
					&& *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 312) + 112i64) + 24i64) != 8
					&& *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 312) + 112i64) + 24i64) != 10
					&& qword_140C65B70
					&& !(unsigned int)sub_140561AD0(qword_140C65B70, v4))
				{
					break;
				}
			}
		LABEL_14:
			;
		}
	}
	return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

