//----- (000000014033EFA0) ----------------------------------------------------
const void**** __fastcall sub_14033EFA0(__int64 a1)
{
	const void**** result; // rax
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF
	__int64 v9; // [rsp+70h] [rbp+8h] BYREF

	result = (const void****)&retaddr;
	if (*(_QWORD*)(a1 + 88))
	{
		*(_QWORD*)&v5 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = TlsValue;
		v9 = 0x141DEE530i64;
		v7 = v5;
		v3 = sub_140196F30(&dword_140C8A64C, 19, &v9, &v6);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
		if (v3)
			DebugBreak();
		result = (const void****)sub_14033F940(a1, *(_QWORD**)(a1 + 88));
	}
	if (*(_QWORD*)(a1 + 112))
		return sub_1401A4A00((const void***)(a1 + 112));
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A64C: using guessed type _DWORD dword_140C8A64C;

