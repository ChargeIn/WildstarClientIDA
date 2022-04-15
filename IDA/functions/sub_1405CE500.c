//----- (00000001405CE500) ----------------------------------------------------
void __fastcall sub_1405CE500(_QWORD** a1, int a2, double a3, double a4)
{
	__int64 v6; // rsi
	__int64 i; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8
	__int64 v12; // rcx
	_QWORD** v13; // rax
	_QWORD* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // [rsp+40h] [rbp+8h] BYREF
	__int64 v21; // [rsp+50h] [rbp+18h] BYREF

	if (*((_DWORD*)a1 + 6))
	{
		v6 = qword_140C65898;
		for (i = *(_QWORD*)(qword_140C65898 + 28464); i; i = *(_QWORD*)(i + 96))
		{
			if (*(_QWORD*)(i + 5864))
			{
				v8 = *(_QWORD*)(i + 6320);
				if (v8)
				{
					if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 944i64))(v8))
						(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(i + 5864) + 896i64))(
							*(_QWORD*)(i + 5864),
							1i64,
							*(_QWORD*)(i + 6320));
				}
			}
		}
		v9 = *(_QWORD**)(v6 + 27728);
		if (v9)
			sub_1406016C0(v9, 1);
		a1[3] = 0i64;
		a1[4] = 0i64;
		sub_140195D70((__int64)(a1 + 24));
		sub_140195D70((__int64)(a1 + 33));
		if ((*a1)[1])
		{
			sub_1405CFA90((__int64)(a1 + 16));
		}
		else
		{
			while ((_QWORD*)*a1[17] != a1[17])
			{
				v12 = *a1[17];
				if (*(_DWORD*)(v12 + 16) == 3)
				{
					v20 = 2i64;
					HIDWORD(v20) = (*(_BYTE*)(v12 + 24) & 8) != 0;
					sub_1403F4900(qword_140C65898, 0x720u, (__int64)&v20);
					if ((*(_BYTE*)(*a1[17] + 24i64) & 4) != 0)
					{
						LOBYTE(v20) = 4;
						sub_1403F4900(qword_140C65898, 0x720u, (__int64)&v20);
					}
					LOBYTE(v20) = 3;
					sub_1403F4900(qword_140C65898, 0x720u, (__int64)&v20);
					v13 = (_QWORD**)a1[17];
					v14 = *v13;
					if (*v13 != v13)
					{
						do
						{
							v15 = (__int64)v14;
							v14 = (_QWORD*)*v14;
							sub_14018B900(v15, 0);
						} while (v14 != a1[17]);
					}
					*a1[17] = a1[17];
					a1[17][1] = a1[17];
				}
				else
				{
					v16 = *(_QWORD*)v12;
					v17 = *(_QWORD**)(v12 + 8);
					*v17 = *(_QWORD*)v12;
					*(_QWORD*)(v16 + 8) = v17;
					sub_14018B900(v12, 0);
				}
			}
		}
		if ((unsigned int)sub_14062CF20(*a1, v10, v11, a4) == 1 || a2)
			sub_1405CCB20((unsigned __int64)a1, v18, a3, a4);
		v19 = qword_140C65898;
		v21 = 0i64;
		*((_DWORD*)a1 + 5) = 0;
		*((_DWORD*)a1 + 30) = 1;
		LOBYTE(v21) = 1;
		sub_1403F4900(v19, 0x720u, (__int64)&v21);
	}
}
// 1405CE6D5: variable 'v10' is possibly undefined
// 1405CE6D5: variable 'v11' is possibly undefined
// 1405CE6EB: variable 'v18' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

