//----- (00000001403C0B20) ----------------------------------------------------
__int64 __fastcall sub_1403C0B20(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	int v6; // ebx
	int v7; // ecx
	int v8; // eax
	int v9; // r14d
	int v10; // r14d
	__int64 v11; // rcx
	int v12; // r9d
	__int64 v13; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-E0h] BYREF
	__int128 v16; // [rsp+28h] [rbp-D8h]
	__int64 v17; // [rsp+38h] [rbp-C8h] BYREF
	__int64(__fastcall * *v18)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v19; // [rsp+48h] [rbp-B8h]
	__int64 v20[96]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v21; // [rsp+360h] [rbp+260h]
	__int64 v22; // [rsp+514h] [rbp+414h]

	v4 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a2);
	v5 = v4;
	if (v4)
	{
		v7 = 1;
		*(_DWORD*)(a1 + 28568) = 1;
		v8 = *(_DWORD*)(v4 + 120);
		if (v8)
			v7 = v8;
		v9 = *(_DWORD*)(a2 + 8);
		*(_DWORD*)(v5 + 120) = v9;
		v10 = v9 - v7;
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
		if (v11)
		{
			while (*(_DWORD*)(v11 + 4) != 3 || *(_DWORD*)(v11 + 12) != 777)
			{
				v11 = *(_QWORD*)(v11 + 136);
				if (!v11)
					goto LABEL_12;
			}
			sub_1407A0390(v11);
		}
	LABEL_12:
		sub_14040FAE0((__int64)v20);
		if (v5 != v20[0])
		{
			if (v20[0])
				(*(void (**)(void))(*(_QWORD*)v20[0] + 8i64))();
			v20[0] = v5;
			(**(void(__fastcall***)(__int64))v5)(v5);
		}
		v22 = 0i64;
		sub_140412AD0((__int64)v20);
		v12 = *(_DWORD*)(a2 + 12);
		if (v10 <= 0)
			sub_1403B8250(a1, **(_DWORD**)(v5 + 64), -v10, v12);
		else
			sub_1403B8060(a1, (__int64)v20, v10, v12);
		sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
		v13 = *(_QWORD*)(a1 + 32736);
		if (v13)
			sub_1400A8020(v13 + 376);
		if (v20[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20[0] + 8i64))(v20[0]);
			v20[0] = 0i64;
		}
		if (v21)
			sub_14018B900(v21, 0);
	}
	else
	{
		*(_QWORD*)&v16 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v18 = TlsValue;
		v17 = 0x141DF0778i64;
		v19 = v16;
		v6 = sub_1401971E0(&dword_140C8A6C4, 5, &v17, &v18);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v6)
			DebugBreak();
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A6C4: using guessed type _DWORD dword_140C8A6C4;

