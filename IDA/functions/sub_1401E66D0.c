//----- (00000001401E66D0) ----------------------------------------------------
__int64 __fastcall sub_1401E66D0(__int64 a1)
{
	unsigned int v1; // edi
	__int64* v4; // rdx
	__int64 v5; // rcx

	v1 = -- * (_DWORD*)(a1 + 8);
	if (v1 == -1)
	{
		sub_1401E6500((_QWORD*)a1);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	else
	{
		if (!v1)
		{
			v4 = (__int64*)(*(_QWORD*)(a1 + 16) + 8 * (*(unsigned int*)(a1 + 24) + 37i64));
			if (!*(_QWORD*)(a1 + 96))
			{
				*(_QWORD*)(a1 + 96) = v4;
				v5 = a1 + 104;
				*(_QWORD*)v5 = *v4;
				*v4 = a1;
				if (*(_QWORD*)v5)
					*(_QWORD*)(*(_QWORD*)v5 + 96i64) = v5;
			}
			sub_140198370(a1 + 48, a1, (_QWORD*)(*(_QWORD*)(a1 + 16) + 352i64));
		}
		return v1;
	}
}

