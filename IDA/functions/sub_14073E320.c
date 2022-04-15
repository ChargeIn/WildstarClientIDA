#include "../winhttp.h"

//----- (000000014073E320) ----------------------------------------------------
int* __fastcall sub_14073E320(__int64 a1)
{
	int* v2; // rax
	_WORD* v3; // rax
	int* v4; // rax
	_WORD* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	int* v8; // rax
	int* v9; // rax
	_QWORD* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // r14
	int* v18; // rbp
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	int* result; // rax
	__int64 v24; // rbp
	__int64 v25; // rbx
	int* v26; // rax
	int* v27; // rdi
	unsigned __int64 v28; // rbx
	__int64 v29[24]; // [rsp+20h] [rbp-F8h] BYREF
	__int128 v30; // [rsp+E0h] [rbp-38h]
	int* v31; // [rsp+F0h] [rbp-28h]

	if (!*(_QWORD*)(a1 + 32))
	{
		v2 = sub_14018B280(18i64, 0);
		if (v2)
		{
			*(_QWORD*)v2 = off_140B55060;
			*((_QWORD*)v2 + 1) = 0i64;
		}
		else
		{
			v2 = 0i64;
		}
		v3 = v2 + 4;
		*v3 = 0;
		*(_QWORD*)(a1 + 32) = v3;
	}
	if (*(_DWORD*)(a1 + 76) != 12 && *(_DWORD*)(a1 + 72) != 4)
	{
		sub_1400B7090((__int64)v29, 624325);
		v29[0] = (__int64)off_140B69230;
		v31 = 0i64;
		v30 = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v30 = v4;
		*((_QWORD*)&v30 + 1) = v4;
		v31 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = *(_WORD**)(a1 + 24);
		if (v5 && *v5)
		{
			v6 = sub_14018B280(96i64, 0);
			if (v6)
			{
				v7 = sub_1404DDB40((__int64)v6, *(int**)(a1 + 24));
				goto LABEL_17;
			}
		}
		else
		{
			v8 = sub_14018B280(96i64, 0);
			if (v8)
			{
				v7 = sub_1404DDAF0((__int64)v8, 108);
				goto LABEL_17;
			}
		}
		v7 = 0i64;
	LABEL_17:
		*(_DWORD*)(v7 + 88) = 0;
		sub_1400B7480((__int64)v29, (_QWORD*)v7);
		switch (*(_DWORD*)(a1 + 72))
		{
		case 1:
			v13 = sub_14018B280(96i64, 0);
			if (v13)
			{
				v10 = (_QWORD*)sub_1404DDAF0((__int64)v13, 624362);
				goto LABEL_29;
			}
			break;
		case 2:
			v12 = sub_14018B280(96i64, 0);
			if (v12)
			{
				v10 = (_QWORD*)sub_1404DDAF0((__int64)v12, 624360);
				goto LABEL_29;
			}
			break;
		case 3:
			v11 = sub_14018B280(96i64, 0);
			if (v11)
			{
				v10 = (_QWORD*)sub_1404DDAF0((__int64)v11, 624363);
				goto LABEL_29;
			}
			break;
		default:
			v9 = sub_14018B280(96i64, 0);
			if (v9)
			{
				v10 = (_QWORD*)sub_1404DDAF0((__int64)v9, 624361);
			LABEL_29:
				sub_1400B7480((__int64)v29, v10);
				v14 = sub_14018B280(96i64, 0);
				if (v14)
					v15 = sub_1404DDB40((__int64)v14, *(int**)(a1 + 32));
				else
					v15 = 0i64;
				*(_DWORD*)(v15 + 88) = 0;
				sub_1400B7480((__int64)v29, (_QWORD*)v15);
				v16 = sub_1400B7660(v29);
				v17 = *(_QWORD*)(a1 + 40);
				v18 = *(int**)(v16 + 8);
				if (v18)
				{
					v19 = 0i64;
					if (*(_WORD*)v18)
					{
						do
							++v19;
						while (*((_WORD*)v18 + v19));
					}
					v20 = sub_14018B280(2 * v19 + 18, 0);
					if (v20)
					{
						*(_QWORD*)v20 = off_140B55060;
						*((_QWORD*)v20 + 1) = v19;
					}
					else
					{
						v20 = 0i64;
					}
					v21 = v20 + 4;
					v22 = 2 * v19;
					sub_1407DB590(v20 + 4, v18, v22);
					*(_WORD*)((char*)v21 + v22) = 0;
					*(_QWORD*)(a1 + 40) = v21;
				}
				else
				{
					*(_QWORD*)(a1 + 40) = 0i64;
				}
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				if ((_QWORD)v30)
					sub_14018B900(v30, 0);
				return (int*)sub_1400B7390(v29);
			}
			break;
		}
		v10 = 0i64;
		goto LABEL_29;
	}
	result = *(int**)(a1 + 32);
	v24 = *(_QWORD*)(a1 + 40);
	if (result)
	{
		v25 = *((_QWORD*)result - 1);
		v26 = sub_14018B280(2 * v25 + 18, 0);
		if (v26)
		{
			*(_QWORD*)v26 = off_140B55060;
			*((_QWORD*)v26 + 1) = v25;
		}
		else
		{
			v26 = 0i64;
		}
		v27 = v26 + 4;
		v28 = 2 * v25;
		result = sub_1407DB590(v26 + 4, *(int**)(a1 + 32), v28);
		*(_WORD*)((char*)v27 + v28) = 0;
		*(_QWORD*)(a1 + 40) = v27;
	}
	else
	{
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	if (v24)
		return (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

