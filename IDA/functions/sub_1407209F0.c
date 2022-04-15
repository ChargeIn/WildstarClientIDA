//----- (00000001407209F0) ----------------------------------------------------
__int64 __fastcall sub_1407209F0(_QWORD* a1, unsigned int a2)
{
	int* v4; // rax
	int v5; // ecx
	int v6; // ebx
	int v8; // [rsp+20h] [rbp-58h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v10; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v12[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v13; // [rsp+80h] [rbp+8h] BYREF

	if (a2 < (unsigned int)((__int64)(a1[4] - a1[3]) >> 3))
		return *(_QWORD*)(a1[3] + 8i64 * a2);
	TlsValue = &off_140B5E648;
	v10 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v4 = (int*)a1[1];
	v12[0] = (__int64)TlsValue;
	v12[1] = v10;
	v12[2] = (__int64)lpTlsValue;
	v5 = *v4;
	v13 = 0x141E405E8i64;
	v8 = v5;
	v6 = sub_140196F30(&dword_140C8B130, 56, &v13, a2, v8, v12);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v6)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B130: using guessed type _DWORD dword_140C8B130;

