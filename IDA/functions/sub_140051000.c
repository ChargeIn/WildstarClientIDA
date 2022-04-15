#include "../winhttp.h"

//----- (0000000140051000) ----------------------------------------------------
void __fastcall sub_140051000(int a1, __int64 a2)
{
	__int64 v4; // r10
	unsigned int v5; // eax
	unsigned int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // eax
	unsigned int v9; // eax
	unsigned int v10; // eax
	unsigned __int64 i; // r12
	__int64 v12; // r14
	__int64 v13; // r15
	unsigned __int64 v14; // rsi
	_QWORD* v15; // rbx
	unsigned int* v16; // rbx
	unsigned int v17; // ebp
	unsigned __int64 v18; // rsi
	_QWORD* v19; // rbx
	int* v20; // rbx
	int v21; // r8d
	int v22; // [rsp+20h] [rbp-58h] BYREF
	int v23[5]; // [rsp+24h] [rbp-54h] BYREF

	if (a1 == 1)
	{
		v4 = qword_140C63628;
		if (qword_140C63628)
		{
			v5 = sub_1400518A0(qword_140C63628, 98, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v5);
			v4 = qword_140C63628;
		}
		if (v4)
		{
			v6 = sub_1400518A0(v4, 99, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v6);
			v4 = qword_140C63628;
		}
		if (v4)
		{
			v7 = sub_1400518A0(v4, 100, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v7);
			v4 = qword_140C63628;
		}
		if (v4)
		{
			v8 = sub_1400518A0(v4, 101, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v8);
			v4 = qword_140C63628;
		}
		if (v4)
		{
			v9 = sub_1400518A0(v4, 102, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v9);
			v4 = qword_140C63628;
		}
		if (v4)
		{
			v10 = sub_1400518A0(v4, 103, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v10);
		}
	}
	sub_1400BD410(a2 + 16, a1);
	for (i = 0i64; i < *(_QWORD*)(a2 + 688); ++i)
	{
		v12 = *(_QWORD*)(*(_QWORD*)(a2 + 696) + 8 * i);
		if (v12)
		{
			do
			{
				v13 = *(_QWORD*)(v12 + 8);
				v23[0] = *(_DWORD*)(v12 + 20);
				v14 = (*(__int64(__fastcall**)(int*))(a2 + 664))(v23);
				v15 = *(_QWORD**)(*(_QWORD*)(a2 + 656) + 8 * (v14 % *(_QWORD*)(a2 + 648)));
				if (!v15)
					goto LABEL_23;
				while (v14 != *v15 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a2 + 672))(v23, v15 + 2))
				{
					v15 = (_QWORD*)v15[1];
					if (!v15)
						goto LABEL_23;
				}
				v16 = (unsigned int*)v15 + 5;
				if (!v16 || (v17 = *v16, v23[2] = v16[1], v16[2] != 3))
					LABEL_23:
				v17 = 0;
				v22 = *(_DWORD*)(v12 + 20);
				v18 = (*(__int64(__fastcall**)(int*))(a2 + 664))(&v22);
				v19 = *(_QWORD**)(*(_QWORD*)(a2 + 656) + 8 * (v18 % *(_QWORD*)(a2 + 648)));
				if (!v19)
					goto LABEL_31;
				while (v18 != *v19 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a2 + 672))(&v22, v19 + 2))
				{
					v19 = (_QWORD*)v19[1];
					if (!v19)
						goto LABEL_31;
				}
				v20 = (int*)v19 + 5;
				if (!v20 || (v21 = v20[1], v23[1] = *v20, v20[2] != 3))
					LABEL_31:
				v21 = 0;
				if (v17)
				{
					if (v21)
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 48i64))(qword_140C65848, v17);
				}
				v12 = v13;
			} while (v13);
		}
	}
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;

