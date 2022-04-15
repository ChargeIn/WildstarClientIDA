//----- (000000014026FAF0) ----------------------------------------------------
__int64 __fastcall sub_14026FAF0(__int64 a1, int a2, __int64 a3, int a4)
{
	unsigned int v4; // r8d
	unsigned int v5; // edx
	__int64 v6; // rax
	_DWORD* v7; // rcx
	int v8; // ebx
	__int64 result; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v11; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v13[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v14; // [rsp+70h] [rbp+10h] BYREF

	v4 = *(_DWORD*)(a1 + 188);
	v5 = (unsigned int)(a2 + 15) >> 4;
	if (v5 <= v4)
	{
		if (v5 + a4 <= v4)
		{
			result = *(_QWORD*)(a1 + 7160);
			*(_DWORD*)(a1 + 7168) = a4;
			*(_DWORD*)(a1 + 7172) = v5;
			return result;
		}
		v11 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = 0x141DE1160i64;
		v7 = &unk_140C8A330;
	}
	else
	{
		v11 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = 0x141DE11D0i64;
		v7 = &unk_140C8A344;
	}
	v14 = v6;
	v13[0] = (__int64)TlsValue;
	v13[1] = v11;
	v13[2] = (__int64)lpTlsValue;
	v8 = sub_1401971E0(v7, 14, &v14, v13, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v8)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

