#include "../winhttp.h"

//----- (00000001407191F0) ----------------------------------------------------
void __fastcall sub_1407191F0(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rsi
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // [rsp+40h] [rbp-28h] BYREF
	__int64 v10; // [rsp+48h] [rbp-20h]
	__int64(__fastcall * v11)(); // [rsp+50h] [rbp-18h]
	__int64 v12; // [rsp+58h] [rbp-10h]

	if (!*(_DWORD*)(a1 + 688))
	{
		v2 = a1 + 24;
		v3 = 6i64;
		do
		{
			if (*(_QWORD*)(v2 + 16))
				sub_140195D70(v2);
			v2 += 72i64;
			--v3;
		} while (v3);
	}
	sub_140719BB0(a1, 1);
	if (++ * (_DWORD*)(a1 + 688) >= 0x14u)
	{
	LABEL_12:
		v6 = *(_QWORD*)(a1 + 640);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 72i64))(v6);
			v7 = *(_QWORD*)(a1 + 640);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(a1 + 640) = 0i64;
			}
		}
		else if (*(_QWORD*)(a1 + 632))
		{
			if (!*(_QWORD*)(a1 + 648))
			{
				(**(void(__fastcall***)(__int64))a1)(a1);
				if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, __int64, void(__fastcall*)(__int64, int, _QWORD*), __int64, _QWORD))(**(_QWORD**)(a1 + 528) + 24i64))(
					*(_QWORD*)(a1 + 528),
					*(_QWORD*)(a1 + 632),
					a1 + 648,
					3221225472i64,
					sub_140719190,
					a1,
					0i64) < 0)
				{
					v8 = *(_QWORD*)(a1 + 648);
					if (v8)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
						*(_QWORD*)(a1 + 648) = 0i64;
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
				}
			}
		}
		sub_140719390(a1, 0i64);
	}
	else
	{
		v4 = 0i64;
		v5 = (_QWORD*)(a1 + 536);
		while (!v5[6] || !*v5 || !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 32i64))(*v5))
		{
			++v4;
			++v5;
			if (v4 >= 6)
				goto LABEL_12;
		}
		v9 = 0;
		v10 = a1;
		v11 = sub_1407191F0;
		v12 = 0i64;
		sub_140195960(a1 + 456, 100, (__int64)&v9, 4);
	}
}

