#include "../winhttp.h"

//----- (00000001402AD410) ----------------------------------------------------
void __fastcall sub_1402AD410(_DWORD* a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // rdx
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // r15
	int v8; // edi
	__int64 v9; // r15
	int v10; // edi
	__int64 v11; // r15
	__int64 v12; // r15
	__int64 v13; // r14
	int v14; // ebx
	__int64 v15; // r14
	unsigned int v16; // ebx
	__int64 v17; // r14
	__int64 v18; // r14
	int v19; // ebx
	int v20; // r9d
	__int64 v21; // rax
	int v22; // ecx
	__int64 v23; // rcx
	__int64 v24; // rbx
	HANDLE EventW; // rcx
	int v26; // ebx
	__int64 v27; // [rsp+50h] [rbp-B0h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-A8h] BYREF
	__int128 v29; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v30)(); // [rsp+70h] [rbp-90h] BYREF
	__int128 v31; // [rsp+78h] [rbp-88h]
	__int64 v32; // [rsp+88h] [rbp-78h] BYREF
	__int64 v33; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v34)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v35; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v36)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v37; // [rsp+C8h] [rbp-38h]
	int v38[6]; // [rsp+E0h] [rbp-20h] BYREF

	if (a2 >= 4)
		goto LABEL_34;
	v4 = 3i64 * a2;
	v5 = a1[2 * v4 + 2];
	if (v5)
	{
		v6 = v5 - 1;
		if (v6)
		{
			if ((unsigned int)(v6 - 1) <= 1)
			{
				v7 = *(_QWORD*)&a1[2 * v4 + 4];
				if (v7)
				{
					v8 = *(_DWORD*)(v7 + 44) * a1[2 * v4 + 6];
					v9 = *(_QWORD*)(v7 + 112);
					v10 = a1[2 * v4 + 7] + v8;
					goto LABEL_12;
				}
			}
		LABEL_34:
			*(_QWORD*)&v31 = 0i64;
			v30 = &off_140B5E648;
			*((_QWORD*)&v31 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v30);
			v34 = v30;
			v32 = 0x141DE6468i64;
			v35 = v31;
			v26 = sub_140196F30(&dword_140C8A548, 14, &v32, &v34);
			v30 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v31 + 1));
			if (v26)
				DebugBreak();
			return;
		}
		v11 = *(_QWORD*)&a1[2 * v4 + 4];
		if (!v11)
			goto LABEL_34;
		v10 = a1[2 * v4 + 7];
		v9 = *(_QWORD*)(v11 + 112);
	}
	else
	{
		v12 = *(_QWORD*)&a1[2 * v4 + 4];
		if (!v12)
			v12 = *(_QWORD*)(*(_QWORD*)a1 + 8584i64);
		v9 = *(_QWORD*)(v12 + 104);
		v10 = 0;
	}
LABEL_12:
	if (!v9)
		goto LABEL_34;
	if (*(_DWORD*)a3)
	{
		if (*(_DWORD*)a3 == 1)
		{
			v17 = *(_QWORD*)(a3 + 8);
			if (!v17)
				goto LABEL_24;
			v16 = *(_DWORD*)(a3 + 20);
			v15 = *(_QWORD*)(v17 + 112);
		}
		else
		{
			if ((unsigned int)(*(_DWORD*)a3 - 2) > 1)
				goto LABEL_24;
			v13 = *(_QWORD*)(a3 + 8);
			if (!v13)
				goto LABEL_24;
			v14 = *(_DWORD*)(v13 + 44) * *(_DWORD*)(a3 + 16);
			v15 = *(_QWORD*)(v13 + 112);
			v16 = *(_DWORD*)(a3 + 20) + v14;
		}
	}
	else
	{
		v18 = *(_QWORD*)(a3 + 8);
		if (!v18)
			v18 = *(_QWORD*)(*(_QWORD*)a1 + 8584i64);
		v15 = *(_QWORD*)(v18 + 104);
		v16 = 0;
	}
	if (!v15)
	{
	LABEL_24:
		*(_QWORD*)&v29 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v29 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v36 = TlsValue;
		v33 = 0x141DE6268i64;
		v37 = v29;
		v19 = sub_140196F30(&dword_140C8A54C, 14, &v33, &v36);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v29 + 1));
		if (v19)
			DebugBreak();
		return;
	}
	sub_14003D8F0(&v27, *(_QWORD*)a1 + 6368i64);
	v20 = a1[37];
	v21 = *(_QWORD*)a1;
	v38[0] = a1[36];
	v38[3] = a1[38] + v38[0];
	v22 = a1[39];
	v38[1] = v20;
	v38[2] = 0;
	v38[5] = 1;
	v38[4] = v20 + v22;
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, int, int*))(**(_QWORD**)(v21 + 6352)
		+ 368i64))(
			*(_QWORD*)(v21 + 6352),
			v15,
			v16,
			0i64,
			0,
			0,
			v9,
			v10,
			v38);
	v23 = v27;
	if (*(_QWORD*)(v27 + 8) <= 1ui64)
	{
		*(_DWORD*)v27 = 0;
		_InterlockedExchange64((volatile __int64*)(v23 + 8), 0i64);
		if (*(_QWORD*)(v27 + 16))
		{
			v24 = v27;
			if (!*(_QWORD*)(v27 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v24 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v24 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v27 + 8);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A548: using guessed type _DWORD dword_140C8A548;
// 140C8A54C: using guessed type _DWORD dword_140C8A54C;

