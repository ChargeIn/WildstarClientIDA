#include "../winhttp.h"

//----- (0000000140150B90) ----------------------------------------------------
void __fastcall sub_140150B90(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rdx
	int v4; // r8d
	_QWORD* i; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rsi
	bool v9; // zf
	__int64 v10; // rcx
	__int64 v11; // rdi
	int* v12; // rcx
	__int64 v13; // [rsp+28h] [rbp-20h]

	v3 = *(_QWORD**)(a1 + 8);
	v4 = 0;
	for (i = (_QWORD*)*v3; i != v3; ++v4)
	{
		if (a2 == i[2])
			*(_DWORD*)(a1 + 48) = v4;
		i = (_QWORD*)*i;
	}
	v7 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v8 = v7[2];
			v9 = a2 == v8;
			if (a2 != v8)
			{
				if (sub_1401301F0(v7[2]))
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 568i64))(v8, 37i64, 0i64);
				v9 = a2 == v8;
			}
			*(_BYTE*)(v8 + 1436) &= ~0x40u;
			*(_BYTE*)(v8 + 1436) |= v9 << 6;
			v10 = *(_QWORD*)(v8 + 1560);
			if (v10 && (*(_BYTE*)(v10 + 28) & 1) != 0)
				sub_1400D42F0(v10, v9, 0, 4.0);
			if (a2 == v8 && *(_QWORD*)(v8 + 16))
			{
				LOBYTE(v13) = 0;
				v11 = *(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64);
				v12 = sub_14018B280(32i64, 0);
				if (v12 != (int*)-16i64)
				{
					*((_QWORD*)v12 + 2) = v8;
					*((_QWORD*)v12 + 3) = v13;
				}
				*(_QWORD*)v12 = v11;
				*((_QWORD*)v12 + 1) = *(_QWORD*)(v11 + 8);
				**(_QWORD**)(v11 + 8) = v12;
				*(_QWORD*)(v11 + 8) = v12;
				(**(void(__fastcall***)(__int64))v8)(v8);
			}
			v7 = (_QWORD*)*v7;
		} while (v7 != *(_QWORD**)(a1 + 8));
	}
}
// 140150C87: variable 'v13' is possibly undefined

