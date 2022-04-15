#include "../winhttp.h"

//----- (0000000140045B70) ----------------------------------------------------
void __fastcall sub_140045B70(__int64 a1)
{
	unsigned __int64 v2; // rcx
	int* v3; // rdx
	int* v4; // rax
	int v5; // r8d
	void(__fastcall * **v6)(_QWORD); // rdi
	__int64 v7; // rcx
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	int v11; // eax
	__int64 v12; // r9
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rsi
	__int64 v16; // rdi
	int v17; // eax
	__int64 v18; // r9
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // r8
	int v22; // [rsp+40h] [rbp+8h] BYREF
	__int64 v23; // [rsp+48h] [rbp+10h] BYREF
	__int64 v24; // [rsp+50h] [rbp+18h] BYREF
	__int64 v25; // [rsp+58h] [rbp+20h] BYREF

	if (!*(_DWORD*)(a1 + 168))
	{
		v2 = *(_QWORD*)(a1 + 192);
		if (v2 < *(_QWORD*)(a1 + 208))
		{
			v3 = (int*)(104 * v2 + *(_QWORD*)(a1 + 200));
			if (*(_DWORD*)(qword_140C635F0 + 5760) == *v3)
			{
				v4 = sub_14018B280(720i64, 0);
				if (v4)
					v6 = (void(__fastcall***)(_QWORD))sub_140020730((__int64)v4);
				else
					v6 = 0i64;
				if ((int)sub_140020BC0((__int64)v6, *(void(__fastcall****)(_QWORD))(a1 + 176), v5) < 0
					|| (int)sub_14003E380(a1, v6) < 0)
				{
					sub_140046640(a1, 501422);
				}
				else
				{
					v7 = *(_QWORD*)(a1 + 192);
					v8 = *(_QWORD*)(a1 + 176);
					LODWORD(v23) = 0;
					v9 = *(_QWORD*)(a1 + 200);
					*(_DWORD*)(a1 + 168) = 3;
					LODWORD(v23) = *(_DWORD*)(104 * v7 + v9);
					v24 = *(_QWORD*)(qword_140C635F0 + 280);
					if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808
						+ 264i64))(
							qword_140C65808,
							&v24,
							2015i64,
							&v23))
					{
						v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
						v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 32i64))(v24);
						v12 = *(_QWORD*)(v8 + 16);
						if (v12)
							(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v12 + 16))(
								*(_QWORD*)(v12 + 8),
								v10 + 4,
								(unsigned int)(v11 - 4));
						v25 = 0i64;
						v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
						v14 = *(unsigned int*)(v8 + 152);
						v25 = v13;
						(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
							qword_140C65808,
							v14,
							580i64,
							&v25);
					}
				}
				if (v6)
					(*v6)[1](v6);
			}
			else
			{
				v15 = *(_QWORD*)(a1 + 176);
				v22 = 0;
				v22 = *v3;
				v23 = *(_QWORD*)(qword_140C635F0 + 280);
				if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, int*))(*(_QWORD*)qword_140C65808 + 264i64))(
					qword_140C65808,
					&v23,
					2015i64,
					&v22))
				{
					v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
					v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 32i64))(v23);
					v18 = *(_QWORD*)(v15 + 16);
					if (v18)
						(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v18 + 16))(
							*(_QWORD*)(v18 + 8),
							v16 + 4,
							(unsigned int)(v17 - 4));
					v24 = 0i64;
					v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
					v20 = *(unsigned int*)(v15 + 152);
					v24 = v19;
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
						qword_140C65808,
						v20,
						580i64,
						&v24);
				}
				sub_140011800(qword_140C635F0, *(int**)(104i64 * *(_QWORD*)(a1 + 192) + *(_QWORD*)(a1 + 200) + 8));
				v21 = qword_140C635F0;
				*(_DWORD*)(qword_140C635F0 + 5760) = v22;
				*(_DWORD*)(a1 + 168) = 1;
				sub_14003E470(a1, 516357, *(int**)(v21 + 5752));
			}
		}
	}
}
// 140045BF1: variable 'v5' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

