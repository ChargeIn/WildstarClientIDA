#include "../winhttp.h"

//----- (00000001402725D0) ----------------------------------------------------
void __fastcall sub_1402725D0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r15
	__int64 v5; // r12
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	_DWORD* v10; // rax
	_DWORD* v11; // rsi
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	void(__fastcall * **v15)(_QWORD); // rcx
	__int64 v16; // rcx
	__int64 v17; // r13
	__int64 v18; // rcx
	int v19; // eax
	__int64 v20; // rcx
	__int64 v21; // rbx
	_QWORD* v22; // rsi
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-89h] BYREF
	__int128 v24; // [rsp+28h] [rbp-81h]
	__int64(__fastcall * *v25)(); // [rsp+38h] [rbp-71h] BYREF
	__int128 v26; // [rsp+40h] [rbp-69h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-59h] BYREF
	__int128 v28; // [rsp+58h] [rbp-51h]
	__int64(__fastcall * *v29)(); // [rsp+70h] [rbp-39h] BYREF
	__int128 v30; // [rsp+78h] [rbp-31h]
	__int64(__fastcall * *v31)(); // [rsp+90h] [rbp-19h] BYREF
	__int128 v32; // [rsp+98h] [rbp-11h]
	__int64(__fastcall * *v33)(); // [rsp+B0h] [rbp+7h] BYREF
	__int128 v34; // [rsp+B8h] [rbp+Fh]
	__int64 v35; // [rsp+110h] [rbp+67h] BYREF
	__int64 v36; // [rsp+120h] [rbp+77h] BYREF
	__int64 v37; // [rsp+128h] [rbp+7Fh] BYREF

	v3 = a2;
	v5 = *(_QWORD*)(a1 + 8i64 * a2 + 7624);
	if (!*(_DWORD*)a3)
	{
		sub_14026C1F0(a1, a2);
		v7 = *(_QWORD*)(a3 + 8);
		*(_DWORD*)(a1 + 4 * v3 + 7528) = 0;
		if (v7)
		{
			*(_QWORD*)(a1 + 8 * v3 + 7544) = v7;
			(**(void(__fastcall***)(__int64))v7)(v7);
			*(_DWORD*)(a1 + 4 * v3 + 7608) = *(_DWORD*)(v7 + 32);
			v8 = *(_QWORD*)(v7 + 80);
			*(_QWORD*)(a1 + 8 * v3 + 7624) = v8;
			if (!v8)
				goto LABEL_24;
			goto LABEL_4;
		}
		*(_DWORD*)(a1 + 4 * v3 + 7608) = *(_DWORD*)(a1 + 64);
		v8 = *(_QWORD*)(a1 + 7656);
		*(_QWORD*)(a1 + 8 * v3 + 7624) = v8;
		if (v8)
			LABEL_4:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	LABEL_24:
		if (*(_QWORD*)(a1 + 8 * v3 + 7624) != v5)
		{
			v21 = (unsigned int)(v3 + 1);
			if ((unsigned int)v21 < 4)
			{
				v22 = (_QWORD*)(a1 + 7624 + 8 * v21);
				do
				{
					if (*(_QWORD*)(a1 + 8 * v3 + 7624) == *v22)
					{
						sub_14026C1F0(a1, v21);
						(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 296i64))(
							*(_QWORD*)(a1 + 6608),
							(unsigned int)v21,
							0i64);
					}
					LODWORD(v21) = v21 + 1;
					++v22;
				} while ((unsigned int)v21 < 4);
			}
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 296i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v3,
				*(_QWORD*)(a1 + 8 * v3 + 7624));
			*(_DWORD*)(a1 + 7680) = 1;
		}
		return;
	}
	v9 = *(_QWORD*)(a3 + 8);
	if (!v9)
	{
		sub_14026C1F0(a1, a2);
		goto LABEL_24;
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
	v11 = v10;
	if (*(_DWORD*)(a3 + 20) < v10[5])
	{
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 7032) + 4i64 * (int)v10[7]) & 1) != 0)
		{
			if (!dword_140AE64C0[v10[6]])
			{
				sub_14026C1F0(a1, v3);
				*(_DWORD*)(a1 + 4 * v3 + 7528) = *(_DWORD*)a3;
				v15 = *(void(__fastcall****)(_QWORD))(a3 + 8);
				*(_QWORD*)(a1 + 8 * v3 + 7544) = v15;
				(**v15)(v15);
				*(_DWORD*)(a1 + 4 * v3 + 7576) = *(_DWORD*)(a3 + 16);
				*(_DWORD*)(a1 + 4 * v3 + 7592) = *(_DWORD*)(a3 + 20);
				*(_DWORD*)(a1 + 4 * v3 + 7608) = v11[6];
				if (*(_DWORD*)a3 == 1)
				{
					v16 = *(unsigned int*)(a3 + 20);
				}
				else
				{
					if (*(_DWORD*)a3 != 2)
						goto LABEL_24;
					v16 = (unsigned int)(*(_DWORD*)(a3 + 16) + 6 * *(_DWORD*)(a3 + 20));
				}
				v17 = *(_QWORD*)(a3 + 8);
				v18 = *(_QWORD*)(*(_QWORD*)(v17 + 128) + 8 * v16);
				*(_QWORD*)(a1 + 8 * v3 + 7624) = v18;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				*(_DWORD*)(v17 + 96) = 0;
				v19 = *(_DWORD*)(a1 + 240);
				if (*(_DWORD*)(v17 + 140) != v19)
				{
					*(_DWORD*)(v17 + 140) = v19;
					v20 = 6i64 * (int)v11[7];
					_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * (int)v11[7] + 764));
					_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v20 + 768), *(_DWORD*)(v17 + 136));
				}
				goto LABEL_24;
			}
			*(_QWORD*)&v24 = 0i64;
			v23 = &off_140B5E648;
			*((_QWORD*)&v24 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v23);
			v33 = v23;
			v37 = 0x141DE1830i64;
			v34 = v24;
			v14 = sub_1401971E0(&dword_140C8A2F4, 14, &v37, &v33);
			v23 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v24 + 1));
			if (v14)
				DebugBreak();
		}
		else
		{
			*(_QWORD*)&v26 = 0i64;
			v25 = &off_140B5E648;
			*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v25);
			v31 = v25;
			v36 = 0x141DE1890i64;
			v32 = v26;
			v13 = sub_1401971E0(&dword_140C8A2F0, 14, &v36, &v31);
			v25 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
			if (v13)
				DebugBreak();
		}
	}
	else
	{
		*(_QWORD*)&v28 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v29 = TlsValue;
		v35 = 0x141DE1950i64;
		v30 = v28;
		v12 = sub_1401971E0(&dword_140C8A2EC, 14, &v35, &v29);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
		if (v12)
			DebugBreak();
	}
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2EC: using guessed type _DWORD dword_140C8A2EC;
// 140C8A2F0: using guessed type _DWORD dword_140C8A2F0;
// 140C8A2F4: using guessed type _DWORD dword_140C8A2F4;

