//----- (00000001404C1FF0) ----------------------------------------------------
void __fastcall sub_1404C1FF0(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // r10
	int v10; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v12; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v13)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v14; // [rsp+58h] [rbp-20h]
	__int64 v15; // [rsp+80h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(qword_140C65898 + 29256);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
	if (sub_140203520(*(_DWORD*)(a1 + 108)))
	{
		v5 = *(_QWORD*)(a1 + 608);
		if (v5)
		{
			v6 = *(_QWORD*)(a1 + 624);
			if (v6)
			{
				v7 = *(_QWORD*)(a1 + 632);
				if (v7 && *(_DWORD*)qword_140C659F0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 896i64))(v7, 9i64);
					v6 = *(_QWORD*)(a1 + 624);
					v5 = *(_QWORD*)(a1 + 632);
				}
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 896i64))(v6, 9i64, v5);
				v15 = *(_QWORD*)(a1 + 88);
				v8 = sub_1404C2740(a1);
				if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64*, __int64, __int64))(v9 + 200))(
					v4,
					a2,
					*(_QWORD*)(a1 + 624),
					&v15,
					a1 + 288,
					v8) >= 0)
				{
					(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 296i64))(*(_QWORD*)(a1 + 288), 0i64);
				}
				else
				{
					*(_QWORD*)&v12 = 0i64;
					TlsValue = &off_140B5E648;
					*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v13 = TlsValue;
					v15 = 0x141E04268i64;
					v14 = v12;
					v10 = sub_140196F30(&dword_140C8AD34, 46, &v15, &v13);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
					if (v10)
						DebugBreak();
				}
			}
		}
	}
}
// 1404C20D7: variable 'v9' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C8AD34: using guessed type _DWORD dword_140C8AD34;

