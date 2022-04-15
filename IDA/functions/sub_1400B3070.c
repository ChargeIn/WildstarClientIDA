#include "../winhttp.h"

//----- (00000001400B3070) ----------------------------------------------------
void __fastcall sub_1400B3070(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // r14
	int v5; // r15d
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebx
	unsigned int v9; // eax
	unsigned int v10; // ebx
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rbx
	__int64 v14; // r8
	int* v15; // rax
	__int64 v17; // rbp
	__int64 v18; // rdx
	__int64 v19; // rbx
	__int64 v20; // rbx
	__int64 v21; // [rsp+50h] [rbp+8h] BYREF
	__int64 v22; // [rsp+60h] [rbp+18h] BYREF

	if (*(_QWORD*)(a1 - 160) && a2)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v5 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (!v6)
		{
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
			v10 = v9;
			if (v9)
			{
				v11 = a1 - 432;
				if (v9 == 5)
				{
					sub_1400B23B0(v11, 10);
				}
				else if (v9 == 8)
				{
					sub_1400B23B0(v11, 35);
				}
				else
				{
					sub_1400B23B0(v11, 22);
					v22 = 0x141D0DE70i64;
					sub_1401A3130(95, 0, &v22, v10);
				}
			}
			else
			{
				v12 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 88i64))(a2);
				v13 = -1i64;
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v12 + v14));
				sub_14001B1A0(a1 + 152, v12, (int*)((char*)v12 + v14));
				v15 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 104i64))(a2);
				while (*((_BYTE*)v15 + ++v13) != 0)
					;
				sub_14001B1A0(a1 + 184, v15, (int*)((char*)v15 + v13));
				v17 = 0i64;
				if (*(_DWORD*)(a1 + 308) != 11)
				{
					v18 = a1 + 8;
					if (a1 == 432)
						v18 = 0i64;
					v19 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 - 160) + 112i64))(
						*(_QWORD*)(a1 - 160),
						v18);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 48i64))(v19, *(_QWORD*)(a1 + 160));
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 56i64))(v19, *(_QWORD*)(a1 - 184));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
				}
				sub_1400B23B0(a1 - 432, 11);
				if (*(_DWORD*)(a1 + 284))
				{
					if (a1 != 432)
						v17 = a1 + 80;
					v20 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 - 160) + 264i64))(
						*(_QWORD*)(a1 - 160),
						v17);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 56i64))(v20, *(_QWORD*)(a1 + 160));
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 64i64))(v20, *(_QWORD*)(a1 - 216));
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 48i64))(v20, *(_QWORD*)(a1 - 304));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				}
			}
			goto LABEL_36;
		}
		if (v6 > 3023)
		{
			if (v6 == 3310)
				goto LABEL_10;
			if (v6 == 3716)
			{
				sub_1400B23B0(a1 - 432, 19);
				goto LABEL_36;
			}
			if (v6 != 3746)
			{
			LABEL_15:
				sub_1400B2700(a1 - 432, v7, v6);
				v21 = 0x141D0D7D8i64;
				sub_1401A3130(95, 0, &v21, v8);
				goto LABEL_36;
			}
		}
		else if (v6 != 3023)
		{
			if (v6 >= 10)
			{
				if (v6 <= 11)
					goto LABEL_10;
				if (v6 == 42)
				{
					sub_1400B23B0(a1 - 432, 21);
					goto LABEL_36;
				}
				if (((v6 - 3002) & 0xFFFFFFF7) == 0)
				{
				LABEL_10:
					sub_1400B23B0(a1 - 432, 16);
				LABEL_36:
					(**(void(__fastcall***)(__int64))a2)(a2);
					*(StackBase - 1) = v5;
					return;
				}
			}
			goto LABEL_15;
		}
		sub_1400B23B0(a1 - 432, 18);
		goto LABEL_36;
	}
}
// 1400B3143: variable 'v7' is possibly undefined

