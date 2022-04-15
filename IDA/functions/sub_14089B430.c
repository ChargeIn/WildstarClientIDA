#include "../winhttp.h"

//----- (000000014089B430) ----------------------------------------------------
char __fastcall sub_14089B430(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rbx
	int v4; // r9d
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	char v10; // al
	unsigned int v11; // esi
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	char v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	v4 = a2;
	if (a3 == *(_QWORD*)(*(_QWORD*)(v3 + 104) + 56i64)
		|| (v6 = *(_QWORD**)(v3 + 128), (v7 = v6[39]) != 0)
		&& (v6 = (_QWORD*)*(unsigned int*)(a1 + 12), *((_BYTE*)v6 + v7) == 1))
	{
		LOBYTE(v6) = -37;
		if (!a2)
			v4 = 748895195;
		if (*(_DWORD*)(a1 + 8) != v4)
		{
			*(_DWORD*)(a1 + 8) = v4;
			v8 = *(_QWORD*)(v3 + 16);
			if (v8
				&& ((v6 = *(_QWORD**)(v8 + 176), *v6)
					|| (v9 = *(_QWORD*)(v8 + 16)) != 0 && (LOBYTE(v6) = sub_1408993F0(v9), (_BYTE)v6)))
			{
				*(_BYTE*)(v3 + 192) |= 1u;
			}
			else
			{
				v10 = *(_BYTE*)(v3 + 98);
				*(_BYTE*)(v3 + 192) &= ~1u;
				v13 = 0i64;
				v14 = 0;
				if ((v10 & 0xFu) <= 1)
				{
					v11 = sub_140899EB0((_QWORD*)v3);
					v15 = sub_140898DF0(v3, v11);
					if (v15)
					{
						sub_140899FD0((_QWORD*)v3, v11, (__int64)&v13, &v15);
						if (v15)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 72i64))(v15);
					}
				}
				LOBYTE(v6) = sub_14089B630(*(_QWORD**)(a1 + 16));
			}
		}
	}
	return (char)v6;
}

