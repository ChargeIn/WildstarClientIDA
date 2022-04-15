//----- (00000001402E5B00) ----------------------------------------------------
__int64 __fastcall sub_1402E5B00(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // r8
	__int64 v4; // rdx
	void(__fastcall * v5)(__int64, _QWORD); // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if ((_DWORD)result == -1)
		goto LABEL_5;
	if ((_DWORD)result)
		return result;
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	if (!*(_DWORD*)(v3 + 8))
	{
	LABEL_5:
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v5 = *(void(__fastcall**)(__int64, _QWORD))(v4 + 1920);
		if (v5)
			v5(a1, *(_QWORD*)(v4 + 1928));
		sub_1402E4900(a1);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	else
	{
		sub_140198370(a1 + 96, a1, (_QWORD*)(v3 + 2040));
		return 0i64;
	}
}

