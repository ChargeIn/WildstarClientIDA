//----- (000000014043B4E0) ----------------------------------------------------
void __fastcall sub_14043B4E0(
	__int64 a1,
	unsigned int a2,
	__int64 a3,
	unsigned int(__fastcall*** a4)(_QWORD, __int64))
{
	__int64 v4; // r10
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rsi
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	unsigned int v11; // edi
	__int64 v12; // rax
	_DWORD* v13; // rdi
	__int64 v14; // rcx
	int* v15; // rax
	char v16[24]; // [rsp+20h] [rbp-78h] BYREF
	int* v17; // [rsp+38h] [rbp-60h]
	int* v18; // [rsp+40h] [rbp-58h]
	int* v19; // [rsp+48h] [rbp-50h]
	__int64 v20; // [rsp+A0h] [rbp+8h]

	v4 = *(_QWORD*)(a3 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v4 || (v20 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v20 = *(_QWORD*)(a3 + 8);
	if (v20 != v4)
	{
		v8 = *(_QWORD*)(v20 + 40);
		v9 = *(_QWORD**)(v8 + 8);
		v10 = (_QWORD*)*v9;
		if ((_QWORD*)*v9 != v9)
		{
			do
			{
				v11 = *((_DWORD*)v10 + 4);
				if (qword_140C63840)
				{
					v12 = qword_140C63840(off_140A69AD8, v11, qword_140C63858);
				}
				else
				{
					if (dword_140C64E70)
					{
						v13 = 0i64;
					LABEL_20:
						if ((_DWORD)qword_140C7CD60 && v13 && !(unsigned int)sub_14043D3D0((__int64)dword_140C7CC70, v13))
						{
							if (v13[2])
							{
								sub_14043BD20(v14, (__int64)v13);
							}
							else
							{
								v15 = sub_14018B280(16i64, 0);
								v17 = v15;
								v18 = v15;
								v19 = v15 + 4;
								if (v15)
									*(_WORD*)v15 = 0;
								sub_14043CC10(v13, (__int64)v16);
								sub_14043BF30(dword_140C7CC70, (__int64)v16);
								if (v17)
									sub_14018B900((__int64)v17, 0);
							}
						}
						goto LABEL_29;
					}
					if ((int)sub_1401F4D40() < 0)
					{
						v13 = 0i64;
						goto LABEL_20;
					}
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 24i64))(qword_140C64B78, v11);
				}
				v13 = (_DWORD*)v12;
				if (!v12 || (**a4)(a4, v12))
					goto LABEL_20;
			LABEL_29:
				v10 = (_QWORD*)*v10;
			} while (v10 != *(_QWORD**)(v8 + 8));
		}
	}
}
// 14043B610: variable 'v14' is possibly undefined
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD60: using guessed type __int64 qword_140C7CD60;

