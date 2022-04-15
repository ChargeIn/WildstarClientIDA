//----- (00000001405FD8C0) ----------------------------------------------------
void __fastcall sub_1405FD8C0(__int64 a1, __int64* a2)
{
	__int64 v3; // rcx
	__int64* v4; // rdx
	int v5; // ebx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rsi
	unsigned int v9; // ebx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v12; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v13)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v14; // [rsp+48h] [rbp-20h]
	__int64 v15; // [rsp+70h] [rbp+8h] BYREF

	v3 = *a2;
	v4 = *(__int64**)(a1 + 8);
	if ((__int64*)v3 == v4)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v12 = 0i64;
		*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = TlsValue;
		v15 = 0x141E4F6B0i64;
		v14 = v12;
		v5 = sub_1401971E0(&dword_140C8AFC8, 1, &v15, &v13);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
		if (v5)
			DebugBreak();
	}
	else
	{
		v6 = sub_140007DB0(v3, v4 + 1, v4 + 2, v4 + 3);
		v7 = *(_QWORD*)(v6 + 40);
		v8 = v6;
		if (v7)
		{
			v9 = 0;
			if (*(_DWORD*)(v7 + 16))
			{
				do
				{
					v10 = *(void(__fastcall****)(_QWORD, __int64))(v8 + 8i64 * v9 + 56);
					if (v10)
						(**v10)(v10, 1i64);
					++v9;
				} while (v9 < *(_DWORD*)(*(_QWORD*)(v8 + 40) + 16i64));
			}
		}
		sub_14018B900(v8, 0);
		--* (_QWORD*)(a1 + 16);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AFC8: using guessed type _DWORD dword_140C8AFC8;

