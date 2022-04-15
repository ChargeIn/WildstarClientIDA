//----- (0000000140832480) ----------------------------------------------------
void __fastcall sub_140832480(__int64 a1, void(__fastcall* a2)(_QWORD, _QWORD, __int64), __int64 a3)
{
	unsigned int v3; // ebx
	__int64 v4; // r12
	void(__fastcall * v5)(_QWORD, _QWORD, __int64); // r13
	__int64 v6; // rdi
	__int64 v7; // r15
	__int64 v8; // rcx
	_QWORD* v9; // rdi
	__int64 v10; // r14
	unsigned int v11; // ebx
	_QWORD* v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rbx
	_QWORD* v15; // rcx
	__int64 v16; // rax
	__int64 v17; // r13
	__int64 v18; // rax
	_DWORD* v19; // r12
	__int64 v20; // r15
	unsigned int v21; // ebp
	struct _RTL_CRITICAL_SECTION* v22; // r14
	__int64 v23; // rsi
	unsigned int v24; // ebp
	__int64* v25; // r14
	__int64 v26; // r15
	__int64 v27; // rsi
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30[2]; // [rsp+20h] [rbp-68h] BYREF
	__int64 v31[3]; // [rsp+30h] [rbp-58h] BYREF
	__int64 i; // [rsp+A8h] [rbp+20h]

	v3 = 0;
	v4 = a3;
	v5 = a2;
	v6 = 0i64;
	v7 = a1;
	do
	{
		v30[0] = 0i64;
		sub_14085CEB0(&qword_140C62458, v3, v30);
		v8 = v30[0];
		if (v30[0])
		{
			if (v30[0] == v7 && *(_QWORD*)(v6 + qword_140C61CC0 + 896))
			{
				v5(*(_QWORD*)(v6 + qword_140C61CC0 + 896), 0i64, v4);
				v8 = v30[0];
			}
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
				v30[0] = 0i64;
			}
		}
		++v3;
		v6 += 40i64;
	} while (v3 < 4);
	v9 = (_QWORD*)qword_140C61CC8;
	for (i = qword_140C61CC8; v9 != (_QWORD*)qword_140C61CD0; i = (__int64)v9)
	{
		v10 = *v9;
		v11 = 0;
		v12 = (_QWORD*)(*v9 + 928i64);
		do
		{
			v30[0] = 0i64;
			sub_14085CEB0((__int64*)(v10 + 1088), v11, v30);
			v13 = v30[0];
			if (v30[0])
			{
				if (v30[0] == v7 && *v12)
				{
					v5(*v12, 0i64, v4);
					v13 = v30[0];
				}
				if (v13)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
					v30[0] = 0i64;
				}
			}
			++v11;
			v12 += 5;
		} while (v11 < 4);
		v14 = *(_QWORD*)(v10 + 8);
		if (v14)
		{
			do
			{
				v15 = *(_QWORD**)(v14 + 16);
				if (v15)
					v16 = v15[3];
				else
					v16 = 0i64;
				v17 = *(_QWORD*)(v16 + 176);
				if (v15)
					v18 = v15[3];
				else
					v18 = 0i64;
				v19 = *(_DWORD**)(v18 + 160);
				if (v15)
				{
					v20 = (*(__int64(__fastcall**)(_QWORD*))(*v15 + 104i64))(v15);
					if (v20)
					{
						if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v19 + 24i64))(v19) == 4)
						{
							v21 = v19[42];
							v22 = qword_140C61BA8 + 398;
							EnterCriticalSection(qword_140C61BA8 + 398);
							v23 = *((_QWORD*)&v22[1].DebugInfo + v21 % 0xC1);
							if (v23)
							{
								while (*(_DWORD*)(v23 + 24) != v21)
								{
									v23 = *(_QWORD*)(v23 + 16);
									if (!v23)
										goto LABEL_31;
								}
								++* (_DWORD*)(v23 + 8);
								LeaveCriticalSection(v22);
								if (v23 == a1)
									a2(v20, v17, a3);
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
							}
							else
							{
							LABEL_31:
								LeaveCriticalSection(v22);
							}
						}
					}
				}
				v24 = 0;
				v25 = (__int64*)(v14 + 928);
				do
				{
					v26 = *v25;
					if (*v25)
					{
						v27 = *(_QWORD*)v19;
						v31[0] = 0i64;
						v28 = sub_140832B80(v14);
						(*(void(__fastcall**)(_DWORD*, _QWORD, __int64*, _QWORD))(v27 + 448))(
							v19,
							v24,
							v31,
							*(_QWORD*)(v28 + 176));
						v29 = v31[0];
						if (v31[0])
						{
							if (v31[0] == a1 && *(_QWORD*)(v26 + 32))
							{
								a2(*(_QWORD*)(v26 + 32), v17, a3);
								v29 = v31[0];
							}
							if (v29)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
								v31[0] = 0i64;
							}
						}
					}
					++v24;
					++v25;
				} while (v24 < 4);
				v14 = *(_QWORD*)(v14 + 8);
			} while (v14);
			v9 = (_QWORD*)i;
			v7 = a1;
			v4 = a3;
			v5 = a2;
		}
		++v9;
	}
}
// 140832774: conditional instruction was optimized away because rsi.8!=0
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;
// 140C62458: using guessed type __int64 qword_140C62458;
// 140832480: using guessed type __int64 var_58[3];

