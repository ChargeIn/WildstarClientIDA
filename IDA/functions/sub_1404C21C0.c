//----- (00000001404C21C0) ----------------------------------------------------
void __fastcall sub_1404C21C0(_QWORD* a1)
{
	__int64* v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	void* v7; // rbx
	int v8; // ebx
	__int128* v9; // rax
	__int64 v10; // rax
	__int64 v11; // r10
	__int64 v12; // r11
	__int64 v13; // rcx
	int v14; // ebx
	__int64 v15; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-49h] BYREF
	__int128 v17; // [rsp+40h] [rbp-41h]
	__int64(__fastcall * *v18)(); // [rsp+58h] [rbp-29h] BYREF
	__int128 v19; // [rsp+60h] [rbp-21h]
	__int128 v20[4]; // [rsp+78h] [rbp-9h] BYREF
	__int64 v21; // [rsp+E8h] [rbp+67h] BYREF
	__int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF

	v1 = a1 + 36;
	v3 = a1[36];
	if (v3)
	{
		v21 = 0i64;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 336i64))(v3);
		(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v4 + 984i64))(v4, 9i64, &v21);
		if (v21)
		{
			(**(void(__fastcall***)(__int64))v21)(v21);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 936i64))(v21);
			v9 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v1 + 56i64))(*v1);
			v20[0] = *v9;
			v20[1] = v9[1];
			v20[2] = v9[2];
			v20[3] = v9[3];
			sub_1404C2960((__int64)a1);
			v22 = a1[11];
			v10 = sub_1404C2740((__int64)a1);
			if ((*(int(__fastcall**)(__int64, __int128*, __int64, __int64*, __int64*, __int64))(v11 + 200))(
				v12,
				v20,
				v21,
				&v22,
				v1,
				v10) < 0)
			{
				*(_QWORD*)&v17 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v18 = TlsValue;
				v22 = 0x141E03F98i64;
				v19 = v17;
				v14 = sub_140196F30(&dword_140C8AD3C, 46, &v22, &v18);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
				if (v14)
					DebugBreak();
			}
			else
			{
				v13 = *v1;
				LODWORD(TlsValue) = -1;
				(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v13 + 40i64))(v13, &TlsValue);
				sub_1404C7FF0(a1[37], *v1, (__int64)a1);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
			v15 = a1[78];
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				a1[78] = 0i64;
			}
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)*v1 + 296i64))(*v1, 0i64);
		}
		else
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v1 + 336i64))(*v1);
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 48i64))(v5))
			{
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v1 + 336i64))(*v1);
				v7 = (void*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 48i64))(v6);
			}
			else
			{
				v7 = &unk_1409F095C;
			}
			*(_QWORD*)&v17 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v18 = TlsValue;
			v22 = 0x141E04590i64;
			v19 = v17;
			v8 = sub_1401971E0(&dword_140C8AD38, 46, &v22, v7, &v18);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
			if (v8)
				DebugBreak();
		}
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	}
}
// 1404C237E: variable 'v11' is possibly undefined
// 1404C237E: variable 'v12' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AD38: using guessed type _DWORD dword_140C8AD38;
// 140C8AD3C: using guessed type _DWORD dword_140C8AD3C;

