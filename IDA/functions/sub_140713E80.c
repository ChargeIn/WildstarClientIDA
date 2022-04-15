//----- (0000000140713E80) ----------------------------------------------------
__int64 __fastcall sub_140713E80(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int* v8; // rax
	__int64 v9; // rbx
	int v10; // esi
	__int64 v11; // r9
	int v12; // ebx
	__int64* i; // rax
	__int64 v15; // [rsp+30h] [rbp-58h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-50h] BYREF
	__int64 v17; // [rsp+40h] [rbp-48h]
	LPVOID lpTlsValue; // [rsp+48h] [rbp-40h]
	__int64 v19[4]; // [rsp+50h] [rbp-38h] BYREF

	v8 = sub_14018B280(176i64, 0);
	v9 = (__int64)v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*((_QWORD*)v8 + 7) = 0i64;
		*(_QWORD*)v8 = off_140B77D68;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = sub_1407819A0(v9, a2, (unsigned int*)a3, a4);
	if (v10 >= 0)
	{
		if (!*(_QWORD*)(v9 + 40))
		{
			for (i = (__int64*)(a1 + 136); *i; i = (__int64*)(*i + 48))
				;
			*(_QWORD*)(v9 + 40) = i;
			*(_QWORD*)(v9 + 48) = 0i64;
			*i = v9;
		}
		return 0i64;
	}
	else
	{
		if (v9)
			(**(void(__fastcall***)(__int64, __int64))v9)(v9, 1i64);
		v17 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = *(_QWORD*)(a3 + 8);
		v19[0] = (__int64)TlsValue;
		v19[1] = v17;
		v15 = 0x141E402A0i64;
		v19[2] = (__int64)lpTlsValue;
		v12 = sub_140196F30(&dword_140C8B100, 37, &v15, v11, v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v12)
			DebugBreak();
		return (unsigned int)v10;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B77D68: using guessed type __int64 (__fastcall *off_140B77D68[2])();
// 140C8B100: using guessed type _DWORD dword_140C8B100;

