//----- (0000000140016010) ----------------------------------------------------
void __fastcall sub_140016010(__int64 a1, unsigned int a2, __int64 a3)
{
	int v4; // ebx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // [rsp+20h] [rbp-50h] BYREF
	__int64 v14; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int128 v16; // [rsp+38h] [rbp-38h]
	__int64(__fastcall * *v17)(); // [rsp+50h] [rbp-20h] BYREF
	__int128 v18; // [rsp+58h] [rbp-18h]
	__int64 v19; // [rsp+80h] [rbp+10h] BYREF
	__int64 v20; // [rsp+98h] [rbp+28h] BYREF

	if (*(_QWORD*)(a1 + 5928))
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			a1 + 5936,
			a2,
			a3))
		{
			*(_QWORD*)&v16 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = TlsValue;
			v19 = 0x141CDAD48i64;
			v18 = v16;
			v4 = sub_1401971E0(&dword_140C89ED4, 5, &v19, &v17);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
			if (v4)
				DebugBreak();
		}
		else
		{
			v5 = *(_QWORD*)(a1 + 5936);
			v13 = 0i64;
			v14 = 0i64;
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
			v7 = *(_QWORD*)(a1 + 5928);
			LODWORD(v13) = 11;
			v14 = v6;
			v19 = *(_QWORD*)(qword_140C635F0 + 280);
			if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
				qword_140C65808,
				&v19,
				908i64,
				&v13))
			{
				v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 32i64))(v19);
				v10 = *(_QWORD*)(v7 + 16);
				if (v10)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v10 + 16))(
						*(_QWORD*)(v10 + 8),
						v8 + 4,
						(unsigned int)(v9 - 4));
				v20 = 0i64;
				v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
				v12 = *(unsigned int*)(v7 + 152);
				v20 = v11;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
					qword_140C65808,
					v12,
					580i64,
					&v20);
			}
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C89ED4: using guessed type _DWORD dword_140C89ED4;

