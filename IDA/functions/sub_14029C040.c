//----- (000000014029C040) ----------------------------------------------------
__int64 __fastcall sub_14029C040(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	signed __int32 v7; // ecx
	__int64 v8; // rcx
	__int64 v9; // rcx

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
		return sub_14029C120(a1, v5);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	if (v5 < 0)
		return sub_14029C120(a1, v5);
	*(_DWORD*)(a1 + 88) = 0;
	v7 = *(_DWORD*)(a1 + 72);
	if (v7)
	{
		while (v7 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v7 - 1, v7))
		{
			v7 = *(_DWORD*)(a1 + 72);
			if (!v7)
				goto LABEL_16;
		}
		if (v7 == 1)
		{
			v8 = *(_QWORD*)(a1 + 80);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 80) = 0i64;
			}
		}
	}
LABEL_16:
	v9 = *(_QWORD*)(a1 + 64);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	return 0i64;
}
// 140C63758: using guessed type __int64 qword_140C63758;

