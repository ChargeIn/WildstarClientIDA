//----- (0000000140372450) ----------------------------------------------------
__int64 __fastcall sub_140372450(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // r8
	__int64* v4; // rdx
	__int64 v5; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if ((_DWORD)result == -1)
		goto LABEL_7;
	if ((_DWORD)result)
		return result;
	v3 = *(_QWORD*)(a1 + 16);
	if (!*(_DWORD*)(v3 + 8))
	{
	LABEL_7:
		if (a1)
		{
			sub_1403721F0((_QWORD*)a1);
			sub_14018B900(a1, 0);
		}
	}
	else
	{
		sub_140198370(a1 + 40, a1, (_QWORD*)(v3 + 776));
		v4 = (__int64*)(*(_QWORD*)(a1 + 16) + 8 * (*(int*)(a1 + 24) + 77i64));
		if (!*(_QWORD*)(a1 + 88))
		{
			*(_QWORD*)(a1 + 88) = v4;
			*(_QWORD*)(a1 + 96) = *v4;
			*v4 = a1;
			v5 = *(_QWORD*)(a1 + 96);
			if (v5)
			{
				*(_QWORD*)(v5 + 88) = a1 + 96;
				return 0i64;
			}
		}
	}
	return 0i64;
}

