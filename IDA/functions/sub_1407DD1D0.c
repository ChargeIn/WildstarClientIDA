//----- (00000001407DD1D0) ----------------------------------------------------
char* __fastcall sub_1407DD1D0(UINT* a1, int a2, _WORD* a3)
{
	_WORD* v3; // rbx
	UINT* v4; // rdi
	char* result; // rax
	int v6; // ebp
	int v7; // esi
	_WORD* v8; // rax
	_WORD* v9; // r14
	__int64 v10; // rbp
	int v11; // r12d
	wchar_t** v12; // r15
	char* v13; // r14
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // r9
	char* v20; // rbx
	int v21; // ebx
	char** v22; // r14
	__int16 v23[136]; // [rsp+30h] [rbp-208h] BYREF
	char v24[176]; // [rsp+140h] [rbp-F8h] BYREF

	v3 = a3;
	v4 = a1;
	if (a2)
	{
		if (a3)
			return (char*)sub_1407DD43C(a1, a2, (char*)a3);
		else
			return *(char**)&a1[8 * a2 + 6];
	}
	v6 = 1;
	v7 = 0;
	if (!a3)
		return (char*)sub_1407DCFFC((__int64)a1);
	if (*a3 != 76 || a3[1] != 67 || a3[2] != 95)
	{
		result = sub_1407DC888((char*)a3, (char*)v23, 131i64, v24, 85i64, 0i64);
		if (!result)
			return result;
		v21 = 0;
		v22 = (char**)(v4 + 6);
		do
		{
			if (v21)
			{
				if (!(unsigned int)sub_1407E6BB8((char*)v23, *v22) || sub_1407DD43C(v4, v21, (char*)v23))
					++v7;
				else
					v6 = 0;
			}
			++v21;
			v22 += 4;
		} while (v21 <= 5);
		if (!v6)
		{
		LABEL_25:
			if (!v7)
				return 0i64;
		}
		a1 = v4;
		return (char*)sub_1407DCFFC((__int64)a1);
	}
	while (1)
	{
		v8 = sub_1407E6DD4(v3, L"=;");
		v9 = v8;
		if (!v8)
			return 0i64;
		v10 = v8 - v3;
		if (!v10 || *v8 == 59)
			return 0i64;
		v11 = 1;
		v12 = &off_14095D388;
		do
		{
			if (!(unsigned int)sub_1407E6CDC(*v12, v3, v10) && v10 == sub_1407E6CA0(*v12))
				break;
			v12 += 3;
			++v11;
		} while ((__int64)v12 <= (__int64)&off_14095D3E8);
		v13 = (char*)(v9 + 1);
		v14 = sub_1407E6C60(v13, L";");
		v15 = v14;
		if (!v14 && *(_WORD*)v13 != 59)
			return 0i64;
		if (v11 <= 5)
		{
			if ((unsigned int)sub_1407E6D08((__int64)v23, 131i64, v13, v14))
			{
				sub_1407DC390();
				JUMPOUT(0x1407DD439i64);
			}
			if ((unsigned __int64)(2 * v15) >= 0x106)
			{
				_report_rangecheckfailure(v17, v16, v18, v19);
				__debugbreak();
			}
			v23[v15] = 0;
			if (sub_1407DD43C(v4, v11, (char*)v23))
				++v7;
		}
		v20 = &v13[2 * v15];
		if (*(_WORD*)v20)
		{
			v3 = v20 + 2;
			if (*v3)
				continue;
		}
		goto LABEL_25;
	}
}
// 1407DD434: control flows out of bounds to 1407DD439
// 1407DD41F: variable 'v17' is possibly undefined
// 1407DD41F: variable 'v16' is possibly undefined
// 1407DD41F: variable 'v18' is possibly undefined
// 1407DD41F: variable 'v19' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 14095D388: using guessed type wchar_t *off_14095D388;
// 14095D3E8: using guessed type wchar_t *off_14095D3E8;
// 14095D500: using guessed type wchar_t asc_14095D500[3];
// 14095D508: using guessed type wchar_t asc_14095D508[2];
// 1407DD1D0: using guessed type char var_F8[176];

