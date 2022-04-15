//----- (0000000140796750) ----------------------------------------------------
__int8* __fastcall sub_140796750(_QWORD* a1)
{
	unsigned __int64* v2; // rsi
	__int8* result; // rax
	__int64 v4; // rax
	const __m128i* v5; // rdx
	const char* v6; // rdi
	int v7; // eax

	v2 = (unsigned __int64*)sub_140056BB0(a1, 1u, 0i64);
	result = sub_1407DE0B4((__int64)v2, 0x2Eu);
	if (!result)
		return result;
	sub_140058710((__int64)a1, v2, result - (__int8*)v2);
	v4 = a1[2] - 16i64;
	if (*(_DWORD*)(v4 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
		{
			v5 = 0i64;
			goto LABEL_9;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2] - 16i64;
	}
	v5 = (const __m128i*)(*(_QWORD*)v4 + 32i64);
LABEL_9:
	v6 = sub_140796230((__int64)a1, v5, (unsigned __int64*)aCpath_0);
	if (v6)
	{
		sub_140796640(a1, (__int64)v2);
		v7 = sub_140795FD0(a1, v6);
		if (v7)
		{
			if (v7 != 2)
				sub_1407964F0(a1, v6);
			sub_140058780((__int64)a1, (unsigned __int64*)"\n\tno module '%s' in file '%s'", (const char*)v2, v6);
		}
	}
	return (__int8*)1;
}

