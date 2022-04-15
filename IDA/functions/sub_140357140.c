#include "../winhttp.h"

//----- (0000000140357140) ----------------------------------------------------
__int64 __fastcall sub_140357140(__int64 a1)
{
	__int64 v2; // rdx
	int v3; // edi
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v9; // [rsp+60h] [rbp+8h] BYREF
	__int64 v10; // [rsp+68h] [rbp+10h] BYREF

	if ((*(_DWORD*)(a1 + 232) & 0x20001) != 131073)
		return 0i64;
	v2 = *(unsigned int*)(a1 + 176);
	v9 = 0i64;
	v10 = 0i64;
	v3 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v2,
		(unsigned int)v2,
		1i64,
		24,
		5,
		0,
		0,
		0,
		&v9);
	if (v3 >= 0)
	{
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			*(unsigned int*)(a1 + 176),
			*(unsigned int*)(a1 + 176),
			1i64,
			21,
			5,
			1,
			0,
			0,
			&v10);
		if (v3 >= 0)
		{
			v4 = v9;
			if (*(_QWORD*)(a1 + 5488) != v9)
			{
				if (v9)
				{
					(**(void (***)(void))v9)();
					v4 = v9;
				}
				v5 = *(_QWORD*)(a1 + 5488);
				if (v5)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5 + 8i64))(*(_QWORD*)(a1 + 5488));
					v4 = v9;
				}
				*(_QWORD*)(a1 + 5488) = v4;
			}
			v6 = v10;
			if (*(_QWORD*)(a1 + 5496) != v10)
			{
				if (v10)
				{
					(**(void(__fastcall***)(__int64))v10)(v10);
					v4 = v9;
					v6 = v10;
				}
				v7 = *(_QWORD*)(a1 + 5496);
				if (v7)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v7 + 8i64))(*(_QWORD*)(a1 + 5496));
					v4 = v9;
					v6 = v10;
				}
				*(_QWORD*)(a1 + 5496) = v6;
			}
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v4 = v9;
			}
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			return 0i64;
		}
	}
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	return (unsigned int)v3;
}
// 140C65670: using guessed type __int64 qword_140C65670;

