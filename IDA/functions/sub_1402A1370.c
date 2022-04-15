//----- (00000001402A1370) ----------------------------------------------------
__int64 __fastcall sub_1402A1370(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	int v5; // ebx
	__int64 v6; // r14
	__int64 v7; // rax
	__int64 v8; // rdx
	int** v9; // rsi
	int* v10; // rax
	int* v11; // rdi
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-50h] BYREF
	__int64 v13; // [rsp+38h] [rbp-48h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-40h]
	int v15[6]; // [rsp+48h] [rbp-38h] BYREF
	__int64 v16[4]; // [rsp+60h] [rbp-20h] BYREF
	__int64 v17; // [rsp+A0h] [rbp+20h] BYREF
	__int64 v18; // [rsp+B0h] [rbp+30h] BYREF

	v2 = a2;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	if (a2 <= 0x10)
	{
		v6 = a2;
		if (*(_QWORD*)(a1 + 136) <= (unsigned __int64)a2)
			sub_1402A2FF0((__int64*)(a1 + 128), a2 + 1);
		if (!*(_QWORD*)(*(_QWORD*)(a1 + 128) + 8 * v2))
		{
			v7 = *(int*)(a1 + 48);
			v8 = *(_QWORD*)(a1 + 112);
			v15[1] = 4;
			v15[2] = v2;
			v15[3] = -1;
			v17 = 0i64;
			v15[0] = dword_140AE8190[v7];
			if ((*(int(__fastcall**)(_QWORD, __int64, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
				+ 56i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
					v8,
					v15,
					&v17) >= 0)
			{
				v9 = (int**)(*(_QWORD*)(a1 + 128) + 8 * v2);
				if (v9)
				{
					v10 = sub_14018B280(24i64, 0);
					v11 = v10;
					if (v10)
					{
						*(_QWORD*)v10 = off_140B55048;
						v10[2] = 1;
						*(_QWORD*)v10 = off_140B61188;
						*((_QWORD*)v10 + 2) = v17;
						if (v17)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
					}
					else
					{
						v11 = 0i64;
					}
					*v9 = v11;
				}
			}
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
		}
		return *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8 * v6);
	}
	else
	{
		v13 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16[0] = (__int64)TlsValue;
		v18 = 0x141DE5C28i64;
		v16[1] = v13;
		v16[2] = (__int64)lpTlsValue;
		v5 = sub_1401971E0(&dword_140C8A49C, 14, &v18, (unsigned int)v2, v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v5)
			DebugBreak();
		return 0i64;
	}
}
// 140AE8190: using guessed type _DWORD dword_140AE8190[28];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();
// 140C8A49C: using guessed type _DWORD dword_140C8A49C;

