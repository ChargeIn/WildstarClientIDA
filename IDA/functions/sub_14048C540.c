//----- (000000014048C540) ----------------------------------------------------
__int64 sub_14048C540()
{
	int* v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // r14
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 i; // rax
	__int64 j; // rax
	void(__fastcall * **v12)(_QWORD, __int64); // rcx
	__int64(__fastcall * v13)(wchar_t**, __int64); // rax
	unsigned int v14; // eax
	__int64 v15; // rbx
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // r8
	unsigned int v19; // edx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // [rsp+80h] [rbp+8h] BYREF
	__int64 v25; // [rsp+88h] [rbp+10h] BYREF

	if (qword_140C65C28)
		return 0i64;
	v1 = sub_14018B280(304i64, 0);
	if (v1)
		qword_140C65C28 = sub_140642D10((__int64)v1);
	else
		qword_140C65C28 = 0i64;
	if ((int)sub_1406431B0(v2) >= 0)
	{
		v4 = qword_140C65C28;
		if (qword_140C65C28)
		{
			v5 = *(_QWORD*)(qword_140C65C28 + 112);
			v6 = *(_QWORD*)(v5 + 16);
			v7 = qword_140C65C28;
			if (v6 != v5)
			{
				do
				{
					v8 = *(_QWORD*)(v6 + 24);
					v9 = v6;
					if (v8)
					{
						v6 = *(_QWORD*)(v6 + 24);
						for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
							v6 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v6 = j;
						if (*(_QWORD*)(v6 + 24) != j)
							v6 = j;
					}
					v12 = *(void(__fastcall****)(_QWORD, __int64))(v9 + 40);
					if (v12)
						(**v12)(v12, 1i64);
					v24 = v9;
					sub_140645210(v4 + 104, &v24);
				} while (v6 != *(_QWORD*)(v4 + 112));
				v4 = qword_140C65C28;
			}
			v13 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			*(_QWORD*)(v7 + 264) = 0i64;
			if (v13)
			{
				v14 = v13(off_140A69138, qword_140C63858);
			}
			else if (dword_140C64944)
			{
				v14 = 0;
			}
			else if ((int)sub_1401E9240() >= 0)
			{
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
			}
			else
			{
				v14 = 0;
			}
			if (v14)
			{
				v15 = 0i64;
				v16 = v14;
				do
				{
					v17 = *(_QWORD*)(v15 + *(_QWORD*)(v4 + 24));
					if (*(float*)(v17 + 32) <= 0.0)
					{
						v18 = *(_QWORD*)(v4 + 112);
						v19 = *(_DWORD*)v17;
						v20 = *(_QWORD*)(v18 + 8);
						v21 = v18;
						while (v20)
						{
							if (*(_DWORD*)(v20 + 32) < v19)
							{
								v20 = *(_QWORD*)(v20 + 24);
							}
							else
							{
								v21 = v20;
								v20 = *(_QWORD*)(v20 + 16);
							}
						}
						if (v21 == v18 || v19 < *(_DWORD*)(v21 + 32))
						{
							v25 = *(_QWORD*)(v4 + 112);
							v22 = &v25;
						}
						else
						{
							v24 = v21;
							v22 = &v24;
						}
						v23 = *v22;
						if (v23 == v18 || !*(_QWORD*)(v23 + 40))
							sub_140643F00(v4, v19, 0, 0, 0i64, 1, 0);
					}
					v15 += 48i64;
					--v16;
				} while (v16);
			}
		}
		return 0i64;
	}
	else
	{
		v3 = qword_140C65C28;
		if (qword_140C65C28)
		{
			sub_140642F40((_QWORD*)qword_140C65C28);
			sub_14018B900(v3, 0);
		}
		qword_140C65C28 = 0i64;
		return 2147500037i64;
	}
}
// 14048C58E: variable 'v2' is possibly undefined
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64944: using guessed type int dword_140C64944;
// 140C65C28: using guessed type __int64 qword_140C65C28;

