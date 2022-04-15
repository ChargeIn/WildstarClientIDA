//----- (00000001406DA8D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406DA8D0(__int64 a1)
{
	int v1; // r9d
	unsigned __int64 result; // rax
	unsigned __int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rdi

	v1 = *(_DWORD*)(a1 + 1036);
	if (v1 && (result = 0i64, (v4 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 2704);
		while (!*(_QWORD*)v5 || *(_DWORD*)(*(_QWORD*)v5 + 64i64) != v1)
		{
			++result;
			v5 += 8i64;
			if (result >= v4)
				goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		*(_DWORD*)(a1 + 1028) = 300;
		*(_DWORD*)(a1 + 1032) = -1;
		if (*(_QWORD*)(a1 + 32))
		{
			v6 = *(_QWORD*)(a1 + 1040);
			if (v6)
			{
				if (!sub_14002C740(a1 + 1056, word_1409F7B54))
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
					*(_QWORD*)(a1 + 1040) = 0i64;
				}
			}
		}
		result = (*(__int64(__fastcall**)(__int64, void*))(*(_QWORD*)a1 + 80i64))(a1, &unk_1409F7AFC);
		*(_BYTE*)(a1 + 1024) = 0;
	}
	return result;
}
// 1409F7B54: using guessed type _WORD word_1409F7B54[2];
// 140C65898: using guessed type __int64 qword_140C65898;

