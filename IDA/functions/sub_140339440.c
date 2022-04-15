#include "../winhttp.h"

//----- (0000000140339440) ----------------------------------------------------
__int64 __fastcall sub_140339440(__int64 a1, __int64* a2, struct sockaddr* a3)
{
	__int64 result; // rax
	int Error; // eax
	int* v7; // rax
	unsigned int v8; // edi
	__int64 v9; // rbx
	SOCKET v10; // rcx
	int v11; // eax
	SOCKET s; // [rsp+20h] [rbp-38h] BYREF
	struct sockaddr name; // [rsp+28h] [rbp-30h] BYREF

	result = sub_140338F90(a1, &s);
	if ((int)result >= 0)
	{
		name = *a3;
		if (bind(s, &name, 16))
		{
			Error = WSAGetLastError();
			sub_140338EB0((__int64)L"bind", Error, (__int64)a3);
			return 2147500037i64;
		}
		else
		{
			v7 = sub_14018B280(496i64, 0);
			v8 = 0;
			if (v7)
				v9 = sub_14033E900((__int64)v7, s);
			else
				v9 = 0i64;
			v10 = s;
			*(_DWORD*)(v9 + 284) = 2;
			if (listen(v10, 0x7FFFFFFF))
			{
				WSAGetLastError();
				*(_DWORD*)(v9 + 280) = 5;
				v11 = WSAGetLastError();
				sub_140338EB0((__int64)L"listen", v11, (__int64)a3);
				v8 = -2147467259;
			}
			else
			{
				if (!*(_WORD*)(v9 + 94))
					sub_140334D90(v9 + 16);
				s = 0x141DECE40i64;
				sub_1401A3130(11, 1, &s, v9 + 94);
				*(_DWORD*)(v9 + 280) = 4;
				if (*a2 != v9)
				{
					(**(void(__fastcall***)(__int64))v9)(v9);
					if (*a2)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
					*a2 = v9;
				}
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			return v8;
		}
	}
	return result;
}
// 140AF27A8: using guessed type wchar_t aListen[7];
// 140AF27B8: using guessed type wchar_t aBind[5];

