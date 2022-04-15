#include "../winhttp.h"

//----- (00000001400024B0) ----------------------------------------------------
__int64 __fastcall sub_1400024B0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = (_QWORD*)(a1 + 440);
	v3 = *(_QWORD*)(a1 + 440);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*v1 = 0i64;
	}
	v4 = v1[2];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		v1[2] = 0i64;
	}
	v5 = v1[1];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		v1[1] = 0i64;
	}
	v6 = v1[3];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v1[3] = 0i64;
	}
	if (!*(_DWORD*)(a1 + 136)
		|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			*(unsigned int*)(a1 + 108),
			*(unsigned int*)(a1 + 112),
			1i64,
			6,
			5,
			1,
			0,
			0,
			v1),
			(int)result >= 0))
	{
		if (!*(_DWORD*)(a1 + 152)
			|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				*(unsigned int*)(a1 + 116),
				*(unsigned int*)(a1 + 120),
				1i64,
				6,
				5,
				1,
				0,
				0,
				v1 + 1),
				(int)result >= 0))
		{
			if (!*(_DWORD*)(a1 + 168)
				|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
					qword_140C65670,
					*(unsigned int*)(a1 + 116),
					*(unsigned int*)(a1 + 120),
					1i64,
					6,
					5,
					1,
					0,
					0,
					v1 + 2),
					(int)result >= 0))
			{
				if (!*(_DWORD*)(a1 + 184))
					return 0i64;
				result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
					qword_140C65670,
					*(unsigned int*)(a1 + 108),
					*(unsigned int*)(a1 + 112),
					1i64,
					6,
					5,
					1,
					0,
					0,
					v1 + 3);
				if ((int)result >= 0)
					return 0i64;
			}
		}
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

