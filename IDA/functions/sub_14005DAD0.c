#include "../winhttp.h"

//----- (000000014005DAD0) ----------------------------------------------------
__int64 __fastcall sub_14005DAD0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	_QWORD* v4; // rcx
	_QWORD* v5; // r8
	__int64 v6; // r9
	__int64 v7; // rdx
	_DWORD* v8; // rax
	__int64 v9; // rbx
	char v10; // di
	__int64 v11; // rdx
	__int64 v12; // rax

	for (result = *(_QWORD*)(a1 + 32); *(_QWORD*)(result + 80); result = *(_QWORD*)(a1 + 32))
	{
		v3 = *(_QWORD*)(a1 + 32);
		v4 = *(_QWORD**)(v3 + 80);
		v5 = (_QWORD*)*v4;
		if ((_QWORD*)*v4 == v4)
			*(_QWORD*)(v3 + 80) = 0i64;
		else
			*v4 = *v5;
		*v5 = **(_QWORD**)(v3 + 176);
		**(_QWORD**)(v3 + 176) = v5;
		*((_BYTE*)v5 + 9) = *((_BYTE*)v5 + 9) & 0xF8 | *(_BYTE*)(v3 + 32) & 3;
		v6 = v5[2];
		if (!v6)
			continue;
		if ((*(_BYTE*)(v6 + 10) & 4) == 0)
		{
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 312i64);
			v8 = (_DWORD*)(*(_QWORD*)(v6 + 32)
				+ 40 * (*(int*)(v7 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v6 + 11)) - 1)));
			while (v8[6] != 4 || *((_QWORD*)v8 + 2) != v7)
			{
				v8 = (_DWORD*)*((_QWORD*)v8 + 4);
				if (!v8)
				{
					v8 = dword_140A12138;
					break;
				}
			}
			if (v8[2])
				goto LABEL_15;
			*(_BYTE*)(v6 + 10) |= 4u;
		}
		v8 = 0i64;
	LABEL_15:
		if (v8)
		{
			v9 = *(_QWORD*)(v3 + 112);
			v10 = *(_BYTE*)(a1 + 101);
			*(_BYTE*)(a1 + 101) = 0;
			*(_QWORD*)(v3 + 112) = 2i64 * *(_QWORD*)(v3 + 120);
			v11 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v11 = *(_QWORD*)v8;
			*(_DWORD*)(v11 + 8) = v8[2];
			v12 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)(v12 + 16) = v5;
			*(_DWORD*)(v12 + 24) = 7;
			*(_QWORD*)(a1 + 16) += 32i64;
			sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 0);
			*(_BYTE*)(a1 + 101) = v10;
			*(_QWORD*)(v3 + 112) = v9;
		}
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

