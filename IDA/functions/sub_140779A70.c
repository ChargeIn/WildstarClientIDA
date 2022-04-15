#include "../winhttp.h"

//----- (0000000140779A70) ----------------------------------------------------
void** __fastcall sub_140779A70(__int64 a1)
{
	void** result; // rax
	void(__fastcall * v3)(__int64, _QWORD); // rax
	__int64 v4; // rsi
	int v5; // edi
	unsigned int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // rdx
	__int128 v10; // [rsp+60h] [rbp-18h] BYREF
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	if (!*(_DWORD*)(a1 + 168))
	{
		v3 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 128);
		if (v3)
			v3(3i64, *(_QWORD*)(a1 + 136));
		v4 = 40i64;
		v5 = 0;
		while (1)
		{
			v6 = *(_DWORD*)(v4 + *(_QWORD*)(a1 + 144));
			if (qword_140C63840)
			{
				v7 = qword_140C63840(off_140A6DFF8, v6, qword_140C63858);
			}
			else
			{
				if (dword_140C64C04 || (int)sub_140248CA0() < 0)
					goto LABEL_12;
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v6);
			}
			if (v7)
			{
				v9 = *(_QWORD*)(qword_140C65898 + 120);
				v10 = 0i64;
				sub_1405787D0(a1 + 96, 0, *(_DWORD*)(v9 + 8), v8, v7, 0i64, 0i64, 0, (_QWORD*)(a1 + 96), &v10, 0);
			}
		LABEL_12:
			++v5;
			v4 += 4i64;
			if ((unsigned __int64)v5 >= 4)
			{
				*(_DWORD*)(a1 + 168) = 1;
				result = (void**)sub_14018CDF0();
				*(_DWORD*)(a1 + 156) = (_DWORD)result;
				*(_DWORD*)(a1 + 160) = (_DWORD)result;
				return result;
			}
		}
	}
	return result;
}
// 140779B58: variable 'v8' is possibly undefined
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140779A70: using guessed type __int128 var_18;

