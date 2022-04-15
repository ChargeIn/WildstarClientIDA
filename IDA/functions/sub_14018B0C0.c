#include "../winhttp.h"

//----- (000000014018B0C0) ----------------------------------------------------
__int16* __fastcall sub_14018B0C0(__int64 a1, __int64* a2)
{
	__int16 v2; // r15
	signed __int64 v3; // rbp
	__int64* v5; // r12
	__int64 v6; // rsi
	__int64 v7; // rdi
	SIZE_T v8; // rbx
	__int16* v9; // r14
	__int16* result; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rcx
	SIZE_T v13; // rax
	_WORD* v14; // rdx
	__int64 v15; // rbx
	__int16* v16; // rbx
	__int16 v17; // ax

	v2 = a1;
	v3 = 0i64;
	v5 = (__int64*)((char*)&unk_140C87F10 + 32 * a1);
	if (v5[3])
		v6 = *(_QWORD*)*v5;
	else
		v6 = 0i64;
	v7 = 1i64 << a1;
	v8 = (dwSize >> a1) - 1;
	if (v6)
	{
		v9 = (__int16*)(v6 - 16);
	}
	else
	{
		result = (__int16*)sub_14018AC90(qword_140C7F958);
		v9 = result;
		if (!result)
			return result;
		v11 = *(_QWORD*)result;
		v6 = (__int64)(result + 8);
		*((_DWORD*)result + 2) = dwSize - 16;
		v12 = (qword_140C7F958 << 56) | v11 & 0xFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64;
		*((_QWORD*)result + 1) &= 0xFFFF2FFFFFFFFFFFui64;
		*(_QWORD*)result = v12;
		*((_QWORD*)result + 1) |= 0x200000000000ui64;
		result[8] = v2;
		result[9] = v7;
		*((_DWORD*)result + 5) = (unsigned __int16)((unsigned __int64)(v7 + 31) >> v2);
		sub_140189A90((__int64)v5, (unsigned __int64)(result + 8));
		v13 = (unsigned __int16)v9[10];
		if (v13 < v8)
		{
			v14 = (__int16*)((char*)v9 + v7 * (unsigned __int16)v9[10]);
			do
			{
				*v14 = ++v13;
				v14 = (_WORD*)((char*)v14 + v7);
			} while (v13 < v8);
		}
		*(__int16*)((char*)v9 + v7 * v8) = 0;
	}
	v15 = *(unsigned __int16*)(v6 + 4);
	qword_140C87980 += v7;
	*a2 = v7;
	v16 = (__int16*)((char*)v9 + v7 * v15);
	v17 = *v16;
	++* (_WORD*)(v6 + 6);
	*(_WORD*)(v6 + 4) = v17;
	LOBYTE(v3) = (unsigned int)(*((_DWORD*)NtCurrentTeb()->NtTib.StackBase - 1) - 1) >= 0xFFFF;
	_InterlockedCompareExchange64(&qword_140C63698, v3, 0i64);
	if (!*(_WORD*)(v6 + 4))
		sub_140189DC0(v5, v6);
	return v16;
}
// 140C63698: using guessed type __int64 qword_140C63698;
// 140C7F958: using guessed type __int64 qword_140C7F958;
// 140C87980: using guessed type __int64 qword_140C87980;

