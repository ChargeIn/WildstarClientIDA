#include "../winhttp.h"

//----- (000000014033A030) ----------------------------------------------------
__int64 __fastcall sub_14033A030(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64* v5; // rbp
	__int64 v6; // rdi
	__int64 v7; // rbx
	int Error; // eax
	_QWORD* v9; // rcx
	__int64 v10; // rax
	int* v11; // rcx
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	_WORD* v14; // rbx
	_WORD* v15; // rdi
	__int64 v16; // rbx
	int v17; // eax
	void(__fastcall * **v18)(_QWORD); // rcx
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	result = *a2;
	v5 = (__int64*)(*a2 + 320);
	if (*(_QWORD*)(*a2 + 384))
	{
		while (1)
		{
			v6 = *(_QWORD*)(*a2 + 384);
			v7 = send(*(_QWORD*)(*a2 + 272), *(const char**)(v6 + 16), *(_QWORD*)(v6 + 32) - *(_QWORD*)(v6 + 16), 0);
			Error = WSAGetLastError();
			if ((int)v7 < 0)
				break;
			v9 = (_QWORD*)*a2;
			v10 = v7;
			v9[56] += v7;
			++v9[57];
			--v9[58];
			++v9[60];
			v11 = *(int**)(v6 + 16);
			v12 = *(_QWORD*)(v6 + 32) - (_QWORD)v11;
			if (v10 == v12)
			{
				sub_140338730(v5, (_QWORD*)v6);
			}
			else
			{
				v13 = v12 - v10;
				sub_1407DB590(v11, (int*)((char*)v11 + v10), v13);
				*(_QWORD*)(v6 + 32) = v13 + *(_QWORD*)(v6 + 16);
			}
			result = *a2;
			if (!*(_QWORD*)(*a2 + 384))
				goto LABEL_17;
		}
		if (Error == 10035)
		{
			v14 = (_WORD*)(*a2 + 222);
			if (!*v14)
				sub_140334D90(*a2 + 144);
			v15 = (_WORD*)(*a2 + 94);
			if (!*v15)
				sub_140334D90(*a2 + 16);
			v19 = 0x141DED260i64;
			result = sub_1401A3130(11, 3, &v19, v15, v14);
		}
		else
		{
			v16 = *a2;
			v17 = WSAGetLastError();
			sub_140338EB0((__int64)L"send", v17, v16 + 144);
			*(_DWORD*)(*a2 + 280) = 5;
			v18 = (void(__fastcall***)(_QWORD)) * a2;
			v19 = (__int64)v18;
			if (v18)
				(**v18)(v18);
			result = (__int64)sub_140338DF0(a1, 4, &v19);
		}
	}
LABEL_17:
	if (*a2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
	return result;
}
// 140AF2C88: using guessed type wchar_t aSend[5];

