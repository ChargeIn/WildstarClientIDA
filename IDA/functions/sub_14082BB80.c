#include "../winhttp.h"

//----- (000000014082BB80) ----------------------------------------------------
__int64 __fastcall sub_14082BB80(__int64 a1, __int64 a2)
{
	unsigned int v4; // eax
	__int64 v5; // r8
	unsigned int v6; // r9d
	unsigned int v7; // edx
	int v8; // ebx
	__int64 result; // rax
	int v10; // eax
	int v11; // eax
	unsigned __int16* v12; // rcx
	int v13; // ebx
	int v14[22]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v15; // [rsp+88h] [rbp+10h] BYREF

	v15 = a2;
	sub_14083B2F0(qword_140C61B80, *(_DWORD*)(a2 + 56));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 8i64))(*(_QWORD*)(a2 + 8));
	v4 = sub_140855970(*(_QWORD*)(a2 + 8));
	*(_DWORD*)(a2 + 16) = *(_DWORD*)(a1 + 192);
	v5 = v4 >> 10;
	v6 = v4;
	*(_DWORD*)(a2 + 20) = v4 - (v4 >> 10 << 10);
	if ((_DWORD)v5)
	{
		if (*(_WORD*)(*(_QWORD*)(a2 + 8) + 60i64) != 1283)
			goto LABEL_10;
		v10 = HIDWORD(qword_140C61B20);
		if ((unsigned int)v5 < HIDWORD(qword_140C61B20))
			v10 = v5;
		LODWORD(v5) = v5 - v10;
		*(_DWORD*)(a2 + 20) = v6 - ((_DWORD)v5 << 10);
		if ((_DWORD)v5)
		{
		LABEL_10:
			*(_DWORD*)(a2 + 16) += v5;
			v11 = sub_14082BE40((__int64**)(a1 + 96), *(_DWORD*)(a2 + 16), &v15);
			v12 = *(unsigned __int16**)(a2 + 8);
			if (v11 == 1)
			{
				v14[0] = 0;
				result = v12[30];
				if ((_DWORD)result == 1027)
					return (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a2 + 8) + 88i64))(*(_QWORD*)(a2 + 8), v14);
				if ((_DWORD)result == 1283)
				{
					result = sub_1408570E0((__int64)v12);
					if ((_BYTE)result)
						return (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a2 + 8) + 88i64))(*(_QWORD*)(a2 + 8), v14);
				}
			}
			else
			{
				(*(void(__fastcall**)(unsigned __int16*))(*(_QWORD*)v12 + 16i64))(v12);
				v13 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
				return sub_140881720(v13, a2);
			}
		}
		else
		{
			return sub_14082CAD0(a1, a2);
		}
	}
	else
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a2 + 8) + 64i64))(
			*(_QWORD*)(a2 + 8),
			a2,
			v5,
			v4);
		v7 = *(_DWORD*)(a2 + 56);
		if (v7)
			sub_14083C260(qword_140C61B80, v7);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16i64))(*(_QWORD*)(a2 + 8));
		v8 = dword_140C10F20;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
		return sub_140881720(v8, a2);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B20: using guessed type __int64 qword_140C61B20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082BB80: using guessed type int var_58[22];

