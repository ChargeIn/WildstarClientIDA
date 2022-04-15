//----- (00000001407E0580) ----------------------------------------------------
__int64 __fastcall sub_1407E0580(_BYTE* a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 result; // rax

	if (!a3 || !a1 || !a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		goto LABEL_9;
	}
	result = sub_1407E0330((__int64(__fastcall*)(_BYTE**, __int64, __int64, __int64))sub_1407EDE38, a1, a2, a3, a4, a5);
	if ((int)result < 0)
		*a1 = 0;
	if ((_DWORD)result == -2)
	{
		*(_DWORD*)sub_1407DE1B0() = 34;
	LABEL_9:
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	return result;
}

