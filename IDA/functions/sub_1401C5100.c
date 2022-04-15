//----- (00000001401C5100) ----------------------------------------------------
__int64 __fastcall sub_1401C5100(_QWORD* Value, int a2, unsigned __int64 a3, int a4)
{
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // r11
	__int64 v10; // r12
	unsigned __int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // r10d
	unsigned __int64 v14; // rdx
	__int64 v15; // r15
	__int64 v16; // rdi
	unsigned __int64 v17; // rsi
	_QWORD* v18; // rbx
	__int64 v19; // rdi
	__int64 v20; // rbx
	unsigned __int64 v21; // r14
	int** v22; // rsi
	int* v23; // rax
	int* v24; // rcx
	unsigned __int64 v25; // rdi
	__int64 v26; // rsi
	unsigned __int64 v27; // rbp
	_QWORD* v28; // rbx
	unsigned __int64* v29; // rbx
	int v30; // [rsp+68h] [rbp+10h] BYREF

	v30 = a2;
	result = (unsigned int)dword_140C796C8;
	v6 = (__int64)Value;
	if (!dword_140C796C8 || dword_140C796C8 == a2)
	{
		if ((_DWORD)qword_140C785B4 && a4)
		{
			if (!TlsGetValue(dword_140C785BC))
			{
				result = sub_1401C4DF0();
				if (!(_DWORD)result)
				{
					LODWORD(qword_140C785B4) = 0;
					return result;
				}
			}
			Value = TlsGetValue(dword_140C785BC);
			if (*Value)
			{
				v7 = *Value - 1i64;
				*Value = v7;
				if (v7)
					Value[v7] += a3;
				a3 -= Value[*Value + 1];
			}
			else
			{
				IsDebuggerPresent();
			}
		}
		v8 = sub_1401C4BB0((__int64)Value, v6);
		v9 = v8;
		v10 = 56 * v8;
		++* (_QWORD*)(v10 + *((_QWORD*)&xmmword_140C78590 + 1) + 8);
		*(_QWORD*)(v10 + *((_QWORD*)&xmmword_140C78590 + 1) + 16) += a3;
		v11 = *(_QWORD*)(*((_QWORD*)&xmmword_140C78590 + 1) + 56 * v8 + 32);
		if (v11 < a3)
			v11 = a3;
		*(_QWORD*)(*((_QWORD*)&xmmword_140C78590 + 1) + v10 + 32) = v11;
		v12 = 2 * v8;
		++* (_QWORD*)(xmmword_140C785A0 + 8 * v12);
		*(_QWORD*)(xmmword_140C785A0 + 8 * v12 + 8) += a3;
		v13 = v30;
		result = a3 / qword_140C636B0;
		v14 = a3 % qword_140C636B0;
		if ((int)(a3 / qword_140C636B0) > 1500)
			result = sub_1400035B0();
		if (v13)
		{
			v15 = 40 * v9;
			v16 = 40 * v9 + *((_QWORD*)&xmmword_140C785A0 + 1);
			v17 = (*(__int64(__fastcall**)(int*, unsigned __int64))(v16 + 24))(&v30, v14);
			v18 = *(_QWORD**)(*(_QWORD*)(v16 + 16) + 8 * (v17 % *(_QWORD*)(v16 + 8)));
			if (!v18)
				goto LABEL_22;
			while (v17 != *v18 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v16 + 32))(&v30, v18 + 2))
			{
				v18 = (_QWORD*)v18[1];
				if (!v18)
					goto LABEL_22;
			}
			if (v18 == (_QWORD*)-24i64)
			{
			LABEL_22:
				v19 = 0i64;
				v20 = v15 + *((_QWORD*)&xmmword_140C785A0 + 1);
				if (*(_QWORD*)(v15 + *((_QWORD*)&xmmword_140C785A0 + 1)) == *(_QWORD*)(v15
					+ *((_QWORD*)&xmmword_140C785A0 + 1)
					+ 8))
					sub_1400290D0(v15 + *((_QWORD*)&xmmword_140C785A0 + 1));
				v21 = (*(__int64(__fastcall**)(int*))(v20 + 24))(&v30);
				v22 = (int**)(*(_QWORD*)(v20 + 16) + 8 * (v21 % *(_QWORD*)(v20 + 8)));
				v23 = sub_14018B280(32i64, 0);
				if (v23)
				{
					v24 = *v22;
					*(_QWORD*)v23 = v21;
					*((_QWORD*)v23 + 1) = v24;
					LODWORD(v24) = v30;
					*((_QWORD*)v23 + 3) = 0i64;
					v23[4] = (int)v24;
				}
				else
				{
					v23 = 0i64;
				}
				*v22 = v23;
				++* (_QWORD*)v20;
			}
			else
			{
				v19 = v18[3];
			}
			if (HIDWORD(qword_140C785B4))
			{
				if (HIDWORD(qword_140C785B4) == 1)
				{
					v25 = v19 + 1;
					goto LABEL_35;
				}
				if (IsDebuggerPresent())
					DebugBreak();
			}
			v25 = a3 + v19;
		LABEL_35:
			v26 = v15 + *((_QWORD*)&xmmword_140C785A0 + 1);
			v27 = (*(__int64(__fastcall**)(int*))(v15 + *((_QWORD*)&xmmword_140C785A0 + 1) + 24))(&v30);
			result = v27 / *(_QWORD*)(v26 + 8);
			v28 = *(_QWORD**)(*(_QWORD*)(v26 + 16) + 8 * (v27 % *(_QWORD*)(v26 + 8)));
			if (v28)
			{
				while (1)
				{
					if (v27 == *v28)
					{
						result = (*(__int64(__fastcall**)(int*, _QWORD*))(v26 + 32))(&v30, v28 + 2);
						if ((_DWORD)result)
							break;
					}
					v28 = (_QWORD*)v28[1];
					if (!v28)
						goto LABEL_43;
				}
				v29 = v28 + 3;
				if (v29)
					*v29 = v25;
			}
		LABEL_43:
			if (v25 > *(_QWORD*)(*((_QWORD*)&xmmword_140C78590 + 1) + v10 + 48))
			{
				*(_DWORD*)(*((_QWORD*)&xmmword_140C78590 + 1) + v10 + 40) = v30;
				result = *((_QWORD*)&xmmword_140C78590 + 1);
				*(_QWORD*)(v10 + *((_QWORD*)&xmmword_140C78590 + 1) + 48) = v25;
			}
		}
	}
	return result;
}
// 1401C519E: variable 'Value' is possibly undefined
// 1401C522C: variable 'v13' is possibly undefined
// 1401C5247: variable 'v9' is possibly undefined
// 1401C5257: variable 'v14' is possibly undefined
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;
// 140C785B4: using guessed type __int64 qword_140C785B4;
// 140C796C8: using guessed type int dword_140C796C8;

