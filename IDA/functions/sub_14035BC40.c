//----- (000000014035BC40) ----------------------------------------------------
_QWORD* __fastcall sub_14035BC40(__int64 a1)
{
	__int64* v1; // r10
	__int64 v3; // rdx
	_QWORD* v4; // r8
	__int64 v5; // rcx
	__int64* v6; // r9
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	_QWORD* v10; // r8
	_QWORD* v11; // rax
	_QWORD* v12; // rdx
	_QWORD* v13; // rcx
	__int64 v14; // rdx
	_QWORD* result; // rax
	__int64 i; // rbx

	v1 = (__int64*)(a1 + 5416);
	v3 = *(_QWORD*)(a1 + 5416);
	if (v3)
	{
		do
		{
			v4 = *(_QWORD**)(v3 + 64);
			if (v4)
				*v4 = *(_QWORD*)(v3 + 72);
			v5 = *(_QWORD*)(v3 + 72);
			if (v5)
				*(_QWORD*)(v5 + 64) = *(_QWORD*)(v3 + 64);
			*(_QWORD*)(v3 + 64) = 0i64;
			*(_QWORD*)(v3 + 72) = 0i64;
			v3 = *v1;
		} while (*v1);
	}
	v6 = (__int64*)(a1 + 5424);
	v7 = *(_QWORD*)(a1 + 5424);
	if (v7)
	{
		do
		{
			v8 = *(_QWORD**)(v7 + 64);
			if (v8)
				*v8 = *(_QWORD*)(v7 + 72);
			v9 = *(_QWORD*)(v7 + 72);
			if (v9)
				*(_QWORD*)(v9 + 64) = *(_QWORD*)(v7 + 64);
			*(_QWORD*)(v7 + 64) = 0i64;
			*(_QWORD*)(v7 + 72) = 0i64;
			v7 = *v6;
		} while (*v6);
	}
	v10 = *(_QWORD**)(a1 + 5408);
	if (v10)
	{
		while (1)
		{
			v11 = (_QWORD*)v10[28];
			if (v11)
				break;
		LABEL_25:
			v13 = (_QWORD*)v10[31];
			if (v13)
				*v13 = v10[32];
			v14 = v10[32];
			if (v14)
				*(_QWORD*)(v14 + 248) = v10[31];
			v10[31] = 0i64;
			v10[32] = 0i64;
			v10 = *(_QWORD**)(a1 + 5408);
			if (!v10)
				goto LABEL_30;
		}
		while (1)
		{
			if (*v11)
			{
				if (*(_QWORD*)(*v11 + 320i64) && !v11[8])
				{
					v11[8] = v6;
					v12 = v11 + 9;
					v11[9] = *v6;
					*v6 = (__int64)v11;
				LABEL_22:
					if (*v12)
						*(_QWORD*)(*v12 + 64i64) = v12;
				}
			}
			else if (!*(_DWORD*)(a1 + 1904) && !v11[8])
			{
				v11[8] = v1;
				v12 = v11 + 9;
				v11[9] = *v1;
				*v1 = (__int64)v11;
				goto LABEL_22;
			}
			v11 = (_QWORD*)v11[7];
			if (!v11)
				goto LABEL_25;
		}
	}
LABEL_30:
	result = sub_140371430(v1, 64i64, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_140390460);
	for (i = *(_QWORD*)(a1 + 5464); i; i = *(_QWORD*)(i + 328))
		result = sub_140371430((__int64*)(i + 152), 32i64, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_140390480);
	return result;
}
// 140390480: using guessed type __int64 __fastcall sub_140390480();

