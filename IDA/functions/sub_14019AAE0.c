//----- (000000014019AAE0) ----------------------------------------------------
__int64 __fastcall sub_14019AAE0(WCHAR** a1, unsigned __int64 a2, _DWORD* a3)
{
	WCHAR* i; // rax
	bool v7; // zf
	__int64 result; // rax
	int* v9; // rax
	int* v10; // r14
	int* v11; // rsi
	unsigned int v12; // ebx
	WCHAR* v13; // rdi
	__int64 v14; // [rsp+20h] [rbp-58h] BYREF
	int* v15; // [rsp+28h] [rbp-50h]
	int* v16; // [rsp+30h] [rbp-48h]
	int* v17; // [rsp+38h] [rbp-40h]
	int v18; // [rsp+80h] [rbp+8h] BYREF
	WCHAR* v19; // [rsp+88h] [rbp+10h] BYREF

	for (i = *a1; (unsigned __int64)i < a2; ++i)
	{
		if (*i != 32 && *i != 9)
			break;
	}
	v19 = i;
	if ((unsigned int)sub_14019D5F0(&v19, a2, &v18))
	{
		v7 = v18 == 0;
		*a1 = v19;
		result = 1i64;
		*a3 = !v7;
		return result;
	}
	v9 = sub_14018B280(16i64, 0);
	v10 = v9;
	v15 = v9;
	v16 = v9;
	v17 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	v11 = (int*)v19;
	if ((unsigned __int64)v19 < a2)
	{
		while (*(_WORD*)v11 == 32 || *(_WORD*)v11 == 9)
		{
			v11 = (int*)((char*)v11 + 2);
			if ((unsigned __int64)v11 >= a2)
				goto LABEL_13;
		}
		if ((unsigned __int64)v11 < a2 && ((unsigned int)sub_1407DFF20(*(_WORD*)v11) || *(_WORD*)v11 == 95))
		{
			v13 = (WCHAR*)v11 + 1;
			if ((unsigned __int64)v11 + 2 < a2)
			{
				do
				{
					if (!(unsigned int)sub_1407DFF14(*v13) && *v13 != 95)
						break;
					++v13;
				} while ((unsigned __int64)v13 < a2);
			}
			if (((char*)v13 - (char*)v11) >> 1)
			{
				sub_14001C310(&v14, v11, (int*)v13);
				v10 = v15;
			}
			else
			{
				sub_1407DB590(v10, v11, 0i64);
			}
			v12 = 1;
			if (!(unsigned int)sub_14018E2C0((__int64)v10, L"true"))
			{
				*a3 = 1;
				*a1 = v13;
				goto LABEL_14;
			}
			if (!(unsigned int)sub_14018E2C0((__int64)v10, L"false"))
			{
				*a3 = 0;
				*a1 = v13;
				goto LABEL_14;
			}
		}
	}
LABEL_13:
	v12 = 0;
LABEL_14:
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v12;
}
// 140A44098: using guessed type wchar_t aFalse_0[6];
// 140A440A8: using guessed type wchar_t aTrue_0[5];

